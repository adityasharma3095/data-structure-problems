/*
    iterate through first linked list store value in num1 
    iterate thourgh second linked list store value in num2

    add num1 and num2 
    iterate through sum and make it in linked list

*/

Node* addTwoList( Node* first, Node* second ){
    Node* res = NULL;
    Node* temp , *prev = NULL;
    int carry = 0 , sum ;

    while( first != NULL and second != NULL ){

        sum = carry + ( first ? first -> data : 0 ) + ( second ? second -> data : 0 );
        carry = sum > 10 ? 1 : 0 ;
        sum = sum > 10 ? sum%10 : sum ;

        temp = new Node(sum);
        //if first node then set its head to resultant 
        if( res = NULL ){
            res = temp ;
        }
        else {
            prev -> next = temp;
        }
        prev = temp;

        if(first ) first = first -> next ;
        if( second ) second = second -> next;
    }

    if ( carry > 0 ) temp -> next = new Node(Carry );
    return res;
}