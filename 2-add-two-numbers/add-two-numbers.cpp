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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry=0;
        ListNode* temp=new ListNode(0);
        ListNode* curr= temp;

        while(l1 != nullptr || l2 != nullptr || carry){
            int x=0;
            int y=0;
            if(l1 != nullptr) {
                x=l1->val;
            }
            if(l2 != nullptr){
                y= l2->val;
            }
            int sum = x + y + carry;
            carry = sum /10;
            curr -> next = new ListNode(sum%10);
            curr = curr->next;
            if(l1 != nullptr) {
                l1=l1->next;
            }
            if (l2 != nullptr){
                l2=l2->next;
            }
        }
        return temp -> next;
    }
};