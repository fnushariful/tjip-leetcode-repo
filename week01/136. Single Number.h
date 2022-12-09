//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_SINGLE_NUMBER_H
#define TJIP_LEETCODE_REPO_SINGLE_NUMBER_H

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int val = 0;
        for( auto num : nums )
        {
            val = val ^ num;
        }
        return val;
    }
};

#endif //TJIP_LEETCODE_REPO_SINGLE_NUMBER_H
