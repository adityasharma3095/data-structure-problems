#include<bits/stdc++.h>
using namespace std;


struct Item {
    int profit;
    int weight;

    Item( int profit ,int weight ){
        this->profit = profit ;
        this->weight = weight ;
    }
};

bool comparator( Item a , Item b){
    double r1 = (double)a.profit/(double)a.weight; 
    double r2 = (double)b.profit/(double)b.weight;
    return r1 > r2 ;
}

int fractionalKnapsack( int W, struct Item arr[] , int n ){

    sort( arr , arr + n , comparator);

    double finalAns = 0.0;
    for( int i = 0 ; i<n ; i++ ){

        if ( W >= arr[i].weight){
            W -= arr[i].weight;
            finalAns += arr[i].profit;
        }

        else{
            finalAns = finalAns + arr[i].profit* ((double)W/(double) arr[i].weight);
            break;
        }
    }
    return finalAns;

}
int main()
{
    int W = 50;
    Item arr[] = { { 60, 10 }, { 100, 20 }, { 120, 30 } };
    int n = sizeof(arr) / sizeof(arr[0]);
 
    // Function call
    cout << fractionalKnapsack(W, arr, n);
    return 0;
}