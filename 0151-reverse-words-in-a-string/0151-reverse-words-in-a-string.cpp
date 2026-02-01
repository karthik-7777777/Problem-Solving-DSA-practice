class Solution {
public:
    string reverseWords(string s) {
        string ans="";
        int i=s.size()-1,j=s.size()-1;
        while(j>=0){
            if(s[j]==' '){
                j--;
            }
            else break;
        }
        i=j;
        while(j>=0){
            if(s[j]==' '){
                for(int k=j+1;k<=i;k++){
                    ans+=s[k];
                }
                ans+=' ';
                j--;
                while(j>=0){
                    if(s[j]==' '){
                        j--;
                    }
                    else break;
                }
                i=j;
            }
            else{
                j--;
            }
        }
        for(int k=j+1;k<=i;k++){
            if(s[k]!=' '){
               ans+=s[k];
            }
        }
        if(ans.back()==' ')ans.pop_back();
        return ans;
    }
};