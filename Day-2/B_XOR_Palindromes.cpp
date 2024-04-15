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
        string s; cin>>s; 

        string ans = "";

        int good_pairs = 0; 
        int buggish = 0; 

        int l =0, r=n-1; 

        while(l < r){
            if(s[l] == s[r]){
                good_pairs +=2;
            }
            else{
                buggish ++;
            }
            l++;
            r--;
        }

        for(int i=0; i<=n; i++){
            int total = i;
            total -=buggish;

            if(total < 0){
                ans.pub('0');
                continue;
            }

            total = max((total%2), total - good_pairs);
            total = max(0, total - (n%2));

            if(total == 0){
                ans.pub('1');
            }
            else{
                ans.pub('0');
            }
        }

        cout<<ans<<endl;
    }
    return 0; 
}