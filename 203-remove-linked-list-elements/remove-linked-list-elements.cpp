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
    ListNode* removeElements(ListNode* head, int val) {
        while (head != NULL && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        
        if (head == NULL) return head;
        
        ListNode* current = head;
        while (current != NULL && current->next != NULL) {
            if (current->next->val == val) {
                ListNode* nodeToDelete = current->next;
                current->next = current->next->next;
                delete nodeToDelete;
            } else {
                current = current->next;
            }
        }
        
        return head;
    }
};