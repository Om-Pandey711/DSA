//Platform - LeetCode Q.50
//Implement pow(x, n), which calculates x raised to the power n (i.e., xn).
//constraints - -100.0 < x < 100.0
//-231 <= n <= 231-1
// n is an integer.
//Either x is not zero or n > 0.
// -104 <= xn <= 104

class Solution {
public:
    double myPow(double x, int n) {
        long binaryform = n;
        if(n==0){
            return 1;
        }
        if(n==1){
            return x;
        }
        if(x==0){
            return 0;
        }
        if(x==1){
            return 1;
        }
        if(binaryform<0){
            binaryform = -binaryform;
            x = 1/x;
        }
        double ans=1;
        while(binaryform>0){
            if(binaryform % 2 == 1){
                ans *= x;
            }
            x *= x;
            binaryform /= 2;
        }
        return ans;
    }
};
