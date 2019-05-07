// Source : https://oj.leetcode.com/problems/two-sum/
// Author : Jun Lee
// Date   : 2019-05-06

/********************************************************************************** 
* 
* Given an array of integers, return indices of the two numbers such that they add up to a specific target.
* 
* You may assume that each input would have exactly one solution, and you may not use the same element twice.
*  
* Example:
* 
* Given nums = [2, 7, 11, 15], target = 9,
*  
* Because nums[0] + nums[1] = 2 + 7 = 9,
* return [0, 1].
* 
**********************************************************************************/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;  //�洢��� 
        unordered_map<int, int> m;  //�����洢ӳ���<num[i],target-num[i]> 
        for(int i=0; i<nums.size(); i++){
            if(m.find(nums[i]) == m.end())  //����map�в����ڵ�i��Ԫ�أ���target-num[i]�洢 
                m[target-nums[i]] = i; //m[5]=2 m[4]=3
            else{
                ans.push_back(m[nums[i]]);  //��������˳��������Ĵ洢˳���й� 
                ans.push_back(i);
                break;
            }
        }
        return ans;
    }
};
