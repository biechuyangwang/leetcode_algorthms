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
        ListNode *ans = NULL, **t = &ans;  //t用来控制指针的指向。 
        int x = 0, y = 0, carry = 0; 
        while(l1 != NULL || l2 != NULL){ 
            int sum = 0; 
            x = getValueAndMoveNext(l1); 
            y = getValueAndMoveNext(l2); 
            sum = x + y + carry; 
            
            ListNode *node = new ListNode(sum%10);  //生成一个新的node节点 
            *t = node;  //完成向后添加节点 
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
    //归并排序的时候也可以借鉴来来判断是否取完所有节点 
        int x = 0; 
        if(l != NULL){ 
            x = l->val; 
            l = l->next; 
        } 
    return x; 
    } 
}; 
