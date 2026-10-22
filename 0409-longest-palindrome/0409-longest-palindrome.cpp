
class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> f;
        for(int i=0;i<s.size();i++){
            f[s[i]]++;
        }

        bool odd=false;
        int res=0;

        for(auto i:f){
            int val=i.second;
            if(val%2==0){
                res+=val;
            }
            else{
                odd=true;
            }
        }

        for(auto i:f){
            int val=i.second;
            if(val%2==1){
                res+=val-1;
            }
        }

        if(odd) return res+1;
        return res;
    }
};


// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna