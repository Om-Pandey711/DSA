//Platform - LeetCode Q.33
//Have to find the give target in rotated array and have to return the position of it in the given array but runtime complexity should be 0(log n).


class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st=0,n=nums.size();
        int end=n-1;

        while(st<=end){
            int mid=st+(end-st)/2;
            if(nums[mid]==target){
                return mid;
            }
         
         
          if(nums[st]<=nums[mid]){//left shorted array hoga mid ke..
            if(nums[st]<=target && target<=nums[mid]){
                end = mid - 1;
            }
            else{
                st = mid +1;
            }
          }
            else{//right shorted array ki condition...
                if(nums[mid]<=target && target<=nums[end]){
                    st = mid + 1;
                }
                else{
                    end = mid - 1;
                }
            }
          }
  return -1;
        
      
    }
};
