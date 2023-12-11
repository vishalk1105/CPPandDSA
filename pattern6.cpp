#include <iostream>
using namespace std;

/*
1
22
333
4444
*/

int main()
{
    int i = 1;
    int n;
    cin >> n;
    int count = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}