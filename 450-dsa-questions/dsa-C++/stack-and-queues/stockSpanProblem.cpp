#include<bits/stdc++.h>
using namespace std;



void stockSpanProblem( vector<int> &arr ){
    
    stack<pair<int,int>> s ;
    vector<int> vec ;
    vector<int> ans ; 
    
    for( int i = 0 ; i<arr.size() ; i++ ){
        
        if(s.empty() == true ) vec.push_back(-1);
        else if( s.empty() == false and s.top().first > arr[i] ) vec.push_back( s.top().second );
        else if ( s.empty() == false and s.top().first <= arr[i] ) {
            while( s.empty() == false and s.top().first <= arr[i] ){
                s.pop();
            }
            
            if ( s.empty() == true ) vec.push_back(-1);
            else if ( s.top().first > arr[i] ) vec.push_back(s.top().second );
        }
        
        s.push({ arr[i] , i });
    }
    
    
    for ( int i = 0 ; i<vec.size() ; i++ ){
        vec[i] = i - vec[i];
        cout << vec[i] << endl ; 
    }
    
    
}


int main()
{
    vector<int> arr = {100,80,60,70,60,75,85};
    stockSpanProblem(arr);

    return 0;
}