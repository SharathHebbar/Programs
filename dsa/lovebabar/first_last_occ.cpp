
/*
34. Find First and Last Position of Element in Sorted Array
Medium

Given an array of integers nums sorted in ascending order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]

Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]

Example 3:

Input: nums = [], target = 0
Output: [-1,-1]

 

Constraints:

    0 <= nums.length <= 105
    -109 <= nums[i] <= 109
    nums is a non-decreasing array.
    -109 <= target <= 109





*/

class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int x)
    {
        vector<int> res;
        if (nums.size() == 0)
        {
            res.push_back(-1);
            res.push_back(-1);
            return res;
        }
        if (nums.size() == 1)
        {
            if (nums[0] == x)
            {
                res.push_back(0);
                res.push_back(0);
                return res;
            }
            else
            {
                res.push_back(-1);
                res.push_back(-1);
                return res;
            }
        }
        int first = -1, last = -1, first_val = -1, last_val = -1;
        for (int i = 0; i < nums.size(); i++)
        {
            if ((first_val == x) && (nums[i] == x))
            {
                last = i;
                last_val = nums[i];
            }
            else if (nums[i] == x)
            {
                first = i;
                last = i;
                first_val = nums[i];
                last_val = nums[i];
            }
        }
        res.push_back(first);
        res.push_back(last);
        return res;
    }
};