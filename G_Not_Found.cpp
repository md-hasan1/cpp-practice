#include<bits/stdc++.h>
using namespace std;

int main(){
string s;
cin>>s;
vector<int> freq(26, 0);
for (char c : s) {
    freq[c - 'a']++; 
}

int flag=0;
for (int i = 0; i < freq.size(); i++)
{
    if(freq[i]<=0){
       cout<<  char('a' + i);
       flag=1;
       break;
    }

}
if(!flag){
  cout<<"None"  ;
}

    return 0;
}