#include <iostream>
using namespace std;

/*
A
B C
D E F
G H I J
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    char ch = 'A';
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << char(ch);
            ch++;
            j++;
        }
        cout << endl;
        i++;
    }
}