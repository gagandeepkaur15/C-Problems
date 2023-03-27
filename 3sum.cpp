#include<iostream>
using namespace std;

int main(){
    int arr[6]={-1,0,1,-2,-1,-4};
    int ans[10], index=0;

    for(int i=0; i<6; i++){
        for(int j=0; j<6; j++){
            for(int k=0; k<6; k++){
                if((arr[i]+arr[j]+arr[k])==0){
                    ans[index]=arr[i];
                    ans[index+1]=arr[j];
                    ans[index+2]=arr[k];
                    index+=3;
                }
            }
        }
    }
    cout<<ans;
}