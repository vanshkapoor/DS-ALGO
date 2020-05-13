#include <iostream>

using namespace std;

int main()
{
    /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
    int Solution::fibonaccai(ListNode * A)
    {
        struct ListNode *p = A;

        int a1 = p->val;
        int a2 = p->next->val;

        if (a2 < a1)
        {
            return 0;
        }

        if (p->next->next == NULL)
        {
            return 1;
        }
        else
        {
            p = p->next->next;
        }

        while (p->next != NULL)
        {

            if (a1 + a2 != p->val)
            {
                return 0;
            }
            a1 = a2;
            a2 = p->val;
            p = p->next;
        }

        return 1;
    }
    return 0;
}