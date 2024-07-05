#include<bits/stdc++.h>
using namespace std ;


void kthLargestEle( int arr[] , int n ) {
    
    int k = 3 ;
    priority_queue<int> maxHeap ;
    for ( int i = 0 ; i<n ; i++ ){
        
        maxHeap.push( arr[i] );
        
        cout << i << " --> " << maxHeap.top() << endl;
        
        if( maxHeap.size() > k ){
            maxHeap.pop();
        }
        
        
    }
    
    cout << maxHeap.top() << endl;
}
int main(){

    int arr [] = { 12, 3, 5, 7, 4, 19, 26 };
    int n = 7 ; 
    kthLargestEle( arr , n );
    return 0 ; 
}