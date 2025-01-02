//positive negative zero
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;

    if(n == 0){
        cout<<"zero"<<endl;
    }
    else if(n>0){
        cout<<"positive"<<endl;
    }
    else{
        cout<<"negative"<<endl;
    }

    return 0;
}