#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,p,k=1;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		p=k;
		for(int j=1;j<=i;j++){
			cout<<p<<" ";
			p=p-(n-i+j);
			}
		cout<<endl;
		k=k+1+n-i;
	}
	return 0;
}
