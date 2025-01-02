#include<iostream>
using namespace std;
int main(){
    double marks;
    cin>>marks;
    if(marks>0 && marks<35){
        cout<<"grade F";
    }
    else if(marks>35 && marks<45){
        cout<<"grade E";
    }
    else if(marks>45 && marks<50){
        cout<<"grade D";
    }
    else if(marks>50 && marks<60){
        cout<<"grade C";
    }
    else if(marks>60 && marks<70){
        cout<<"grade B";
    }
    else if(marks>70 && marks<80){
        cout<<"grade A";
    }
    else if(marks>80 && marks<90){
        cout<<"grade A+";
    }
    else if(marks>90 && marks<100){
        cout<<"grade O+";
    }
    else{
        cout<<"invalid marks";
    }
   return 0; 
}

//checked 