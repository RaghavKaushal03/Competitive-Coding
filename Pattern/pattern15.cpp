#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	cout<<"Enter a number"<<endl;
	cin>>n;
	int k;
	cout<<"You entered "<<n<<endl;
	int p=n;
	for(int i=1;i<=(2*n-1);i++)
	{
		k=1;
		for(int j=1;j<=n;j++){
			if(j>=p){
				cout<<k;
				if(j<n){
					k++;
				}
				else{
					k--;
				}

			}
			else{
				cout<<" ";
				
			}
		}
		if(i<n)
			p--;
		else
			p++;\


		cout<<endl;
	}
	return 0;
}