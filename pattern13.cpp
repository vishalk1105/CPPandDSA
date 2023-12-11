#include <iostream>
using namespace std;

/*
A B C
B C D
E F G

i+j-1=1
i+j-1+A-1=A-1+1
i+j-2=A
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
            char ch = 'A';
            cout << char(ch + i + j - 2);
            j++;
        }
        cout << endl;
        i++;
    }
}