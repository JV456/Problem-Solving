class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
          for(auto &row : image){
              reverse(row.begin() , row.end());

              for(auto &rev : row){
                     rev ^=1; 
              }
          }
          
          return image;
    }
};