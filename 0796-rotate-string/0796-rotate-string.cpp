class Solution {
public:
    bool rotateString(string s, string goal) {
        int n=s.size();
        if(s.size()!=goal.size())return false;
        while(n--){
            if(s==goal)return true;
            char ch=goal[0];
            goal.erase(0,1);
            goal+=ch;
        }
        return false;
    }
};