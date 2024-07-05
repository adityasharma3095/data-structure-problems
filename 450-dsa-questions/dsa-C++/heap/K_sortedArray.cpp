#include<bits/stdc++.h>
using namespace std ; 

void K_SortedArray( vector<int> &arr  , int k ){

    priority_queue<int> minHeap ;
    vector<int> ans ;
    for( int i = 0 ; i<arr.size() ; i++ ){
        minHeap.push(arr[i]);

        if( minHeap.size() > k ){
            ans.push_back( minHeap.top());
            minHeap.pop();
        }
    }

    while( minHeap.size() > 0 ){
        int temp = minHeap.top();
        ans.push_back(temp);
        minHeap.pop();
    }

    for( auto it : ans ) {
        cout << it << " " ;
    }
}

int main(){
    vector<int> arr = { 6 , 5 , 3 ,2 , 8 , 10 , 9 };
    K_SortedArray( arr , 4 );
    return 0;
}