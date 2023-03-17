// Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

// If target is not found in the array, return [-1, -1].

// You must write an algorithm with O(log n) runtime complexity.

#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:

    int first(vector<int>& arr, int target){
        int s=0, e=arr.size()-1, ans=-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(arr[mid]==target){
                ans=mid;
                e=mid-1;
            }
            else if(target>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

            mid=s+(e-s)/2;
        }
        return ans;
    }

    int last(vector<int>& arr, int target){
        int s=0, e=arr.size()-1, ans=-1;
        int mid=s+(e-s)/2;

        while(s<=e){
            if(arr[mid]==target){
                ans=mid;
                s=mid+1;
            }
            else if(target>arr[mid]){
                s=mid+1;
            }
            else{
                e=mid-1;
            }

            mid=s+(e-s)/2;
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int one, two;
        one=first(nums, target);
        two=last(nums, target);
        ans.push_back(one);
        ans.push_back(two);
        return ans;
    }
};

