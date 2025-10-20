#include<bits/stdc++.h>
using namespace std;
int maxCoins(int A, int B) {
    
    int coins_A = 2 * A - 1;
    
    int coins_B = 2 * B - 1;
    
  
    int coins_both = A + B;
    // cout<<"a"<<coins_A<<"b"<<coins_B<<"c"<<coins_both;

    return max({coins_A, coins_B, coins_both});
}
int main(){
   int A, B;
     cin >> A>>B;
    //  cout<<A<<B;
     cout<<maxCoins(A,B);
    return 0;
}