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
        unordered_map<char, int> m;  //�����洢��ĸ��λ�� 
        int ans = 0;
        int lastRepeatPos = -1;  //��������Ӵ�����ʼλ�õ�ǰ�� 
        for(int i=0; i<s.size(); i++){
            if (m.find(s[i])!=m.end() && lastRepeatPos < m[s[i]]) {
                lastRepeatPos = m[s[i]];  //����ظ���������Ӵ���ʼλ�õ�ǰ�� 
            }
            if ( i - lastRepeatPos > ans ){
                ans = i - lastRepeatPos;  //��������Ӵ��ĳ��� 
            }
            m[s[i]] = i;
        }
        return ans;
    }
};
