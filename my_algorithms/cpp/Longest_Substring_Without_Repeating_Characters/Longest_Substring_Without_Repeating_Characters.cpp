// Source : https://oj.leetcode.com/problems/longest-substring-without-repeating-characters/
// Author : Jun Lee
// Date   : 2019-05-07

/********************************************************************************** 
* 
* Given a string, find the length of the longest substring without repeating characters.
* 
* Example 1:
* Input: "abcabcbb"
* Output: 3 
* Explanation: The answer is "abc", with the length of 3. 
* 
* Example 2:
* Input: "bbbbb"
* Output: 1
* Explanation: The answer is "b", with the length of 1.
* 
* Example 3:
* Input: "pwwkew"
* Output: 3
* Explanation: The answer is "wke", with the length of 3. 
*              Note that the answer must be a substring, "pwke" is a subsequence and not a substring.
**********************************************************************************/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> m;  //用来存储字母的位置 
        int ans = 0;
        int lastRepeatPos = -1;  //用来标记子串的起始位置的前驱 
        for(int i=0; i<s.size(); i++){
            if (m.find(s[i])!=m.end() && lastRepeatPos < m[s[i]]) {
                lastRepeatPos = m[s[i]];  //如果重复，则更新子串起始位置的前驱 
            }
            if ( i - lastRepeatPos > ans ){
                ans = i - lastRepeatPos;  //更新最大子串的长度 
            }
            m[s[i]] = i;
        }
        return ans;
    }
};
