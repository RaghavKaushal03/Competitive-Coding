#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++){
			if(i==j || i+j==n+1)
				cout<<"*";
			else
				cout<<" ";
		}
		cout<<endl;
	}
	return 0;
}