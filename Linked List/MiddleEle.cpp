// QUESTION LINK : https://leetcode.com/problems/middle-of-the-linked-list/


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
    ListNode* middleNode(ListNode* head) {
        
        int cnt = 0;
        ListNode *original = head;
        while(head!=NULL){
            head = head->next;
            cnt++;
        }

        int middle = cnt/2;    // 0 based indexing in LL

        cnt = 0;
        for(int i=0;i<middle;i++){
            original = original->next;
        }

        return original;


    }
};
