//
// Created by FNU Shariful on 12/9/22.
//

#ifndef TJIP_LEETCODE_REPO_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
#define TJIP_LEETCODE_REPO_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums){
        int rightProduct[nums.size()],leftProduct[nums.size()],output[nums.size()];
        rightProduct[0] = nums[0];
        leftProduct[nums.size()-1] = nums[nums.size()-1];

        for( int i=1, j = nums.size()-2; i<nums.size(); i++,j-- )
        {
            rightProduct[i] = rightProduct[i-1] * nums[i];
            leftProduct[j] = leftProduct[j+1] * nums[j];
        }

        for( int i=0; i<nums.size(); i++ )
        {
            if( i == 0 ) output[i] =  leftProduct[i+1];
            else if( i == nums.size()-1 ) output[i] = rightProduct[i-1];
            else output[i] = rightProduct[i-1] * leftProduct[i+1];
        }
        for( auto x: output ) cout<<x<<" ";
        cout<<endl;
        vector<int> finalOutput(output,output+nums.size());
        return finalOutput;
    }
};

#endif //TJIP_LEETCODE_REPO_238_PRODUCT_OF_ARRAY_EXCEPT_SELF_H
