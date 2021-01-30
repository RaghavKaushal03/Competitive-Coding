#include<iostream>
using namespace std;
#define ll long long int
int main()
{
     #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    ll t;
    cin>>t;
    while(t--)
    {
    ll n; cin>>n;
    ll odd=0, even=0;
    for(ll i=0; i<n; i++){
        ll p; cin>>p;
        if(p%2==0){
            even++;
        }
        else{
            odd++;
        }
    }
    cout<<min(even, odd)<<endl;

    }
}