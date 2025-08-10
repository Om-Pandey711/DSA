//Platform - LeetCode Q.169
//The majority element is the element that appears more than ⌊n / 2⌋ times. You may assume that the majority element always exists in the array.[given info.]
//Used understandable variables so that it doesn't bother so much to understand the code.

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int freq=0;
        int ans=0;

        for(int val=0;val<nums.size();val++){
            if(freq==0){
                ans=nums[val];
            }
            if(ans==nums[val]){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};
