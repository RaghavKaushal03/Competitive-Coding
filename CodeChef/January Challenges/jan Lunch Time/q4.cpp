/* @author -> Raghav */
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <algorithm>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <random>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
#include <iostream>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<long> vl;
typedef vector<ll> vll;
ll MOD = 998244353;

#define pb push_back
#define endl "\n"
#define eb emplace_back
#define x first
#define y second
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define forf(t,i,n) for(t i=0;i<n;i++)
#define forr(t,i,n) for(t i=n-1;i>=0;i--)

void solve(){
    ll n;
    cin>>n;
    ll arr[n];
    ll sum=0;
    forf(ll,i,n){
    cin>>arr[i];
    sum += arr[i];
    }
    
    //cout<<"sum"<<sum<<endl;
    if(sum%2==0)
    cout<<"1"<<endl;
    else
    cout<<"2"<<endl;
    



}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t; cin >> t;
    while(t--){
        solve();
    }
    
    return 0;
}