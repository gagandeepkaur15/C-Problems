/*
There are n stairs, a person standing at the bottom wants to reach the top. The person can climb either 1 stair or 2 stairs at a time. Count the number of ways, the person can reach the top.
*/

#include<iostream>
#include<vector>
using namespace std;

int nstairs(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int ans = nstairs(n-1) + nstairs(n-2);
}

int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    cout<<nstairs(n);
}