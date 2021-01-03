#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	char k=64;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k=k+2*(i-1)+1;
		for(int j=1;j<=n;j++){
			if(j>=n-i+1)
				cout<<k--;
			else
			{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
