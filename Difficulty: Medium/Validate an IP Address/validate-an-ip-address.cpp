class Solution {
  public:
    bool isValidPart(const string& part) {
        if (part.empty() || (part.size() > 1 && part[0] == '0')) return false;
        if (part.size() > 3) return false;
        for (char c : part) {
            if (!isdigit(c)) return false;
        }
        int num = stoi(part);
        return num >= 0 && num <= 255;
    }
    
    bool isValid(string s) {
        stringstream ss(s);
        string part;
        int count = 0;
        while (getline(ss, part, '.')) {
            if (!isValidPart(part)) return false;
            count++;
        }
        return count == 4;
    }
};