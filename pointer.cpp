#include <iostream>
using namespace std;
/*int *fun()
{
    int x = 10;
    return &x;
}
*/
int main()
{
    /*  int num = 5;
       int *ptr = &num;

       cout << ptr << endl;
       cout << &num << endl;
       cout << *ptr << endl;
       cout << &ptr << endl;
       */

    /*  int a = 10;
      int *p = &a;
      int **q = &p;

      cout << &a << endl;
      cout << p << endl;
      cout << *q << endl;

      cout << a << endl;
      cout << *p << endl;
      cout << **q << endl;

      cout << q << endl;
      cout << &p << endl;
  */

    /*    void *ptr;
        int i = 10;
        // assign int address to void
        ptr = &i;
        cout << "Address of variable i " << &i << endl;
        cout << "Address where the void pointer is pointing " << ptr << endl;
    */

    /* int *p = fun();
     // p points to something which is not
     // valid anymore
     cout << *p;
     */

    /*  float f = 10.5;
      float p = 2.5;
      float *ptr = &f;
      (*ptr)++;
      *ptr = p;
      cout << *ptr << " " << f << " " << p;
      */

    /* int a = 7;
     int b = 17;
     int *c = &b;
     *c = 7;
     cout << a << b << endl;
     */

    /*   int *ptr = 0;
       int a = 10;
       *ptr = a;
       cout << *ptr << endl;\
       */

    /*  int a = 7;
      int *c = &a;
      c = c + 1;
      cout << a << *c << endl;
  */

    /*  double a = 7;
       double *c = &a;
       c = c + 3;
       cout << &a << endl;
       cout << c << endl;
       */

    /*  int a[5];
       int *c;
       cout << sizeof(a) << sizeof(c) << endl;
       */

    /*  int a[] = {1, 2, 3, 4};
      cout << *(a) << "\n"
           << &(a) << "\n"
           << *a << "\n"
           << &a << "\n"
           << *(a + 1) << "\n"
           << endl;
  */

    /*   int a[] = {1, 2, 3, 4};
       int *p = a++;
       cout << *p << endl;
       */
    return 0;
}