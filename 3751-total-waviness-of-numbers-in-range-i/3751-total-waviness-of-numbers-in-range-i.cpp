class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            vector<int>temp;
            int num=i;
            cout << num << endl;
            while(num){
                temp.push_back(num%10);
                num/=10;
            }
            for(int j=1;j<temp.size()-1;j++){
                if((temp[j]>temp[j-1] && temp[j]>temp[j+1]) || (temp[j]<temp[j-1] && temp[j]<temp[j+1]))ans++;
            }
        }
        return ans;
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/leethub-v4/bcilpkkbokcopmabingnndookdogmbna