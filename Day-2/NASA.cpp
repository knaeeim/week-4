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

const int maxN = (1 << 15);
vi all_pallindrom;

void mark_pallindrom(){
    for(int i = 0; i < maxN; i++){
        string s = to_string(i); 
        int len = s.length();
        bool flag = true; 

        for(int j = 0; j < (len/2); j++){
            if(s[j] != s[len - j - 1]){
                flag = false;
                break;
            }
        }

        if(flag) all_pallindrom.pub(i);
    }
}


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    mark_pallindrom(); 

    int t; cin>>t; 

    while(t--){
        int n; cin>>n; 
        vi cnt(maxN), a; 
        for(int i=0; i<n; i++){
            int x; cin>>x; 
            cnt[x]++;
            a.pub(x);
        }

        ll ans = n; 

        for(int i=0; i<n; i++){
            for(int j=0; j<all_pallindrom.size(); j++){
                int num = (a[i] ^ all_pallindrom[j]);
                ans += cnt[num];
            }
        }

        cout<<(ans/2)<<endl;
    }
    
    return 0; 
}