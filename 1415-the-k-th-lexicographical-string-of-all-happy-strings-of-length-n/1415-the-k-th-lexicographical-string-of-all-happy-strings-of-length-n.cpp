class Solution {
public:
    void happystring(string str,int n,vector<string>& result)
    {
        if(str.size()==n)
        {
            result.push_back(str);
            return ;
        }
        for(auto ch:{'a','b','c'})
        {
            if(str.empty() || str.back()!=ch)
            {
                happystring(str+ch,n,result);
            }
        }
    }
    string getHappyString(int n, int k) {
        vector<string>result;
        happystring("",n,result);
        if(k > result.size())
        {
            return "";
        }
        return result[k-1];
    }
};