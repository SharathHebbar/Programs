/*

234. Palindrome Linked List
Easy

Given the head of a singly linked list, return true if it is a palindrome.

 

Example 1:

Input: head = [1,2,2,1]
Output: true

Example 2:

Input: head = [1,2]
Output: false

 

Constraints:

    The number of nodes in the list is in the range [1, 105].
    0 <= Node.val <= 9

 

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
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        vector<int> v;
        if(head == NULL) return false;
        if(head->next == NULL) return true;
        while(head){
            v.push_back(head->val);
            head = head->next;
        }
        
       int l = 0,r = v.size()-1;
        bool res = false;
        while(l < r){
            if(v[l] == v[r]) res = true;
            else return res= false;
            l++;
            r--;
        }
        return res;
    }
};