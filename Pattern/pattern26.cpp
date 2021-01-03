#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	char k;
	for(int i=1;i<=n;i++)
	{
		k=64+i;
		for(int j=1;j<=n;j++){
			if(j<=i)
			{
				cout<<k;
				k--;
			}
			else
			{
				cout<<" ";
			}
		}
		
		cout<<endl;
	}
	return 0;
}
