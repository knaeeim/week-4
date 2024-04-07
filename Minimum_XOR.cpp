#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        int a[n]; 
        int sum = 0; 
        for(int i=0; i<n; i++){
            cin>>a[i]; 
            sum ^= (a[i]);
        }
        
        int ans = sum; 

        for(int i=0; i<n; i++){
            ans = min(ans, sum^a[i]);
        }

        cout<<ans<<endl; 
    }
    return 0; 
}