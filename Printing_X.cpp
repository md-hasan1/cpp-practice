#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n ;
    cin >> n;
    int mid = n / 2;


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
                if (i == mid)
                {
                    cout << "X";
                }
                else
                {
                    cout << "\\";
                }

            else if (j == n - i - 1)
                cout << "/";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}