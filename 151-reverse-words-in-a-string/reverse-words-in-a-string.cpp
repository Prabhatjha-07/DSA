class Solution {
public:
    string reverseWords(string s) {
        int right = s.length() - 1;
        string ans = "";
        while(right >= 0 ){
            if(right >= 0 && s[right] == ' '){
                right--;
                continue;
            }
            if(right < 0){
                break;
            }
            int left = right;
            while(left >= 0 && s[left] != ' '){
                left--;
            }

            if(!ans.empty()){
                ans += ' ';
            }

            for(int j = left+1 ; j <= right ; j++){
                ans += s[j];
            }

            right = left-1;
        }
        return ans;

        
    }
};