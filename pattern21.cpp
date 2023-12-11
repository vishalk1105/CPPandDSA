#include <iostream>
using namespace std;

/*
 * * * *
 _ * * *
 _ _ * *
 _ _ _ *
 */

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int space = i - 1;
        while (space)
        {
            cout << '_';
            space--;
        }
        int j = 1;
        while (j <= n - i + 1)
        {
            cout << '*';
            j++;
        }
        cout << endl;
        i++;
    }
}