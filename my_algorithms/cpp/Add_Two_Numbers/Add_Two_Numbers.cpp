// Source : https://oj.leetcode.com/problems/add-two-numbers/
// Author : Jun Lee
// Date   : 2019-05-06

/********************************************************************************** 
* 
* You are given two non-empty linked lists representing two non-negative integers. 
* The digits are stored in reverse order and each of their nodes contain a single digit. 
* Add the two numbers and return it as a linked list.
* 
* You may assume the two numbers do not contain any leading zero, except the number 0 itself.
*  
* Example:
*  
* Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
* Output: 7 -> 0 -> 8
* Explanation: 342 + 465 = 807.
*  
**********************************************************************************/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {  
public: 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) { 
        ListNode *ans = NULL, **t = &ans;  //t��������ָ���ָ�� 
        int x = 0, y = 0, carry = 0; 
        while(l1 != NULL || l2 != NULL){ 
            int sum = 0; 
            x = getValueAndMoveNext(l1); 
            y = getValueAndMoveNext(l2); 
            sum = x + y + carry; 
            
            ListNode *node = new ListNode(sum%10);  //����һ���µ�node�ڵ� 
            *t = node;  //��������ӽڵ� 
            t = &(node->next); 
            carry = sum/10; 
        } 
        if (carry > 0){ 
            ListNode *node = new ListNode(carry%10); 
            *t = node; 
        } 
        return ans; 
    } 
private: 
    int getValueAndMoveNext(ListNode* &l){ 
    //�鲢�����ʱ��Ҳ���Խ�������ж��Ƿ�ȡ�����нڵ� 
        int x = 0; 
        if(l != NULL){ 
            x = l->val; 
            l = l->next; 
        } 
    return x; 
    } 
}; 
