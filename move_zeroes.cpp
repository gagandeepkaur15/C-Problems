#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroPosition = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]!=0){
                swap(nums[i],nums[nonZeroPosition]);
                nonZeroPosition++;
            } 
        }
    }
};