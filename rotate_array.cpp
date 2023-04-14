#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotatedArr(nums.size());
        for(int i=0; i<nums.size();i++){
            rotatedArr[(i+k)%nums.size()]=nums[i];
        }
        nums=rotatedArr;
    }
};