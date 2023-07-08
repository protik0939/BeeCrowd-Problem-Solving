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
    string s;
    while (cin >> s)
    {
        int arr[10] = {0};
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                arr[0]++;
            }
            else if (s[i] == '1')
            {
                arr[1]++;
            }
            else if (s[i] == '2')
            {
                arr[2]++;
            }
            else if (s[i] == '3')
            {
                arr[3]++;
            }
            else if (s[i] == '4')
            {
                arr[4]++;
            }
            else if (s[i] == '5')
            {
                arr[5]++;
            }
            else if (s[i] == '6')
            {
                arr[6]++;
            }
            else if (s[i] == '7')
            {
                arr[7]++;
            }
            else if (s[i] == '8')
            {
                arr[8]++;
            }
            else if (s[i] == '9')
            {
                arr[9]++;
            }
        }
        int maxx = arr[0], idx = 0;
        for (int i = 1; i < 10; i++)
        {
            if (arr[i] >= maxx)
            {
                maxx = arr[i];
                idx = i;
            }
        }
        cout << idx << endl;
    }
}