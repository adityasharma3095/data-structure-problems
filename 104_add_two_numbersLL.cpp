struct ListNode
{
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

ListNode *addTwoNumber(ListNode *first, ListNode *second)
{

    ListNode *res = nullptr;
    ListNode *prev, *temp = nullptr;

    int sum, carry = 0;

    while (first != nullptr or second != nullptr)
    {

        // update the sum
        sum = carry + (first ? first->val : 0) + (second ? second->val : 0);

        // update the carry
        carry = sum >= 10 ? 1 : 0;
        sum = sum % 10;

        temp = new ListNode(sum);
        if (res == nullptr)
            res = temp;

        else
            prev->next = temp;

        prev = temp;

        if (first)
            first = first->next;
        if (second)
            second = second->next;
    }
    if (carry > 0)
        temp->next = new ListNode(carry);
    return res;
}