#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n,i;
	cin>>n;
	ll m =n;
	ll arr[n];
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(i=0;i<n;i++)
	{
		arr[i]=arr[i]*m;
		// cout<<arr[i]<<" "<<n<<endl;
		m--;
	}
	cout<<*max_element(arr, arr + n)<<endl;

	return 0;
}