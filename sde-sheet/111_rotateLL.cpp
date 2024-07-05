struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

void rotate(ListNode *head, int k)
{

    // make the linked list circular
    ListNode *curr = head;
    while (curr)
    {
        curr = curr->next;
    }

    curr->next = head;

    // k-1 steps  make k as head and k-1 to null

    for (int i = 0; i < k - 1; i++)
    {
        curr = curr->next;
    }

    head = curr->next;
    curr->next = nullptr;
}