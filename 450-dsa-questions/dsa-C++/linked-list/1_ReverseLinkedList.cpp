void reverseLinkedList(Node* head){
    Node* curr = head;
    Node* prev = null;
    Node* next = null;

    while( curr->next != null ){
        next = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = next;



    }

}