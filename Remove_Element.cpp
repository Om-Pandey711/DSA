//Platform - Leet Code. Q27
//Have to remove the given input value from the given array and and then have to tell the remaning no.s of elements in the particular array given with [k].


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k= 0;
        
        for(int i=0;i<nums.size();i++){
         
            if(nums[i]!=val){
                nums[k]=nums[i];
                k++;
            }
           
        }
        
        return k;
    }
};
