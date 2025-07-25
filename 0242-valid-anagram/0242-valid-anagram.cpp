class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> count(26, 0);

        for(char &ch : s){
            count[ch-'a']++;
        }

        for(char &ch : t){
            count[ch-'a']--;
        }
        
        // lamda
        bool allZeros = all_of(begin(count), end(count), [](int element){
            return element == 0;
        });

        return allZeros;
    }
};