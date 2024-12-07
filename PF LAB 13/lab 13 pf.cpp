#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main() {
    ofstream myfile("filename.txt");
    // Writing a file
    myfile<< "This is a sample file.\n";
    myfile<< "Line 1: Hello, World!\n";
    myfile<< "Line 2: File handling in C++.";
    myfile.close(); //closing a file
    return 0;
}