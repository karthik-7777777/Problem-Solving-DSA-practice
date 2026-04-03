class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0;i<image.size();i++){
            int l=0,r=image.size()-1;
            while(l<=r){
                swap(image[i][l],image[i][r]);
                l++;
                r--;
            }
            for(int j=0;j<image[i].size();j++){
                if(image[i][j])image[i][j]--;
                else image[i][j]++;
            }
        }
        return image;
    }
};