class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        // can be used when all are lower case 
        
        // int freq[26] = {0};
        // for(int i = 0  ; i < s.length() ; i++){
        //     freq [s[i] - 'a']++;
        // }

        // for(int j = 0 ; j < t.length() ; j++){
        //     freq[t[j] - 'a']--;
        // }

        // for(int k = 0 ; k < 26 ; k++){
        //     if(freq[k] != 0 ){
        //         return false;
        //     }
        // }
        // return true;


        unordered_map <char , int> temp;
        for(int i = 0 ; i < s.length() ; i++){
            temp[s[i]]++;
        }
        for(int j = 0 ; j < t.length() ; j++){
            temp[t[j]]--;
        }

        for(int k = 0 ; k < temp.size() ; k++){
            if(temp[k] != 0 ){
                return false;
            }
        }
        return true;
    }
};