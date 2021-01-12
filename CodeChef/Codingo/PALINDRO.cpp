#include<bits/stdc++.h>
using namespace std;
#define ll          long long int
#define F           first
#define S           second

int main(int argc, char const *argv[])
{
	ll t;
	cin>>t;
	while(t--)
	{
		string s;
    	int n, cnt = 0, i, mx = -1;
    	cin >> n >> s;
    	map<char,int> m;

    	for(i=0;i<n;i++) 
			m[s[i]]++;

    	for(auto i : m)
    	{
    		if(i.S & 1)
    		 cnt++;
    	}
    	cout << max(0, cnt - 1) << endl;
	}
	return 0;
}