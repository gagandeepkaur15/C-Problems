// Given an integer x, return true if x is palindrome integer else return false

#include<iostream>
#include<string>
using namespace std;

class chk_palindrome {
public:
    bool isPalindrome(int x) {
        
        string str;
        bool flag=0;
        str=to_string(x);
        
        for(int i=0; i<str.size(); i++){
            if(str[i]!=str[str.size()-i-1]){
                flag=1;
                break;
            }
        }
        
        if(flag==0)
            return true;
        else
            return false;
    }
};

int main(){
    chk_palindrome sol;
    int num;
    bool ans;
    cin>>num;
    ans=sol.isPalindrome(num);
    cout<<ans;
}