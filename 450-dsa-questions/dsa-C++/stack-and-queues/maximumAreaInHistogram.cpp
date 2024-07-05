#include<bits/stdc++.h>
using namespace std;

vector<int> leftNSEFunc( vector<int>& arr ) {
    
    stack<pair<int,int>> s ; 
    vector<int> left ; 
    
    
    for ( int i = 0 ; i< arr.size() ; i++ ){
        
        if(s.empty() == true ) left.push_back(-1);
        else if( s.empty() == false and s.top().first < arr[i] ) left.push_back(s.top().second);
        else if( s.empty() == false and s.top().first >= arr[i] ) {
            while( s.empty() == false and s.top().first >= arr[i] ){
                s.pop();
            }
            
            if( s.empty() == true) left.push_back(-1);
            else if( s.top().first < arr[i] ) left.push_back(s.top().second);
        }
        
        s.push({ arr[i] , i });
    }
    return left ; 
}

vector<int> rightNSEFunc( vector<int>& arr ){
    stack<pair<int,int>> s ; 
    vector<int> right ; 
    
    int greaterIndex = arr.size();
    for ( int i = arr.size() - 1 ; i >= 0; i-- ){
        
        if(s.empty() == true ) right.push_back(greaterIndex);
        else if( s.empty() == false and s.top().first < arr[i] ) right.push_back(s.top().second);
        else if( s.empty() == false and s.top().first >= arr[i] ) {
            while( s.empty() == false and s.top().first >= arr[i] ){
                s.pop();
            }
            
            if( s.empty() == true) right.push_back(greaterIndex);
            else if( s.top().first < arr[i] ) right.push_back(s.top().second);
        }
        
        s.push({ arr[i] , i });
    }
    
    reverse( right.begin() , right.end() );
    return right ; 
}





int main()
{
    vector<int> arr = {6, 2, 5, 4, 5, 1, 6};
    
    vector<int> leftNSE = leftNSEFunc( arr );
    vector<int> rightNSE = rightNSEFunc( arr );
    
    int maxi = 0 ; 
    for( int i = 0 ; i<leftNSE.size() ; i++ ){
        maxi = max( maxi , (rightNSE[i] - leftNSE[i] - 1)* arr[i]); 
        cout << rightNSE[i] << " -  " << leftNSE[i] << " " << maxi << endl ; 
    }
    
    cout << maxi << endl ; 
    return 0;
}