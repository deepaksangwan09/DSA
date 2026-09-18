class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = INT_MIN;

        for(auto customer : accounts){
            int wealth = 0;

            for(auto banks : customer){
                wealth += banks;
            }

            maxWealth = max(maxWealth, wealth);
        }
        return maxWealth;
    }
};