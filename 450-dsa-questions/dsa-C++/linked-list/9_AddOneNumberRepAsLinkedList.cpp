using namespace std;
 
/* Linked list node */
class Node 
{ 
    public:
    int data; 
    Node* next; 
}; 

void addOneUtil( Node* head ){


    Node* temp;
    Node* prev;
    int carry = 1, sum = 0;
    while( head -> next != null ){
        sum = carry + head -> data;
        carry = sum > 10 ? 1 : 0;
        sum = sum%10;

        head -> data = sum ;
        prev = head;
        head = head -> next;

    }
    if ( carry > 0 ){
        temp -> next = new Node(carry);
        return head;
    }
}
 


 Node* addOne( Node* head ){

    head = reverse(head);
    addOneUtil(head);
    head = reverse(head);
    return head;
 }