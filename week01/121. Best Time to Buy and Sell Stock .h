//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
#define TJIP_LEETCODE_REPO_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mx = -1, mi = INT_MAX, dif;
        for( int i=0; i<prices.size(); i++ )
        {
            if( mi > prices.at(i) )
            {
                mi = prices.at(i);
            }
            dif = prices.at(i) - mi;
            if( mx < dif )
            {
                mx = dif;
            }
        }
        return mx;
    }
};

#endif //TJIP_LEETCODE_REPO_121_BEST_TIME_TO_BUY_AND_SELL_STOCK_H
