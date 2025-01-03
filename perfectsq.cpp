//perfect sq check
#include<iostream>
#include<bits/stdc++.h>
using namespace std; 
int main(){
    int n;
    cin>>n;
    int k = sqrt(n);
    //cout<<k<<endl;
    if(k*k == n){
        cout<<"yes its a PERFECT SQ."; //perfect sq
    }else{
        cout<<"no its not a perfect sq."; //not 
    }
   return 0;
}
