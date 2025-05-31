class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        stack <char> st;
        for(int i = 0; i < n; i++){
            st.push(s[i]);
        }

        int j = 0;

        while(!st.empty()){
            char elem = st.top();
            st.pop();
            s[j] = elem;
            j++;
        }
    }
};