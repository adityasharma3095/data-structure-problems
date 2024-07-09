#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    Node* next ;
};

Node* reverse(Node* head, int k ){

    if ( head != NULL ) return NULL;

    Node* curr = head;
    Node * prev , *next = NULL;

    int counter = 0 ; 
    while( curr != NULL && counter < k  ){
        next = curr -> next ;
        curr -> next = prev ;
        prev = curr ;
        curr = next ;
        counter++;
    }

    if ( next != NULL ){
        head -> next = reverse( next , k );
    }
}