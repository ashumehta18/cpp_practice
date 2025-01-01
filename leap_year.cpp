// Write a program that checks whether a given year is a leap year or not. A leap year is divisible by 4,
// except for years that are both divisible by 100 and not divisible by 400.
// Sample Input 1:
// Enter a year: 2020

// Sample Output 1:
// 2020 is a leap year.

// Sample Input 2:
// Enter a year: 1900


// Sample Output 2:
// 1900 is not a leap year.

#include<iostream>
using namespace std;
int main(){
    int year;
    cin>>year;
    
    if((year % 4 == 0 && year % 100 != 0)|| year%400 == 0){
        cout<<year<<" "<<"is a leap year"<<endl;
    }
    else{
        cout<<year<<" "<<"is not a leap year"<<endl;
    }

    return 0;
}