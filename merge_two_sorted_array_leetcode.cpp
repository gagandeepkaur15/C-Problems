#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0, j=0, temp=0;
        while(i<m && j<n && nums1[i]!=0){
            if(nums1[i]<nums2[j] ){
                i++;
            }
            else if(nums1[i]>=nums2[j]){
                temp=nums1[i+1];
                nums1[i+1]=nums1[i];
                nums1[i]=nums2[j];
                nums1[i+2]=temp;
                i+=2,j++;
            }
        }
        while(j<n){
            nums1[i]=nums2[j];
            i++,j++;
        }

        for (int i:nums1){
            cout<<i<<" ";
        }
}

int main(){
    vector<int> arr1;
    arr1.push_back(1);
    arr1.push_back(2);
    arr1.push_back(3);
    arr1.push_back(0);
    arr1.push_back(0);
    arr1.push_back(0);

    vector<int> arr2;
    arr2.push_back(2);
    arr2.push_back(5);
    arr2.push_back(6);

    merge(arr1, 6, arr2, 3);
}

// SOLUTION 2

// class Solution {
// public:
//     void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//         int i=m-1 , j=n-1 ;
//         while(i>=0 && j>=0 ){
//             if(nums1[i]>=nums2[j]){
//                 nums1[i+j+1]=nums1[i] ;
//                 i-- ;
//                 }else{
//                     nums1[i+j+1]=nums2[j];
//                     j-- ;
//                 }
//         }
//         while(j>=0){
//                     nums1[j]=nums2[j];
//                     j-- ;
//                 }    
//     }
// };