// Platform - LeetCode Q.11
// You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).
// Find two lines that together with the x-axis form a container, such that the container contains the most water.

// Return the maximum amount of water a container can store.

// Notice that you may not slant the container.

class Solution {
public:
    int maxArea(vector<int>& height) {
        int lp=0,rp=height.size()-1;   //here lp= left pointer , rp = right pointer.
        int mostwater=0;

        while(lp<rp){
            int w = rp - lp;
            int h = min(height[lp],height[rp]);
            int currentwater= w * h;
            mostwater=max(mostwater,currentwater);

            height[lp]<height[rp]? lp++ : rp--;

        }
            return mostwater;
        }
        
};
