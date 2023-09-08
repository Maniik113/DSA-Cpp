#include <bits/stdc++.h>
using namespace std;
int main()
{
    int i, j, n = 9;
    // right arrow
    for (i = 1; i <= 2 * n; i++)
    {
        if (i >= (n / 2) + 1 && i <= n)
        {
            for (j = 1; j <= 2 * n; j++)
            {
                if (i == (2 * n) / 2 || j == ((2 * n) - i) + 1 || j == i)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
            cout << endl;
        }
    }
    for (i = 1; i <= 2 * n; i++)
    {

        if (i > n && i <= ((2 * n) - (n / 2)) - 1)
        {

            for (j = 1; j <= 2 * n; j++)
            {
                if (j == (2 * n) - i || j == i + 1)
                {
                    cout << "*"
                         << " ";
                }
                else
                {
                    cout << " "
                         << " ";
                }
            }
            cout << endl;
        }

        //         if (j == (((2 * n - 1) - i)) + n || j == (((2 * n - 1) - n) + i) || i == (((2 * n - 1) / 2) + 1))
        //         {
        //             cout << "*"
        //                  << " ";
        //         }
        //         else
        //         {
        //             cout << " "
        //                  << " ";
        //         }
        //     }
        //     cout << endl;
        // }

        // space between two arrows
        // for (i = 1; i <= 2 * n - 1; i++)
        // {
        //     for (int space = 1; space <= 2 * n - 1; space++)
        //     {
        //         cout << " ";
        //     }
        // }
        // left arrow
        // for (i = 1; i <= 2 * n - 1; i++)
        // {
        //     for (j = 1; j <= 2 * n - 1; j++)
        //     {
        //         if (j == (n - ((2 * n - 1) - i)) || j == (n - i) + 1 || i == (((2 * n - 1) / 2)) + 1)
        //         {
        //             cout << "*"
        //                  << " ";
        //         }
        //         else
        //         {
        //             cout << " "
        //                  << " ";
        //         }
        //     }
    }
    return 0;
}
