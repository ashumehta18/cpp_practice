//print days of month in cpp  31 or 30 but if feb then 29 or 30 

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;

    switch(1-12){
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
        cout<<"31 days in month"<<endl;

        case 4:
        case 6:
        case 9:
        case 11:
        cout<<"30 days in a month"<<endl;

        case 2:
        cout<<"29 either 30"<<endl; 

        default:
        cout<<"enter a valid month"<<endl;
    }
       
       return 0;
}