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


int check_kth_bit_set_or_not(int x, int k){
    return (x>>k) & 1;
}

void print_on_and_off_bits(int x){
    for(int k=0; k<=31; k++){
        if(check_kth_bit_set_or_not(x, k)){
            cout<< 1 <<" ";
        }
        else cout<< 0 <<" ";
    }
}

int turn_on_kth_bit(int x, int k){
    return (x | (1 << k));
}

int turn_off_kth_bit(int x, int k){
    return x & (~ (1 << k)); 
}

int toggle_kth_bit(int x, int k){
    return x ^ (1 << k);
}

int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(NULL); 
    
    // cout<<check_kth_bit_set_or_not(44, 3)<<endl;

    // print_on_and_off_bits(44);

    // cout<<turn_on_kth_bit(44, 4)<<endl; 

    cout<<turn_off_kth_bit(44, 3)<<endl; 
    
    return 0; 
}