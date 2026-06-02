/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*cur=head;
        ListNode*p=nullptr;
        while(cur!=nullptr)
        {
            ListNode*x=cur->next;
            cur->next=p;
            p=cur;
            cur=x;
        }
        return p;
    }
};
