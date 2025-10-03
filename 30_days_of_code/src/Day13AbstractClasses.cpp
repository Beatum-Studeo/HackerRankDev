#include "../include/Day13AbstractClasses.h"
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>


class Book
{
protected:
    std::string title;
    std::string author;

public:
    Book(std::string t, std::string a)
    {
        title = t;
        author = a;
    }

    virtual void display() =0;
};

// Write your MyBook class here

//   Class Constructor
//   
//   Parameters:
//   title - The book's title.
//   author - The book's author.
//   price - The book's price.
//
// Write your constructor here


//   Function Name: display
//   Print the title, author, and price in the specified format.
//
// Write your method here

// End class
class MyBook : public Book
{
private:
    int price;

public:
    MyBook(std::string title, std::string author, int price) : Book(title, author)
    {
        this->price = price;
    }

    ~MyBook() = default;

    void display() override
    {
        std::cout << "Title: " << title << "\n";
        std::cout << "Author: " << author << "\n";
        std::cout << "Price: " << price << "\n";
    }
};

int Day13AbstractClassesNS::day13AbstractClasses()
{
    std::string title, author;
    int price;
    getline(std::cin, title);
    getline(std::cin, author);
    std::cin >> price;
    MyBook novel(title, author, price);
    novel.display();
    return 0;
}
