#include <iostream>
using namespace std;

/*
A B C
D E F
G H I
*/
int main()
{
    int i = 1;
    int n;
    cin >> n;
    int acsiiValue = 65;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << char(acsiiValue);
            acsiiValue++;
            j++;
        }
        cout << endl;
        i++;
    }
}