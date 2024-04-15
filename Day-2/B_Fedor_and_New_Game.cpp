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
    

    int n, m, k; 
    cin>>n>>m>>k;

    vi v(m+1);

    for(int i=0; i<=m; i++){
        cin>>v[i]; 
    }

    //keeping the pre calculated binary value of the decimal number. 
    vector <vi> mask;

    //first loop to iterate over the the elements of loop v(m+1);
    for(int i=0; i<=m; i++){
        //new vector for keep the each of bits 
        vi p;
        for(int k=0; k<n; k++){
            //checking that bit is set or not? after right shifting the element v[i] for k times. if it is set then push 1 to the p vector, and if it is not set then push 0 to the vector. 
            if((v[i] >> k) & 1) p.pub(1);
            else p.pub(0);
        }
        //pushing the vector 'p' where i put each of bits of each number
        mask.pub(p);
    }

    //ans for the final calculation 
    int ans = 0; 

    //keeping the last value of the mask array which is identified as a fedor's binary value of the given decimal number; 
    vi fedor_mask = mask[m];

    for(int i=0; i<mask.size() - 1; i++){
        //keeping every time the ith index of the mask array to the x. 
        vi x = mask[i];
        int cnt = 0;
        for(int k=0; k<n; k++){
            //checking is it same or not? if not then increase the count 
            if(fedor_mask[k] != x[k]){
                cnt++;
            }
        }

        //at last checking the value of cnt is less than equal to k or not, if yes then ++ the answer otherwise do nothing. 
        if(cnt <= k){
            ans++;
        }
    }

    cout<<ans<<endl;

    return 0; 
}