#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++){
			if(j<=i)
				cout<<j*i;
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}