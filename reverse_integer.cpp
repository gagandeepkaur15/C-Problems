#include<iostream>
#include <limits.h>
using namespace std;

int main(){
    int n, ans;
    cout<<"Enter the integer: ";
    cin>>n;
    while(n!=0){
        int digit = n%10;
        //not taking the condition (ans*10)>INT_MAX coz ans*10 will again go out of range
        if(ans>(INT_MAX/10) || ans<(INT_MIN/10)){
            return 0;
        }
        ans=(ans*10)+digit; 
        //(2^31-10)*10 will make the ans out of range thus applied a condition
        n=n/10;
    }
    return ans;
}
