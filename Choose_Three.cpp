#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;

    while (n--)
    {
        int size, sum;
        cin >> size >> sum;
        int flag = 0;
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = i + 1; j < size; j++)
            {
                for (int k = j + 1; k < size; k++)
                {
                    if (arr[i] + arr[j] + arr[k] == sum)
                    {
                        flag = 1;

                        break;
                    }
                }
            }
        }
        if (flag)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}