#include <bits/stdc++.h>
using namespace std;
int main()
{
    float n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    float avg = (n1 * 2 + n2 * 3 + n3 * 4 + n4 * 1) / 10;
    cout << "Media: " << fixed << setprecision(1) << avg << endl;

    if (avg >= 7.0)
    {
        cout << "Aluno aprovado." << endl;
    }
    else if (avg < 5.0)
    {
        cout << "Aluno reprovado." << endl;
    }
    else if (avg >= 5.0 && avg <= 6.9)
    {
        cout << "Aluno em exame." << endl;

        float res;
        cin >> res;
        cout << "Nota do exame: " << fixed << setprecision(1) << res << endl;

        float avg2 = (avg + res) / 2;

        if (avg2 < 5.0)
        {
            cout << "Aluno reprovado." << endl;
        }
        else
        {
            cout << "Aluno aprovado." << endl;
        }
        
        cout << "Media final: " << fixed << setprecision(1) << avg2 << endl;
    }

    return 0;
}
