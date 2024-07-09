#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data ;
    Node* next ;
};


void detectAndRemoveLoopFromLinkedList( Node* head ){
    Node* slow = head ;
    Node* fast = head ;


    while( slow && fast && fast -> next ){
        slow = slow -> next ;
        fast 
    }
}