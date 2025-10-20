#include<bits/stdc++.h>
using namespace std;

int main(){
 
    int t;
    cin>>t;
    vector<bool> v(t,false);
    int value; 
    while (cin>>value)
    {
        // cout<<value;
       v[value-1]=true;
    }
    for (int i = 0; i < t; i++)
    {
       if(!v[i]){
        cout<<i+1;
       }
    }
    
    return 0;
}