struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *findIntersection(ListNode *head1, ListNode *head2)
{

    ListNode *a = head1;
    ListNode *b = head2;

    while (a != b)
    {
        // do the stuff

        if (a == nullptr)
            a = head2;
        else
            a = a->next;

        if (b == nullptr)
            b = head1;
        else
            b = b->next;
    }
    return a;
}