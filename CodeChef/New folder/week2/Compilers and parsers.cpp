#include<bits/stdc++.h>
using namespace std;
#define endl "\n"
#define ll long long int

int main() {
    ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	ll t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    ll i, j = 0, x = -1;
        for (i = 0; i < s.size(); i++)
        {

            if (s[i] == '<')
                j++;
            else
            {
                j--;
            }
            if (j < 0)
            {
                //cout << i << endl;
                break;
            }
            if (j == 0)
            {
                x = i;
            }
        }
        cout << x + 1 << endl;
	    
	}
	return 0;
}
