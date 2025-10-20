#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cin>>n;
 vector<int> arr(n);
 long long count = 0;
for (int i = 0; i < n; i++)
{
        cin >> arr[i];

}
for (int i = 0; i < n-1; i++)
{
// cout<<arr[i]<<arr[i+1]<<arr[i]-arr[i+1]<<endl;

int dif=arr[i]-arr[i+1];

if(dif>0){
    arr[i+1]=arr[i+1]+dif;
    count+=dif;
}

}


cout <<count;

    return 0;
}