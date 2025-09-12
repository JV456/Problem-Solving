class Solution {
public:
    bool isPalindrome(int n) {
        long revnum = 0;
        int duplicate = n;
        if(n<0) return false;
        while(n>0){
            int ld = n%10;
            n = n/10;
            revnum = (revnum*10)+ld;
        }
        if (duplicate == revnum){
            return true;
        }
        else{
            return false;
        }
    }
};