#include "../include/Day8Maps.h"

#include <iostream>
#include <map>


int Day8MapsNS::day8Maps() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    std::cin >> n;
    int i = 0;
    std::map<std::string,std::string> phone_book;
    while(i < n){
        std::string name;
        std::string number;
        std::cin >> name >> number;
        phone_book[name] = number;
        i++;
    } 
    std::string name;
    while(std::cin >> name){
        if(phone_book.count(name) > 0){
            std::cout << name << "=" << phone_book[name] << std::endl;
        }
        else {
            std::cout << "Not found"<< std::endl;
        }
    }
    
    return 0;
}