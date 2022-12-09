//
// Created by FNU Shariful on 12/4/22.
//

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> chk;
//    chk.reserve(nums.size());
        for( int i=0; i<nums.size(); i++ ){
            chk.insert({nums[i],i});
        }
        vector<int> output;
        for( int i=0; i<nums.size(); i++ ){
            int key = target-nums[i];
            if( chk.find(key) != chk.end() && chk[key] != i ){
                output.emplace_back(i);
                output.emplace_back(chk[key]);
                break;
            }
        }
        return output;
    }
};