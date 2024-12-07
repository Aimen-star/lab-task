#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream textfile("output.txt");
    // Writing a file
    textfile<< "Output File\n";
    textfile<< "Line 1: Writing to a file in C++.\n";
    textfile<< "Line 2: File handling is essential for data manipulation.";
    textfile.close(); // Closing a file.
    return 0;
}