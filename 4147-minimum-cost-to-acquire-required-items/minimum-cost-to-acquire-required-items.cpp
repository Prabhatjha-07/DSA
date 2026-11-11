class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        if(need1 == 0 && need2 == 0)return 0;
        
        // if(cost1 == need1 || cost2 == need2){
        //     return cost1;
        // }

        long long bag = (long long)cost1 *need1 + (long long)cost2 * need2;
       
       int both = min(need1 , need2);

        long long total = (long long)costBoth * both  + (long long)cost1 * (need1 - both) + (long long)cost2 * (need2 - both);

       long long extra = (long long)costBoth * max(need1, need2);
        return min( {bag , total , extra});
    }
};