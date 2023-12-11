#include <iostream>
using namespace std;

/*
A
B C
C D E
D E F G
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
            cout << char('A' + i + j - 2);
            j++;
        }
        cout << endl;
        i++;
    }
}