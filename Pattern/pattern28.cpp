#include<iostream>
using namespace std;
int main(int argc, char const *argv[])
{
	int n,k=0,p,flag;
	cout<<"Enter a number"<<endl;
	cin>>n;
	cout<<"You entered "<<n<<endl;
	for(int i=1;i<=n;i++)
	{
		if(i%2==1)
			k=k+1;
		else
		{
			k--;
			k=k+i;
		}
		flag=1;
		p=k;
		for(int j=1;j<=2*n-1;j++){
			if(j<=2*i-1)
			{	
				if(flag==1)
				{
					cout<<p;
				
					if(i%2)
					{
						p++;
						k++;

					}
					else
					{
						p--;
					}
				}
			
				else
				{
					cout<<" *";
				}
				flag=1-flag;
			}
			else{
				cout<<" ";
			}
		}
		cout<<endl;
		
	}
	return 0;
}
