// Write a function to find the longest common prefix string amongst an array of strings.
// If there is no common prefix, return an empty string "".

#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    vector<string> strs;
    int size;
    cin>>size;
    string s;
    string str=" ";
    bool flag=true;
    
    for(int i=0; i<size; i++){
        cin>>s;
        strs.push_back(s);
    }
    
    for(int i=0; i<strs[0].size(); i++){
        char chk=strs[0][i];
        for(int j=0; j<strs.size(); j++){
            if(chk != strs[j][i]){
                flag=false;
                break;
            }
        }
        if (flag==true){
            str.push_back(chk);
        }
    }
    cout<<str;
}