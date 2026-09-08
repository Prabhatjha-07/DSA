class Solution {
public:
    int myAtoi(string s) {
        int ans = 0;
        int i = 0;

        while (i < s.length() && s[i] == ' ') {
            i++;
        }

        int sign = 1;

        if (s[i] == '+') {
            i++;
        } else if (s[i] == '-') {
            sign = -1;
            i++;
        }

        while(i < s.length() && s[i] >= '0' && s[i] <= '9'){
            int digit = s[i] - '0';

            if(ans > INT_MAX / 10 || ans == INT_MAX / 10  && digit > INT_MAX % 10){
                if(sign == 1){
                    return INT_MAX;
                }
                else{
                    return INT_MIN;
                }
            }
            ans = ans * 10 + digit;
            i++;


        }
        return ans * sign;
    }
};