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
    string s;
    cin>>s;
    // cout<<s.length()<<endl;
    // cout<<s.size()<<endl;

    string ans ="NO";
    int a=0,b=0,c=0,d=0,e=0;
    if(s.length() >= 10) e=1;
    
        forf(ll,i,s.length())
        {
            if(s[i] >= 'a' && s[i] <= 'z') a=1;
            if(i!=0 && i!= s.length()-1)
            {
                if( s[i] >= 'A' && s[i] <= 'Z') b=1;
                if( s[i] >= 0 && s[i] <= 9) c=1;
                if( s[i] == '@' || s[i]=='#' || s[i]== '%' || s[i]== '&' || s[i]=='?')
                d=1;
            }
        }
        
    
    if( a && b && c && d && e)
        ans="YES";
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