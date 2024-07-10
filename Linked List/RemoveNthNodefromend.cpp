// QUESTION LINK : https://leetcode.com/problems/remove-nth-node-from-end-of-list/


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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        int cnt = 0;
        ListNode *original = head;

        while(head!=NULL){
            head = head->next;
            cnt++;
        }

        if (cnt == n){
            return original->next;
        }
        
        ListNode *prev = original;
        ListNode *second = prev->next;

        cout<<cnt-n<<endl;

        for(int i=0;i<cnt-n-1;i++){
            prev = prev->next;
            
            second = second->next;

            if (second->next == NULL){
                prev->next = NULL;
                second->next = NULL;
                return original;
            }

        }

        

        prev->next = second->next;
        second->next = NULL;

        return original;

    }
};
