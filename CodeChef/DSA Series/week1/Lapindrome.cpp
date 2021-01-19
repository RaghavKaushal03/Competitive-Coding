#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		
		int arr[26]={0};
		int cnt=0,i=0;
		int n=s.size();

		if(n%2==0)
		{
			while(i<n/2)
			{
				arr[s[i]-'a']++;
				i++;
			}
			while(i<n)
			{
				arr[s[i]-'a']--;
				i++;
			}

		}
		else
		{
			while(i<n/2)
			{
				arr[s[i]-'a']++;
				i++;
			}
			i++;
			while(i<n)
			{
				arr[s[i]-'a']--;
				i++;
			}

		}
		for(int j=0;j<26;j++)
		{
			if(arr[j]!=0){
				cnt++;
			}
		}
		if(cnt==0)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
		

		
	}
	return 0;
}
