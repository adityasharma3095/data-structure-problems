// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {

        stack<int> s;
        vector<int> finalans;
        map<int, int> ans;

        for (int i = nums2.size(); i >= 0; i--) {

            if (s.empty() == true) {
                // ans.push_back( -1 );
                ans.insert({nums2[i], -1});
            }

            else if (s.empty() == false && s.top() > nums2[i]) {
                // ans.push_back( s.top() );
                ans.insert({nums2[i], s.top()});
            }

            else if (s.empty() == false && s.top() <= nums2[i]) {
                while (s.empty() == false && s.top() <= nums2[i]) {
                    s.pop();
                }

                if (s.top() > nums2[i]) {
                    // ans.push_back( s.top() );
                    ans.insert({nums2[i], s.top()});
                }

                else if (s.empty() == false) {
                    // ans.push_back( -1 );
                    ans.insert({nums2[i], -1});
                }
            }
            s.push(nums2[i]);
        }
        return finalans;
    }

int main() {
    
    vector<int> nums1 = { 4,1,2 };
    vector<int> nums2 = { 1,3,4,2 };
    
    vector<int> please = nextGreaterElement( nums1 , nums2 );
    for ( auto it : please ){
        cout << it << " " ;
    }
    stact<int> s ; 
    vector<int> ans ;
    map<int,int> mp ; 
    
    for( int i = nums2.size() ; i>= 0 ; i-- ){
        
        if( s.empty() == true ){
            ans.push_back(-1);
        }
        
        if( s.empty() == false && s.top() > nums2[i]){
            ans.push_back(s.top());
        }
        
        if( s.empty() == false && s.top() <= nums2[i] ){
            while( s.empty() == true && s.top() > nums2[i]){
                s.pop();
            }
            
            if( s.empty() == true ){
                ans.push_back(-1);
            }
            
            else if( s.top() > nums2[i] ){
                ans.push_back(s.top());
            }
        }
        
        
    }
    for ( auto it : ans ) { 
        cout << it << endl ; 
    }
    return 0;
}