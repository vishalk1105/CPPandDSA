#include <iostream>
using namespace std;

/*
A B C
B C D
C D E
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    while (i <= n)
    {
        int j = 1;
        char start = char('A' - n + i + j + 1);
        while (j <= n)
        {
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}