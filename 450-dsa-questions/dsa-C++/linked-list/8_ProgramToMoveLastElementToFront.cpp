Node* MoveLastElement(Node* head ){

    Node* secLast = NULL ; 
    Node* last = head ;

    while( last -> next != NULL ){
        secLast = last ;
        last = last -> next ;
    }

    secLast -> next = NULL ; 
    last -> next = head ;
    head = last ;
}