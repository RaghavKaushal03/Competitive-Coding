#include <iostream>
using namespace std;

void decToBin(int n) 
{ 
    int Num[32]; 
    int i = 0; 
    while (n > 0) { 
        Num[i] = n % 2; 
        n = n / 2; 
        i++; 
    } 
    for (int j = i - 1; j >= 0; j--) 
        cout << Num[j]; 
} 

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
				decToBin(k);
				cout<<" ";
				k++;
			}
			cout<<endl;
		}
		
	}
	return 0;
}
