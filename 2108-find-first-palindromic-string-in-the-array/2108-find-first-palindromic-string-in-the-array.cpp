class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++){
            int l=0,r=words[i].size()-1;
            while(l<=r){
                if(words[i][l]==words[i][r]){
                    l++;
                    r--;
                }
                else break;
            }
            if(l>=r)return words[i];
        }
        return "";
    }
};