class Solution { 
public: 
    vector<string> maxNumOfSubstrings(string s) { 
        int n = s.length(); 
        vector<pair<int, int>> range(26, {-1, -1}); 
        vector<bool> isValid(26, true); 
        vector<string> result; 
 
        for (int i = 0; i < n; i++) { 
            int idx = s[i] - 'a'; 
 
            if (range[idx].first == -1) { 
                range[idx].first = i; 
            } 
            range[idx].second = i; 
        } 
         
        for(int c = 0; c < 26; c++){ 
            if(range[c].first == -1) continue; 
 
            for(int i = range[c].first; i <= range[c].second; i++){ 
                if(range[s[i] - 'a'].first < range[c].first){ 
                    isValid[c] = false; 
                    break; 
                } 
                range[c].second = max(range[c].second, range[s[i] - 'a'].second); 
            } 
        } 

        int lastsubstr = INT_MAX; 
 
        for(int i = n-1; i >= 0; i--){ 
            int c = s[i] - 'a'; 
 
            if(!isValid[c]) continue; 
 
            if(i == range[c].first && range[c].second < lastsubstr){ 
                result.push_back(s.substr(i, range[c].second - i + 1)); 
                lastsubstr = i; 
            } 
        } 
 
        return result; 
    } 
};