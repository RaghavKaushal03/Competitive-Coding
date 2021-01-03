#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k;
	char p;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k=1;
		p='A';
		for(int j=1;j<=(2*n-1);j++){
			if(j>=n-i+1 && j<=n+i-1){
				if(j<=n){
					cout<<k;
					k++;
				}
				else{
					cout<<p;
					p++;
				}

			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
