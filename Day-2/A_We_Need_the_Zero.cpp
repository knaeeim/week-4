#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool odd(int x){
    return x%2==1;
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 

    int t; cin>>t; 

    while(t--){
        int n; 
        cin>>n; 

        vector <int> v(n);

        for(int i=0; i<n; i++){
            cin>>v[i];
        } 

        int xor_sum = accumulate(v.begin(), v.end(), 0, std::bit_xor<int>()); 

        if(odd(n)){
            cout<<xor_sum<<endl;
        }
        else{
            if(xor_sum == 0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }

    }
    return 0; 
}