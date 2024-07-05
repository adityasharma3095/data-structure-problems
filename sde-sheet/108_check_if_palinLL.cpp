#include <bits/stdc++.h>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

bool palin(ListNode *head)
{
    ListNode *curr = head;

    stack<int> s;
    while (curr != nullptr)
    {
        s.push(curr->val);
        curr = curr->next;
    }

    curr = head;
    while (curr != nullptr)
    {
        int i = s.top();
        s.pop();
        if (i != curr->val)
            return false;

        curr = curr->next;
    }

    return true;
}