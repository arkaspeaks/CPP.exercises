//Use the correct function to read a line of text which is put in by the user.

#include <iostream>
using namespace std;

int main (){
    string fullName;
    cout << "Type your full name: ";
    getline(cin, fullName);
    cout << "Your name is: " << fullName<< endl;
    return 0;
}