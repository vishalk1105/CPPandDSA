#include <iostream>
using namespace std;

/*
 * * * *
 * * *
 * *
 *
 */
int main()
{
    int i = 1;
    int n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << "* ";
            j++;
        }
        cout << endl;
        i++;
    }
}