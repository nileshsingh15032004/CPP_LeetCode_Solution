class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
     vector<vector<int>> ans=image;
     int n=image.size();
       for(int i=0; i<n; i++)
         for(int j=0; j<n; j++)
         {
             ans[i][j] = image[i][n-1-j];
           
             ans[i][j] =  1-(ans[i][j]);
         }


     return ans;

    }
};
