class Solution {
  public:
    // Function to check if a string is a palindrome.
    
    bool isAlphanumeric(char ch){
        if((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z')){
            return true;
        }
        return false;
    }
    bool isPalindrome(string& s) {
        // code here
        int st = 0;
        int end = s.size()-1;
        
        while(st<end){
            if(!isAlphanumeric(s[st])){
                st++; continue;
            }
            if(!isAlphanumeric(s[end])){
                end--; continue;
            }
            
            if(tolower(s[st]) != tolower(s[end])){
                return false;
            }
            st++; end--;
        }
        return true;
    }
};