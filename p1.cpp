//ques
* * * * * * *
* * *   * * *
* *       * *
*           *
* *       * *
* * *   * * *
* * * * * * *


#include<iostream>
using namespace std;
int main(){
    int n,i,j;
    for(i=1;i<=7;i++){
        for(j=1;j<=7;j++){
            if(i<=4){
            if((j>=1 && j<=5-i) || (j>=3+i &&j<=7))
            cout<<"*";
                else{
                    cout<<" ";
                }
            }else if(i>4){
            if((j>=1 &&j<=i-3) ||(j>=11-i && j<=7))
                cout<<"*";
                else
                cout<<" ";
            }
        }
         cout<<endl;
    }
}

