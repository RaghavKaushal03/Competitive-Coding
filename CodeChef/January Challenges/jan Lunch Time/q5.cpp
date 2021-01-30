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
    string s;
    cin>>s;
    ll ans=0;
    vector<char> v(s.begin(), s.end());
    //for (const char &c: v)
    //    cout << c;
    //cout<<endl;

    forr(ll,i,n){
        if(v[i] == '0'){
            v.erase(v.begin()+i);
            ans++;
        }
        if(v[i]=='1')
        break;
    }
    for(ll i=1;i<n;i++)
    {
        if(v[i]=='0' && v[i-1]=='1' && v[i+1]=='1'){
        v.erase(v.begin()+i);
        ans++;
        }
    }
    for(ll i=0;i<n;i++)
    {
        if(v[i]=='1' && v[i+1]=='0' && v[i+2]=='0' )
        {
            v.erase(v.begin()+i);
            ans++;
        }
    }
    
    cout<<ans<<endl;

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