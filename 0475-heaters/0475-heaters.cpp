class Solution {
public:
    int findRadius(vector<int>& houses, vector<int>& heaters) {
        sort(houses.begin(), houses.end());
        sort(heaters.begin(), heaters.end());
        int htrptr = 0, radius = 0;
        int m = heaters.size();
        for (int house : houses) {
            while (htrptr < m - 1 && abs(heaters[htrptr + 1] - house) <= abs(heaters[htrptr] - house)) {
                ++htrptr;
            }
            radius = max(radius, abs(heaters[htrptr] - house));
        }
        return radius;
    }
};