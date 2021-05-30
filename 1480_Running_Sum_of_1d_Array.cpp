/*
1480. Running Sum of 1d Array
Link - https://leetcode.com/problems/running-sum-of-1d-array/
*/

class Solution
{
    public:

    // my solution
    // vector<int> runningSum(vector<int> &nums)
    // {
    //     vector<int> running ;
    //     int sum = 0;
    //     for(auto x: nums)
    //     {
    //         sum+=x ;
    //         running.push_back(sum);
    //     }
    //     return running ;
    // }

    // optimized
    vector<int> runningSum(vector<int> &nums)
    {
        for(int i=1; i<nums.size(); i++)
        {
            nums[i] += nums[i-1] ;
        }
        return nums ;
    }
};
