#include<iostream>
#include<vector>
using namespace std;

long long int sqrtInt(int n){
    int s=0;
    int e=n;
    long long int mid=s+(e-s)/2;

    long long int ans=-1;
    while(s<=e){
        long long int square = mid*mid;
        if(square==n){
            return mid;
        }
        if(square<n){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

double findPrecision(int n, int precision,int tempSol){
    double factor=1;
    double ans=tempSol;

    for(int i=0; i<precision; i++){
        factor=factor/10;

        for(double j=ans; j*j<n; j+=factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int n;
    double ans;
    cout<<"Enter the number: "<<endl;
    cin>>n;

    int tempSol=sqrtInt(n);
    ans=findPrecision(n,3,tempSol);
    cout<<"Answer is: "<<ans<<endl;
    return 0;
}