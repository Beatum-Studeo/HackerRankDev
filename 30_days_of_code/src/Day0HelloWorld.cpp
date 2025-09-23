/**
* Day 0: Hello, World.
 * https://www.hackerrank.com/challenges/30-hello-world/problem
 */

#include "../include/Day0HelloWorld.h"

#include <iostream>
#include <string>

using namespace std;

Day0HelloWorld::Day0HelloWorld() = default;
Day0HelloWorld::~Day0HelloWorld() = default;

int Day0HelloWorld::day0HelloWorld(){

 // Declare a variable named 'input_string' to hold our input.
 string input_string;

 // Read a full line of input from stdin (cin) and save it to our variable, input_string.
 getline(cin, input_string);

 // Print a string literal saying "Hello, World." to stdout using cout.
 cout << "Hello, World." << endl;

 // TODO: Write a line of code here that prints the contents of input_string to stdout.

 return 0;
}
