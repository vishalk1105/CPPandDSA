#include <iostream>
using namespace std;

/*
D
C D
B C D
A B C D
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        char start = char('A' + n - i);
        while (j <= i)
        {
            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
}
