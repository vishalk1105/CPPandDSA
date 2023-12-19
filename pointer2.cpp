#include <iostream>
using namespace std;
void func(int a[])
{
    cout << a[0] << "";
};
int main()
{
    /*  int arr[10];

       cout << arr << endl;

       int *ptr = &arr[0];
       cout << ptr << endl;
       ptr = ptr + 1;
       cout << ptr << endl;
       cout << arr << endl;
       */

    /*  int arr[] = {4, 5, 6, 7};
      int *p = (arr + 1);
      cout << (arr + 1) << endl;
      cout << &arr << endl;
      cout << *arr + 9 << endl;
      */

    /*  char b[] = "XYZ";
      char *c = &b[0];
      cout << c[0] << endl;

      char s[] = "hello";
      char *p = s;
      cout << s[0] << " " << p[0];
      return 0;
      */

    /*  char arr[20];
      int i;
      for (i = 0; i < 10; i++)
      {
          *(arr + i) = 65 + i;
      }
      *(arr + i) = '\0';
      cout << arr;
      */

    /*  char *ptr;
      char str[] = "abcdefg";
      ptr = str;
      ptr += 5;
      cout << ptr << endl;
      */
    /*  int numbers[5];
        int *p;
        p = numbers;
        *p = 10;
        p = &numbers[2];
        *p = 20;
        p--;
        *p = 30;
        p = numbers + 3;
        *p = 40;
        p = numbers;
        *(p + 4) = 50;
        for (int n = 0; n < 5; n++)
        {
            cout << numbers[n] << ",";
        }
        return 0;
        */

    /*    char st[] = "ABCD";
        for (int i = 0; st[i] != '\0'; i++)
        {
            cout << st[i] << *(st) + i << *(i + st) << i[st];
        }
        */

    /*  float arr[5] = {12.5, 10.0, 13.5, 90.5, 0.5};
       float *ptr1 = &arr[0];
       float *ptr2 = ptr1 + 3;
       cout << *ptr2 << endl;
       cout << ptr2 - ptr1;
      */

    /* int a[] = {1, 2, 3, 4};
      func(a + 1);
      cout << a[0];
      */

    int a = 10;
    int *p = &a;
    int **q = &p;
    int b = 20;
    *q = &b;
    (*p)++;
    cout << a << " " << b;
}