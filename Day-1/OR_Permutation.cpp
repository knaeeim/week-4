#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        for(int i=n; i>0; i--){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    return 0; 
}