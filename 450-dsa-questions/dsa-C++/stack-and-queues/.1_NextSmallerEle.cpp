#include <bits/stdc++.h>
using namespace std;

void nextGreaterEleOnLeft( vector<int> &arr ){
    
    stack<int> s; 
    vector<int> ans ; 
    for(int i = arr.size() -1 ; i>=0 ; i-- ){
    
        if( s.empty() == true ) ans.push_back(-1);
        else if ( s.empty() == false and s.top() < arr[i] ) ans.push_back(s.top());
        else if( s.empty() == false and s.top() >= arr[i] ){
            while( s.empty() == false and s.top() >= arr[i] ){
                s.pop();
            }
            
            if ( s.empty() == true ) ans.push_back(-1);
            else if ( s.top() < arr[i] ) ans.push_back(s.top() );
        }
        
        s.push( arr[i] );
    }
    
    for( auto it : ans ) {
        cout << it << " "<< endl;
    }
}



int main()
{
    vector<int> arr =  {4,5,2,10,8};
    nextGreaterEleOnLeft( arr );
    return 0;
}