class Solution {
public:
    bool doesAliceWin(string s) {
        int vol=0;
        string vowel="aeiou";
        for(char ch:s){
            if(vowel.find(ch)!=string::npos)vol++;
        }
        if(vol==0)return false;
        return true;
    }
};