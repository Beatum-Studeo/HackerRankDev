#include "../include/Day18QueuesAndStacks.h"
#include <iostream>
#include <string>
#include <queue>
#include <stack>

class Day18Solution {
    
    //Write your code here
    
private:
    std::stack<char> stack; // A stack of doubles
    std::queue<char> queue; // A queue of integers

public:
    
    // method that pushes a character onto a stack.
    void pushCharacter(char ch)
    {
        stack.push(ch);
    }

    // method that enqueues a character in the queue instance variable.
    void enqueueCharacter(char ch)
    {
        queue.push(ch);
    }

    // method that pops and returns the character at the top of the stack instance variable.
    char popCharacter()
    {
        return stack.top();
    }

    // method that dequeues and returns the first character in the queue instance variable.
    char dequeueCharacter()
    {
        return queue.front();
    }
};

int Day18QueuesAndStacksNS::day18QueuesAndStacks() {
    // read the string s.
    std::string s;
    getline(std::cin, s);
    
    // create the Solution class object p.
    Day18Solution obj;
    
    // push/enqueue all the characters of string s to stack.
    for (int i = 0; i < s.length(); i++) {
        obj.pushCharacter(s[i]);
        obj.enqueueCharacter(s[i]);
    }
    
    bool isPalindrome = true;
    
    // pop the top character from stack.
    // dequeue the first character from queue.
    // compare both the characters.
    for (int i = 0; i < s.length() / 2; i++) {
        if (obj.popCharacter() != obj.dequeueCharacter()) {
            isPalindrome = false;
            
            break;
        }
    }
    
    // finally print whether string s is palindrome or not.
    if (isPalindrome) {
        std::cout << "The word, " << s << ", is a palindrome.";
    } else {
        std::cout << "The word, " << s << ", is not a palindrome.";
    }
    
    return 0;
}
