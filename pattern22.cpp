#include <iostream>
using namespace std;

/*
 1 1 1 1
 _ 2 2 2
 _ _ 3 3
 _ _ _ 4
 */

int main()
{
    int i = 1;
    int n;
    cin >> n;
    int num = 1;
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
            cout << num;
            j++;
        }
        cout << endl;
        num++;
        i++;
    }
}