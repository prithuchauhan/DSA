// question LINK : https://leetcode.com/problems/merge-two-sorted-lists/

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

// IN PLACE

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {



        if (list1 == NULL) {
            return list2;
        }
        if (list2 == NULL) {
            return list1;
        }

        ListNode dummy;
        ListNode* newNode = &dummy;          // new node is the address of dummy

        while (list1 != NULL && list2 != NULL) {
            if (list1->val <= list2->val) {
                newNode->next = list1;
                list1 = list1->next;
            } else {
                newNode->next = list2;
                list2 = list2->next;
            }

            newNode = newNode->next;
        }

        if (list1 == NULL) {
            newNode->next = list2;
        }
        if (list2 == NULL) {
            newNode->next = list1;
        }

        return dummy.next;
    }
};
