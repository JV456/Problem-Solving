class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n=words.size(), i=0, bit1 = 1, bit2 = 0;
        vector<string> seq1, seq2;
        for(int i=0; i<n; i++) {
            if(groups[i] == bit1) {
                seq1.push_back(words[i]);
                bit1 = !bit1;
            }
            if(groups[i] == bit2) {
                seq2.push_back(words[i]);
                bit2 = !bit2;
            }
        }
        return seq1.size() > seq2.size()? seq1 : seq2;
    }
};