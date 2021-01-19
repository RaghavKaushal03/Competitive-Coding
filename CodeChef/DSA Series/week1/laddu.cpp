#include<bits/stdc++.h>
using namespace std;
void solve();
int main()
{ 
  ios::sync_with_stdio(0);
  cin.tie(0);
  int tcases;
  cin>>tcases;
  while(tcases)
  {
      solve();
      --tcases;
  }
   return 0;
}
void solve()
{
    long long int times,score=0, num;
    bool indian;
    string temp;
    cin>>times>>temp;
    if(temp=="INDIAN")
        indian=true;
    else
        indian=false;
    for(int i=0;i<times;i++)
    {
        cin>>temp;
        if(temp=="CONTEST_WON")
        {
            score+=300;
            cin>>num;
            if(num<20)
                score+=(20-num);
        }
        else if(temp=="TOP_CONTRIBUTOR")
        {
            score+=300;
        }
        else if(temp=="BUG_FOUND")
        {
            cin>>num;
            score+=num;
        }
        else
        {
         score+=50;   
        }
    }
    if(indian)
        cout<<score/200<<"\n";
    else
        cout<<score/400<<"\n";
}