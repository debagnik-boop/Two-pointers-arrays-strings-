//Leetcode link: https://leetcode.com/problems/maximum-erasure-value/

class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        int sum=0, maxSum=0;
        unordered_set<int> lookUp;
        while(r<nums.size()){
            if (lookUp.find(nums[r])==lookUp.end()){
                lookUp.insert(nums[r]);
                sum=sum+nums[r];
                maxSum=max(sum,maxSum);
                r++;
            }
            else{
                lookUp.erase(nums[l]);
                sum=sum-nums[l];
                l++;
            }
        }
        return maxSum;
    }
};
