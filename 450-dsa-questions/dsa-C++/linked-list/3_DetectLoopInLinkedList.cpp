#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    Node* next ;
};

bool detectLoopInLinkedList(Node* head, int k ){

    Node * slow = head ;
    Node * fast = head ;

    while ( fast -> next && fast && slow ){
        slow = slow -> next ;
        fast = fast -> next -> next ;

        if ( slow -> data == fast -> data ) return true;

    }
    return false;
}