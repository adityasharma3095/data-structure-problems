#include<bits/stdc++.h>
using namespace std;

int denomination[]
    = { 1, 2, 5, 10, 20, 50, 100, 500, 1000 };

void findMin( int Amount ){

    int n = 9 ;
    vector<int> ans;
    sort ( denomination , denomination+ 9 );

    for ( int i = n-1; i>=0 ; i-- ){
        while( Amount >= denomination[i]){
            Amount -= denomination[i];
            ans.push_back(denomination[i]);
        }
    }

    for( auto it : ans ){
        cout << it << " " ;
    }

}

int main()
{
    int n = 93;
    cout << "Following is minimal"
         << " number of change for " << n << ": ";
 
    // Function Call
    findMin(n);
    return 0;
}