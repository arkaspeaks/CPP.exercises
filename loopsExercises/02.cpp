// 2. Sum of First N Natural Numbers

//Write a program to find the sum of the first N natural numbers (1 to N).
//Formula: Sum = [N*(N+1)]/2

#include <iostream>
using namespace std;

int main (){
    int N, a, sum;
    a= 1;
    sum = 0;
    cout <<"what number (N): ";
    cin >> N;
    while (a<=N){
        sum = sum +a;
        a++;
    }
cout <<"the value of sum is: "<< sum << endl;
return 0;
}
// incase the value of N is 10;
// 1+2+3+4+5+6+7+8+9+10= 55