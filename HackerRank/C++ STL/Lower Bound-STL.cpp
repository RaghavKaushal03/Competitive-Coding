#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n,x,t,y;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        v.push_back(x);
    }
    cin>>t;
    while(t--){
       cin>>y;
       vector<int>::iterator it = lower_bound(v.begin(), v.end(), y);
       if (v[it - v.begin()] == y)
           cout << "Yes " << (it - v.begin()+1) << endl;
       else
           cout << "No " << (it - v.begin()+1) << endl;
    }
    return 0;
}
