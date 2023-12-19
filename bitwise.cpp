#include <iostream>
using namespace std;
int main()
{
    /*   int i = 7;

       cout << i++ << endl;
       // 7 i=8
       cout << ++i << endl;
       // 9 i=9
       cout << i-- << endl;
       // 9 i=8
       cout << --i << endl;
       // 7 i=7
       */

    /*  int a, b = 1;
       a = 10;
       if (++a)
       {
           cout << b;
       }
       else
       {
           cout << ++b;
       }
       */

    /*   int a = 1;
        int b = 2;
        if (a-- > 0 || ++b > 2)
        {
            cout << "Stage 1- Inside If";
        }
        else
        {
            cout << "Stage 2- Inside else";
        }
        */
    /* int num = 3;
      cout << (25 * (++num));*/
    int a = 1;
    int b = a++;
    // 1 a=2
    int c = ++a;
    // 3  a=3
    cout << b << " " << c;
}