#include <bits/stdc++.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    map<string,int>m;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string x;
       cin>>x;
       if(n==1)
       {
           int y;
           cin>>y;
           m[x] += y;
       } 
       else if(n==2)
       { 
           m.erase(x);
       }
       else if (n==3)
       {
           cout<<m[x]<<endl;
       }
    }  
    return 0;
}
