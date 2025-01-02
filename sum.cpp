#include<iostream>
using namespace std;
int sum(int a, int b){
    
    int res = a+b;
    return res;
    
}
int main(){
    int a,b;
    cin>>a>>b;
    int c = sum(a,b);
    cout<<c;
    return 0;
}
//checked