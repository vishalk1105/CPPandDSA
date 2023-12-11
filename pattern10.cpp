#include <iostream>
using namespace std;

/*
A A A
B B B
C C C
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    int asciiValue = 65;
    while (i <= n)
    {

        int j = 1;
        while (j <= n)
        {
            cout << char(asciiValue);
            j++;
        }
        cout << endl;
        asciiValue++;
        i++;
    }
}