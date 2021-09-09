/*
Given the head of a singly linked list, reverse the list, and return the reversed list.

 

Example 1:

Input: head = [1,2,3,4,5]
Output: [5,4,3,2,1]

Example 2:

Input: head = [1,2]
Output: [2,1]

Example 3:

Input: head = []
Output: []

 

Constraints:

    The number of nodes in the list is the range [0, 5000].
    -5000 <= Node.val <= 5000

 

*/

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

//Iterative
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *temp, *temp1, *temp2, *temp3;
        if (head->next->next == NULL)
        {
            temp = head;
            temp1 = temp->next;
            temp->next = NULL;
            temp1->next = temp;
            temp = temp1;
            return temp;
        }

        temp = head;
        temp1 = temp->next;
        temp2 = temp1->next;

        temp->next = NULL;

        while (temp1)
        {
            temp1->next = temp;
            temp = temp1;
            temp1 = temp2;
            if (temp2 != NULL)
                temp2 = temp2->next;
        }
        head = temp;
        return head;
    }
};

//recursive

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
class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        if (head == NULL || head->next == NULL)
            return head;
        ListNode *res;
        res = reverseList(head->next);

        head->next->next = head;
        head->next = NULL;
        return res;
    }
};