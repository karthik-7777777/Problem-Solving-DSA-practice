class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows==1)return s;
        int n=s.size();
        vector<int>t(n);
        int i=0,x=1;
        while(i<n && x<=numRows){
            t[i]=x;
            i++;
            x++;
            if(x==numRows){
                while(x>1 && i<n){
                    t[i]=x;
                    i++;
                    x--;
                }
            }
        }
        string ans="";
        for(int i=1;i<=numRows;i++){
            for(int j=0;j<n;j++){
                if(t[j]==i)ans+=s[j];
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna