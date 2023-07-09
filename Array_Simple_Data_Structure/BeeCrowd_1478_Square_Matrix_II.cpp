#include <bits/stdc++.h>
#define somoy                         \
    ios_base::sync_with_stdio(false); \
    cin.tie(0);                       \
    cout.tie(0);
typedef long long int ll;
using namespace std;
int main()
{
    somoy;
    int N;
    while (cin >> N && N != 0)
    {
        int ara[N][N];
        for (int a = 0; a < N; a++)
        {
            for (int b = 0; b < N; b++)
            {
                ara[a][b] = 1;
            }
        }

        int I = N - 1;
        int f = 1, g = 2;
        for (int e = 0; e < I; e++)
        {
            for (int c = 0, d = f; d < N; c++, d++)
            {
                ara[c][d] = g;
            }
            f++;
            g++;
        }
        f = 1, g = 2;
        for (int e = 0; e < I; e++)
        {
            for (int c = f, d = 0; c < N; c++, d++)
            {
                ara[c][d] = g;
            }
            f++;
            g++;
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < N; j++)
            {
                cout << setw(3) << ara[i][j];
                if (j < N - 1)
                {
                    cout << " ";
                }
            }
            cout << endl;
        }
        cout << endl;
    }
}