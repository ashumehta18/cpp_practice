#include<iostream>
using namespace std;
int main(){
    int age;
    cin>>age;
    if(age>=0 && age<=18){
        cout<<"not an adult";
    }
    else if(age>18 && age<=150){
        cout<<"adult";
    }else{
        cout<<"age is not valid";
    }

    return 0;
}
//checked
