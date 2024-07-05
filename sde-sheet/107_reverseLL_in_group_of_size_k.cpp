struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

// 1 -> 2 -> 2 -> 4 -> 5 -> 6 -> 7 -> 8

ListNode *reverseLL(ListNode *head, int k)
{
    ListNode *nex;
    ListNode *prev = nullptr;
    ListNode *curr = head;
    int c = 0;

    while (c < k)
    {

        nex = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nex;
        c++;
    }

    if (nex != nullptr)
        head->next = reverseLL(nex, k);
    return prev;
}