// Print "1" if x is equal to y, print "2" if x is greater than y, otherwise print "3".

#include <iostream>
using namespace std;

int main (){
    int x, y;
    x= 12;
    y= 14;
    if (x ==y){
        cout << "1"<<endl;
    }
    else if (x>y){
        cout <<"2"<<endl;
    }
    else {
        cout<<"3"<<endl;
    }
return 0;
}