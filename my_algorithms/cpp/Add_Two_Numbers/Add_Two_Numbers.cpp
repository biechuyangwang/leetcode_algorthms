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
