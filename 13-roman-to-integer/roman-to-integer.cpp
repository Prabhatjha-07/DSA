class Solution {
public:
    int romanToInt(string s) {
        vector<int> ans;
        for(int i = 0 ; i < s.length() ; i++){
            if( s[i] == 'I'){
                ans.push_back(1);

            }
            else if(s[i] == 'V'){
                ans.push_back(5);
            }
            else if(s[i] == 'X'){
                ans.push_back(10);
            }
            else if(s[i] == 'L'){
                ans.push_back(50);
            }
            else if(s[i] == 'C'){
                ans.push_back(100);
            }
            else if(s[i] == 'D'){
                ans.push_back(500);
            }
            else if(s[i] == 'M'){
                ans.push_back(1000);
            }
            
        }
        int sum = 0 ;
        for(int j = 0 ; j < ans.size()-1 ; j++){
            int current = ans[j];
            int next = ans[j+1];
            if(current < next ){
                sum -= current;
                
            }
            else{
                sum += current;
            }
            

        }
        sum += ans[ans.size()-1];
        return sum;
        
    }
};