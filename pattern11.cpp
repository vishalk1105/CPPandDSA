#include <iostream>
using namespace std;

/*
A B C
A B C
A B C
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;
            j++;
        }
        cout << endl;
        i++;
    }
}