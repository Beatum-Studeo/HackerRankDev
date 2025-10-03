#include "../include/Day12Inheritance.h"

#include <iostream>
#include <vector>

class Person{
protected:
    std::string firstName;
    std::string lastName;
    int id;
public:
    Person(std::string firstName, std::string lastName, int identification){
        this->firstName = firstName;
        this->lastName = lastName;
        this->id = identification;
    }
    void printPerson(){
        std::cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
    }
	
};

class Student :  public Person{
private:
    std::vector<int> testScores;  
public:
    /*	
    *   Class Constructor
    *   
    *   Parameters:
    *   firstName - A string denoting the Person's first name.
    *   lastName - A string denoting the Person's last name.
    *   id - An integer denoting the Person's ID number.
    *   scores - An array of integers denoting the Person's test scores.
    */
    // Write your constructor here
    Student(std::string firstName, std::string lastName, int identification, std::vector<int> testScores): Person(firstName, lastName, identification)
    {
        this->testScores = testScores;
    }
    ~Student() = default;

    /*	
    *   Function Name: calculate
    *   Return: A character denoting the grade.
    */
    // Write your function here
    char calculate()
    {
        int test_count = testScores.size();
        int sum = 0;
        for (int i = 0; i < test_count; i++)
        {
            sum += testScores[i];
        }
        int average = sum / test_count;

        // return letter grade average
        if (average >= 90 && average <= 100)
        {
            return 'O';
        }
        else if (average >= 80 && average < 90)
        {
            return 'E';
        }
        else if (average >= 70 && average < 80)
        {
            return 'A';
        }
        else if (average >= 55 && average < 70)
        {
            return 'P';
        }
        else if (average >= 40 && average < 55)
        {
            return 'D';
        }
        else // less than 40
        {
            return 'T';
        }
        
    }
};

int Day12InheritanceNS::day12Inheritance() {
    std::string firstName;
    std::string lastName;
    int id;
    int numScores;
    std::cin >> firstName >> lastName >> id >> numScores;
    std::vector<int> scores;
    for(int i = 0; i < numScores; i++){
        int tmpScore;
        std::cin >> tmpScore;
        scores.push_back(tmpScore);
    }
    Student* s = new Student(firstName, lastName, id, scores);
    s->printPerson();
    std::cout << "Grade: " << s->calculate() << "\n";
    return 0;
}