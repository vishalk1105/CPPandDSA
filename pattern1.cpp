#include <iostream>
using namespace std;

int main()
{
    int i = 1;
    int n;
    cout << "Enter value of n:" << endl;
    cin >> n;

    /*   while (i <= n)
       {
           int j = 1;
           while (j <= n)
           {
               cout << "*";
               j++;
           }
           cout << endl;
           i++;
       }*/

    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
}