#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream file("UserLog.txt", ios::app);
    file << "User 'John' logged in.\n";
    file << "User 'Jane' accessed the dashboard.\n";
    file << "User 'Bob' performed a file operation.\n";
    file.close(); // Closing a file.
    ifstream myfile("UserLog.txt");
    // Reading and displaying the file contents.
    cout << "User Activities Log:\n";
    string line;
    while (getline(myfile, line)) {
        cout << line << endl;
    }
}