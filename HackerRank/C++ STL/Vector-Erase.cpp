#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    vector<int>v;
    int n,t,x,a,b;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>t;
        v.push_back(t); 
    }
    cin>>x;
    cin>>a>>b;
    v.erase(v.begin()+x-1);
    v.erase(v.begin()+a-1,v.begin()+b-1); 
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
    
    return 0;
}
