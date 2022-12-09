//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_283_MOVE_ZEROES_H
#define TJIP_LEETCODE_REPO_283_MOVE_ZEROES_H
class Solution {
public:
    int nextNZero(int nZPtr, vector<int> &nums, int zPtr){
        while( nZPtr < (int) nums.size() ){
            if( nums[nZPtr] != 0 && zPtr < nZPtr) return nZPtr;
            nZPtr++;
        }
        return nZPtr;
    }
    int nextZero(int zPtr, vector<int> &nums){
        while( zPtr <(int) nums.size() ){
            if(nums[zPtr] == 0 ) return zPtr;
            zPtr++;
        }
        return zPtr;
    }

    void moveZeroes(vector<int>& nums) {
        int zPtr = -1, nZPtr = -1;
        while( zPtr < (int)nums.size() && nZPtr < (int)nums.size() ){
            zPtr = nextZero(zPtr+1, nums);
            nZPtr = nextNZero(nZPtr+1, nums, zPtr);
            if(zPtr < nums.size() && nZPtr < nums.size() && zPtr < nZPtr && nums[zPtr] == 0 && nums[nZPtr] != 0 ){
                swap(nums[zPtr], nums[nZPtr]);
            }
        }
    }
};
#endif //TJIP_LEETCODE_REPO_283_MOVE_ZEROES_H
