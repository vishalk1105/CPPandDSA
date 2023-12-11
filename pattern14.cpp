#include <iostream>
using namespace std;

/*
A
B B
C C C

*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            char ch = 'A';
            cout << char(ch + i - 1);
            j++;
        }
        cout << endl;
        i++;
    }
}