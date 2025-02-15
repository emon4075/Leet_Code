// https://leetcode.com/problems/palindrome-linked-list/
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
    void insert_tail(ListNode *&head, ListNode *&tail, int val)
    {
        ListNode *newNode = new ListNode(val);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = tail->next;
    }
    void Reverse(ListNode *&head, ListNode *current)
    {
        if (current->next == NULL)
        {
            head = current;
            return;
        }
        Reverse(head, current->next);
        current->next->next = current;
        current->next = NULL;
    }
    bool isPalindrome(ListNode *head)
    {
        ListNode *newHead = NULL;
        ListNode *newTail = NULL;
        ListNode *Temp = head;
        while (Temp != NULL)
        {
            insert_tail(newHead, newTail, Temp->val);
            Temp = Temp->next;
        }
        Reverse(newHead, newHead);
        Temp = head;
        ListNode *Temp_2 = newHead;
        while (Temp != NULL)
        {
            if (Temp->val != Temp_2->val)
            {
                return false;
            }
            Temp = Temp->next;
            Temp_2 = Temp_2->next;
        }
        return true;
    }
};