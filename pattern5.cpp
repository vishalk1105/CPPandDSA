#include <iostream>
using namespace std;

/*

*
**
****
*/
int main()
{
    int n;
    int i = 1;
    cin >> n;
    while (i <= n)
    {
        int j = n - i + 1;
        while (j <= n)
        /*
        int j = 1;
        while (j <= i)  bcz we have to print * i times in row
        1st col 1 *, 2nd col 2 *
        */
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
}