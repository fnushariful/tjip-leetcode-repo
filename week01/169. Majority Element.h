//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_MAJORITY_ELEMENT_H
#define TJIP_LEETCODE_REPO_MAJORITY_ELEMENT_H

#include "iostream"
#include "stack"
#include "utility"
#include "vector"

using namespace std;

class Solution{
public:
    int majorityElement(vector<int>& nums) {
        int vote = 0, majorElement = -1;
        for( int num : nums ) {
            if( vote == 0 ) {
                majorElement = num;
                vote = 1;
            }
            else if(majorElement == num ) vote++;
            else vote--;
        }
        return majorElement;
    }
};
#endif //TJIP_LEETCODE_REPO_MAJORITY_ELEMENT_H
