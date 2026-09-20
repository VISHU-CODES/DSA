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
    ListNode* oddEvenList(ListNode* head) {
        if(head == NULL || head->next == NULL)
            return head;

        ListNode* oddHead = NULL;
        ListNode* oddTail = NULL;

        ListNode* evenHead = NULL;
        ListNode* evenTail = NULL;

        ListNode* temp = head;
        int pos = 1;

        while(temp) {

            if(pos % 2 == 1) {
                ListNode* newnode = new ListNode(temp->val);

                if(oddHead == NULL) {
                    oddHead = newnode;
                    oddTail = newnode;
                }
                else {
                    oddTail->next = newnode;
                    oddTail = oddTail->next;
                }
            }
            else {
                ListNode* newnode = new ListNode(temp->val);

                if(evenHead == NULL) {
                    evenHead = newnode;
                    evenTail = newnode;
                }
                else {
                    evenTail->next = newnode;
                    evenTail = evenTail->next;
                }
            }

            temp = temp->next;
            pos++;
        }

        oddTail->next = evenHead;

        return oddHead;
    }
};