//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_15_3SUM_H
#define TJIP_LEETCODE_REPO_15_3SUM_H
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& input) {

        sort(input.begin(),input.end());
        vector<vector<int>> output;
        vector<vector<int>> rst;
        for( int i=0; i<input.size(); i++ ) {
            if( i == 0 || (i-1>= 0 && input[i] != input[i-1]) ) {
                rst = twoSum(input, i + 1, 0 - input[i]);
                for (auto x: rst) {
                    output.push_back(x);
                }
            }
        }
        return output;
    }

    vector<vector<int>> twoSum(vector<int> input,int pos,int target)
    {
        int low = pos, hi = input.size()-1,end = input.size()-1;
        vector<vector<int>> rst;
        while( low < hi )
        {
            if( low-1 >= pos && input[low-1] == input[low] ) {
                low++;
                continue;
            }
            if( hi+1 <= end && input[hi] == input[hi+1] ) {
                hi--;
                continue;
            }
            else if( input[low] + input[hi] > target ) hi--;
            else if( input[low] + input[hi] < target ) low++;
            else
            {
                rst.push_back({input[pos-1],input[low], input[hi]});
                low++;
                continue;
            }
        }
        return rst;
    }
};
#endif //TJIP_LEETCODE_REPO_15_3SUM_H
