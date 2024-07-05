#include<bits/stdc++.h>
using namespace std ;

struct Job { 
    char id ;
    int dead ; 
    int profit ;
};

bool comparator( Job a , Job b ){
    return a.profit > b.profit ;
}


void printJobScheduling( Job arr[] , int n ){
    sort ( arr , arr + n , comparator );

    int result[n];
    bool slots[n];

    for(int i = 0 ; i<n ; i++ ){
        slots[i] = false;
    }


    for ( int i = 0 ; i<n ; i++ ){
        for ( int j = min( n , arr[i].dead ) - 1; j >= 0 ; j-- ){
            if( slots[j] == false ){
                result[j] = i;
                slots[j] = true;
                break;
            }
        }
    }

    for( int i = 0 ; i<n ; i++ ){
        if ( slots[i] == true ){
            cout << arr[result[i]].id << endl ;
        }
    }
}

int main()
{
    Job arr[] = { { 'a', 2, 100 },
                  { 'b', 1, 19 },
                  { 'c', 2, 27 },
                  { 'd', 1, 25 },
                  { 'e', 3, 15 } };
   
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Following is maximum profit sequence of jobs "
            "\n";
 
    // Function call
    printJobScheduling(arr, n);
    return 0;
}