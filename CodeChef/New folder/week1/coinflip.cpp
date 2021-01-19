#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
	cin>>t;
	while(t--)
	{
		ll g;
		cin>>g;
		while(g--){
		ll i,n,q,ans;
		cin>>i>>n>>q;
		if(n%2!=0){
			if(i==q)
			{
				ans=n/2;
			}
			else
			{
				ans=n/2+1;
			}
		}
		else
			ans=n/2;
		
		cout<<ans<<"\n";
	    }
	}
    return 0;
}