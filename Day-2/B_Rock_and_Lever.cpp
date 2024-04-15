#include<bits/stdc++.h>
using namespace std;
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define endl "\n"
#define ll long long int
#define pub push_back
#define pob pop_back
#define puf push_front
#define pof pop_front
#define vi vector<int>
#define vll vector<ll>
#define vp vector<pair<ll,ll>>
#define sorta(arr) sort(arr.begin(), arr.end());
#define sortd(arr) sort(arr.begin(), arr.end(), greater<int>());
#define All(X) (X).begin(),(X).end()
#define Unique(X) (X).erase(unique((X).begin(),(X).end()),(X).end())
#define range(arr) for(auto el: arr) cout<<el<<" ";


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 

        vi v(n); 

        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vll store(33, 0); 

        for(int i=0; i<n; i++){
            int curr_num = v[i]; 
            int left_most_indx = 0;

            while(curr_num > 0){
                curr_num /=2; 
                left_most_indx++;
            }
            store[left_most_indx]++; 
        }

        ll s = 0;

        for(int i=0; i<33; i++){
            if(store[i] >= 2) s+=((store[i] * (store[i] - 1))/2);
        }

        cout<<s<<endl;
    }
    return 0; 
}