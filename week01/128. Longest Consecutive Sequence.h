//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_128_LONGEST_CONSECUTIVE_SEQUENCE_H
#define TJIP_LEETCODE_REPO_128_LONGEST_CONSECUTIVE_SEQUENCE_H

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> S;
        for( const long x: nums ) S.insert(x);

        int longestStreak = 0, value , mx = 0;
        for( auto num: nums ){
            if(S.find(num-1) == S.end()){
                value = num;
                longestStreak = 1;
                while( S.find(value+1) != S.end() ){
                    value +=1;
                    longestStreak++;
                }
                mx = max(mx, longestStreak);
            }
        }
        return mx;
    }
};

#endif //TJIP_LEETCODE_REPO_128_LONGEST_CONSECUTIVE_SEQUENCE_H
