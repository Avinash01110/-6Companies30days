class Solution {
public:
    string getHint(string secret, string guess) {
        int n = secret.length();

        unordered_map<int, int> mp;
        int bulls = 0;
        int cows = 0;

        string temp1 = "";
        
        for(int i = 0 ; i < n ; i++){
            if(secret[i] == guess[i]){
                bulls++;
            }else{
                temp1 += secret[i];
                mp[guess[i] - '0']++;
            }
        }

        for(int i = 0 ; i < temp1.length() ; i++){
            int num = temp1[i] - '0';
            if(mp[num] > 0){
                cows++;
                mp[num]--;
            }
        }

        string ans = "";
        ans += bulls + '0';
        ans += 'A';
        ans += cows + '0';
        ans += 'B';

        return ans;

    }
};