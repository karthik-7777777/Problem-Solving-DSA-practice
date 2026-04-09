class Solution {
public:
    bool winnerOfGame(string colors) {
        if(colors.size()<3)return false;
        int flag=0;
        for(int i=1;i<colors.size()-1;i++){
            if(colors[i]=='A' && colors[i+1]=='A' && colors[i-1]=='A'){
                flag++;
            }
            if(colors[i]=='B' && colors[i+1]=='B' && colors[i-1]=='B'){
                flag--;
            }
        }
        return flag>0;
    }
};