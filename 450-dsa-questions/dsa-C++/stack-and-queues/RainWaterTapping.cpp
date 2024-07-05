#include <bits/stdc++.h>
using namespace std;

int calculateRainWater( vector<int> &arr ){
    int n = arr.size();
    int ans = 0 ;
    
    
    int rightMaxArray[n];
    rightMaxArray[n-1] = arr[n-1];
    
    int leftMaxArray[n];
    leftMaxArray[0] = arr[0];
    
    //left max array 
    for ( int i = 1 ; i<n ; i++ ){
        leftMaxArray[i] = max( leftMaxArray[i-1] , arr[i]) ;
    }
    
    //right max array
    for( int i = n-2 ; i>=0 ; i-- ){
        rightMaxArray[i] = max( rightMaxArray[i+1], arr[i]);
    }
    
    for( int i = 0  ; i<n ; i++ ){
        ans = ans + min(leftMaxArray[i] , rightMaxArray[i]) - arr[i];
    }
    return ans;
}

int main(){
    cout << "Hello World " <<endl;
    vector<int> arr = { 3, 0 , 0 , 2, 0, 4 };
    cout << calculateRainWater( arr ) ;
    return 0;
}