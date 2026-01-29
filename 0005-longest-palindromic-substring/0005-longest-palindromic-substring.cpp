class Solution {
int palindromechk(string s,int st,int en){
    cout << en << "------" << st <<endl;
    while(st>=0 && en<s.size()){
        if(s[st]==s[en]){
            st--;
            en++;
        }
        else break;
    }
    cout << en << " " << st <<endl;
    int l=en-st;
    return l-1;
}
public:
    string longestPalindrome(string s) {
        int start=0,end=0;
        int n=s.size()-1;
        for(int i=0;i<s.size();i++){
            int odd=palindromechk(s,i,i);
            int even=palindromechk(s,i,i+1);
            int len=max(odd,even);
            if(len > end-start){
                start=i-(len-1)/2;
                end=i+(len/2);
            }
        }
        return s.substr(start,end-start+1);
    }
};