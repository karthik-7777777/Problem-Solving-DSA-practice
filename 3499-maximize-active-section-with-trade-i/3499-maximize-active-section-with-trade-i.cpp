class Solution {
public:
    int maxActiveSectionsAfterTrade(string &s) {
        vector<int>temp;
        char flag=s[0];
        int cnt=0,x=0;
        for(auto &c:s){
            if(c=='1')x++;
            if(flag==c){
                cnt++;
            }
            else{
                if(flag=='0')temp.push_back(cnt);
                else temp.push_back(cnt*-1);
                flag=c;
                cnt=1;
            }
        }
        if(flag=='0')temp.push_back(cnt);
        else temp.push_back(cnt*-1);
        if(temp.size()==2){
            return abs(min(temp[0],temp[1]));
        }
        else if(temp.size()==3){
            if(temp[0]>0){
                return temp[0]-temp[1]+temp[2];
            }
            return abs(temp[0]+temp[2]);
        }
        else if(temp.size()>3){
            int l=0,ones=0,zeros=0,ans=INT_MIN;
            int i=0;
            while(i<temp.size()){
                if(i<4){
                    if(temp[i]<0)ones+=abs(temp[i]);
                    else zeros+=temp[i];
                }
                if(i>=4){
                    if(temp[i]<0)ones+=abs(temp[i]);
                    else zeros+=temp[i];
                    if(temp[l]<0)ones-=abs(temp[l]);
                    else zeros-=temp[l];
                    l++;
                }
                if((x-ones)+(ones+zeros)>=ans){
                    ans=(x-ones)+(ones+zeros);
                }
                i++;
            }
            return ans;
        }
        if(temp[0]>0)return 0;
        return abs(temp[0]);
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna