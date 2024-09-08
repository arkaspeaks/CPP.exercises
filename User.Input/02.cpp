// Fill in the missing parts to print the sum of two numbers (which is put in by the user):

#include <iostream>
using namespace std;

int main(){
    int x, y ;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;
    int sum = (x+y);
    cout << "the value of the sum is: "<< sum << endl;
    return 0;
}