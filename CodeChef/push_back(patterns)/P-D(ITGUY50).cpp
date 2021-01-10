#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
		int n,k=1;
		cin>>n;
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				cout<<2*k;
				k++;
			}
			cout<<endl;
		}
		
	}
	return 0;
}
