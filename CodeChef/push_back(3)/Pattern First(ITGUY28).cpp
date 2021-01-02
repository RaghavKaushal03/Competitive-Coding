#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int cnt=n;
	    for(int i=0;i<=n;i++)
	    {
	        for(int j=i;j<n;j++)
	        {
	            cout<<" ";
	        }
	        for(int k=n;k>=cnt;k--)
	        {
	            cout<<k;
	        }
	        cnt--;
	        cout<<"\n";
	    }
	    for(int i=0;i<n;i++)
	    {
	        int cnt=n-i;
	        for(int j=0;j<=i;j++)
	        {
	            cout<<" ";
	        }
	        for(int k=n;cnt>0;k--)
	        {
	            cout<<k;
	            cnt--;
	        }
	        cout<<"\n";
	    }
	}
	return 0;
}


