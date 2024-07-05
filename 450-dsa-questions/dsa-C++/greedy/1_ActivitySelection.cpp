#include<bits/stdc++.h>
using namespace std ;

struct Activity {
    int begin , end ; 
};

bool comprator( Activity a1 , Activity a2 ){
    return a1.end < a2.end;
}

void SelectActivities( vector<int> start , vector<int> finish){
    int n = start.size();
    Activity act[n];
    for( int i = 0 ; i<n ; i++ ){
        act[i].begin = start[i];
        act[i].end = finish[i];
    }

    sort ( act , act + n , comprator);

    int i = 0, count = 0 ; 
    //first activity is always selected 
    count = count + 1 ;
    for ( int j = 1 ; j<n ; j++ ){
        if ( act[j].begin >= act[i].end ){
            cout << ", (" << act[j].begin << ", "
                 << act[j].end << ")"; 
            count++;
            i = j ;
        }
    }
    cout << count << endl ; 
}
int main() 
{ 
    vector<int> start = { 1, 3, 0, 5, 8, 5 }; 
    vector<int> finish = { 2, 4, 6, 7, 9, 9 }; 
  
    // Function call 
    SelectActivities(start, finish); 
  
    return 0; 
}