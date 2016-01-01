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
        return addNodes(l1, l2, 0);
    }
    
    ListNode* addNodes(ListNode* l1, ListNode* l2, int c)
    {
        if (!l1 && !l2 && c==0) return NULL;
        int a = 0, b = 0;
        if(l1){a=l1->val;}
        if(l2){b=l2->val;}
        int value = a+b+c; 
        ListNode *head=new ListNode(value % 10);
        head->next = addNodes(l1? l1->next: NULL , l2?l2->next:NULL, value/10);
        return head;
    }
};