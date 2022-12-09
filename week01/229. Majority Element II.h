//
// Created by FNU Shariful on 12/4/22.
//

class Solution{
public:
    vector<int> majorityElement(vector<int> &nums) {
        vector<int> ans;
        // Boyer Moore voting
        int firstWinner = -1, secondWinner = -1, firstWin_Cnt = 0, secondWin_Cnt = 0;
        for( int num: nums ) {
            if (firstWinner == num) firstWin_Cnt++;
            else if (secondWinner == num) secondWin_Cnt++;
            else if (firstWin_Cnt == 0) {
                firstWinner = num;
                firstWin_Cnt = 1;
            } else if (secondWin_Cnt == 0) {
                secondWinner = num;
                secondWin_Cnt = 1;
            } else {
                firstWin_Cnt--;
                secondWin_Cnt--;
            }
        }
        int limit = (int)nums.size() / 3;
        firstWin_Cnt = 0, secondWin_Cnt = 0;
        for( int num: nums ){
            firstWin_Cnt += firstWinner == num;
            secondWin_Cnt += secondWinner == num;
        }
        if( firstWin_Cnt > limit )  ans.emplace_back(firstWinner);
        if( secondWin_Cnt > limit && firstWinner!= secondWinner ) ans.emplace_back(secondWinner);
        return ans;
    }
};