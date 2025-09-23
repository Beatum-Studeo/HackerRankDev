#include "../include/Day6ReviewLoop.h"

#include <iostream>
#include <vector>

int Day6ReviewLoopNS::day6ReviewLoop() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t; 
    std::cin >> t;
    int i = 0;
    while(i < t){
        std::string s;
        std::cin >> s;
        int index = 0;
        std::vector<char> evens, odds;
        while(index < s.size()){
            if(index % 2 > 0){
                odds.push_back(s[index]);
            }
            else {
                evens.push_back(s[index]);
            }
            index++;
        }
        std::string evensStr(evens.begin(),evens.end());
        std::string oddsStr(odds.begin(),odds.end());
        std::cout << evensStr << " " << oddsStr << std::endl;
        i++;
    }
    return 0;
}
