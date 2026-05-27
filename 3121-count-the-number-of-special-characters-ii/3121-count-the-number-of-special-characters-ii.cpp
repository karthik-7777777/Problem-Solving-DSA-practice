class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,pair<int,int>>mp;
        int ans=0;
        for(int i=0;i<word.size();i++){
            if(word[i]>='a' && word[i]<='z'){
                if(mp.find(word[i])==mp.end()){
                    mp[word[i]].first=i;
                    mp[word[i]].second=-1;
                }
                else{
                    mp[word[i]].first=i;
                }
            }
            else if(word[i]>='A' && word[i]<='Z'){
                char ch=word[i]+32;
                if(mp.find(ch)!=mp.end()){
                    if(mp[ch].second==-1)mp[ch].second=i;
                }
                else{
                    mp[ch].second=i;
                    mp[ch].first=INT_MAX;
                }
            }
        }
        // for(auto i:word){
        //     if(i>='a' && i<='z'){
        //         if(mp.find(i)==mp.end())mp[i]=0;
        //         else continue;
        //     }
        //     else if(i>='A' && i<='Z'){
        //         char ch=i+32;
        //         if(mp.find(ch)!=mp.end())mp[ch]=1;
        //         else continue;
        //     }
        // }
        for(auto i:mp){
            if(i.second.first<i.second.second)ans+=1;
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna