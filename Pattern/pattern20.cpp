#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,p;
	char k;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		k='A';
		p=1;
		for(int j=1;j<=2*n;j++){
			if(j>=n-i+1  && j<=n+i){
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
