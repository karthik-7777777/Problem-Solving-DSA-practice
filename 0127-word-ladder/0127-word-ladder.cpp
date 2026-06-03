class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        if(find(wordList.begin(),wordList.end(),endWord)==wordList.end())return 0;
        int ans=0;
        int n=wordList.size();
        vector<int>vis(n,0);
        queue<string>q;
        q.push(beginWord);
        ans++;
        while(!q.empty()){
            int size=q.size();
            while(size--){
                string curr=q.front();
                q.pop();
                for(int i=0;i<wordList.size();i++){
                    int dif=0;
                    if(vis[i]!=1){
                        for(int j=0;j<curr.size();j++){
                            if(curr[j]!=wordList[i][j]){
                                dif++;
                                if(dif>1)break;
                            }
                        }
                        if(dif==1){
                            if(wordList[i]==endWord)return ans+1;
                            q.push(wordList[i]);
                            vis[i]=1;
                        }
                    }
                }
            }
            ans++;
        }
        return 0;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna