class Solution {
public:
    double res=1;
    double myPow(double x, long int n) {
        if(n==0) return 1;
        if(n==1) return x;
        if(n<0){
            return 1/myPow(x,-n);
        }
        if(n%2==1){
            return x*myPow(x,n-1);
        }
        else{
            res=myPow(x,n/2);
            return res*res;
        }
    }
};