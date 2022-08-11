/* An element is called a peak element if its value is not smaller than the value of its adjacent elements(if they exists).
Given an array arr[] of size N, Return the index of any one of its peak elements. */

#include<iostream>
using namespace std;

class Solution{
    public:
    int peakElement(int arr[], int n){
        
        for(int i=0;i<n;i++){
          
          if(i==0){
            if(arr[i]>arr[i+1])
               return i;
          }
          else if(i!=n-1){
              if((arr[i]>arr[i+1]) && (arr[i]>arr[i-1]))
                return i;
          }
          else{
              if(arr[i]>arr[i-1])
                  return i; 
          }
          
       }
       
       return 0;
    }
}; 
