#include <bits/stdc++.h>
using namespace std;

void nextGreaterEleOnLeft( vector<int> &arr ){
    
    stack<int> s; 
    vector<int> ans ; 
    for(int i = 0 ; i<arr.size() ; i++ ){;
        cout << arr[i] << endl ;
        if( s.empty() == true ){
            cout << "First" << endl ;
            ans.push_back(-1);
        }
        else if ( s.empty() == false and s.top() > arr[i] ){
            cout << "Second" << endl ;
            ans.push_back(s.top());
        }
        else if (s.empty() == false and s.top() <= arr[i]){
            cout <<"Third" << endl ;
            while( s.empty() == false and s.top() <= arr[i] ){
                s.pop();
            }
            
            if ( s.empty() == true ) ans.push_back(-1);
            else if( s.top() > arr[i] ) ans.push_back(s.top());
        }
        
        s.push(arr[i]);
    }
    
    for( auto it : ans ) {
        cout << it << " "<< endl;
    }
}



int main()
{
    vector<int> arr =  {1,3, 2, 4};
    nextGreaterEleOnLeft( arr );
    return 0;
}