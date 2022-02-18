struct ListNode
{
    int val;
    ListNode *next;
    ListNode *bottom;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *mergesimple(ListNode *a, ListNode *b)
{
    if (a == nullptr)
        return b;
    if (b == nullptr)
        return a;

    ListNode *ans;
    if (a->val < b->val)
    {
        ans = a;
        ans->next = merge(ans->next, b);
    }

    else
    {
        ans = b;
        ans->next = merge(ans->next, a);
    }

    ans->next = nullptr;
    return ans;
}

ListNode *merge(ListNode *head1, ListNode *head2)
{

    if (head1 == nullptr)
        return head2;
    if (head2 == nullptr)
        return head1;

    ListNode *ans;
    if (head1->val < head2->val)
    {
        ans = head1;
        ans->bottom = merge(ans->bottom, head2);
    }

    else
    {
        ans = head2;
        ans->bottom = merge(ans->bottom, head1);
    }

    ans->next = nullptr;
    return ans;
}
ListNode *flattern(ListNode *root)
{
    if (root->next == nullptr)
        return root;

    return merge(root, flattern(root->next));
}