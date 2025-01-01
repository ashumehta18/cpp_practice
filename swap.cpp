// swap two no. using third variable
#include<iostream>
using namespace std;
int main(){
    int a,b; //temp will act as third varriable
    cin>>a;
    cin>>b;
    cout << "Before swap: a = " << a << ", b = " << b <<endl;

    // Swap using temporary variable
    int temp = a;
    a = b;
    b = temp;

    cout << "After swap: a = " << a << ", b = " << b <<endl;

    return 0;
}

