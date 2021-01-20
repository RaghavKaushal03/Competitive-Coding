#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(int argc, char const *argv[])
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		ll arr[n];
		ll min = INT_MAX;
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>arr[i];
			if(arr[i] < min)
				min = arr[i];
			sum += min;
		}
		cout<<sum<<endl;
		
	}
	return 0;
}