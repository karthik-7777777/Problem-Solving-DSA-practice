class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int s=encodedText.size();
        if(s==0)return encodedText;
        int col=s/rows;
        string ans="";
        for(int i=0;i<col;i++){
            int idx=i;
            while(idx<s){
                ans+=encodedText[idx];
                idx+=(col+1);
            }
        }
        int en=ans.size()-1;
        while(ans[en]==' ')en--;
        string result=ans.substr(0,en+1);
        return result;
    }
};  