#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    string s;
	    cin>>s;
	    int n;
	    cin>>n;
	    char arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    int flag;

	    for(int i=0;i<s.length();i++)
	    {
	        flag=0;
	        for(int j=0;j<n;j++)
	        {
	            if(arr[j]==s[i])
	            {
	                flag=1;
	                break;
	            }
	        }
	        if(flag==0)
	            break;
	    }
	    cout<<flag<<endl;
	}
	return 0;
}
