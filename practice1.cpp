#include <iostream>
using namespace std;

int main()
{
    // int a = 9;
    // if (a == 9)  // output is NINEY BCZ first condition is true after that it will not run remaining condition
    // {
    //     cout << "NINEY";
    // }
    // else if (a > 0)
    // {
    //     cout << "POSITIVE";
    // }
    // else
    // {
    //     cout << "Negative";
    // };

    // int a = 2;
    // int b = a + 1;
    // if ((a = 3) == b)
    // {
    //     cout << "First condition" << a;
    // }
    // else
    // {
    //     cout << "second condition" << a + 1;
    // };
    // cout << " last conditon" << a;

    /* char ch;
      cout << "Enter Character\n";
      cin >> ch;
      int asciiValue = int(ch);
      cout << "the value of ch ;" << asciiValue << endl;

      if (asciiValue >= 65 && asciiValue <= 90)
      {
          cout << "Upper case Letter";
      }
      else if (asciiValue >= 97 && asciiValue <= 112)
      {
          cout << "Lower case Letter";
      }
      else if (asciiValue >= 48 && asciiValue <= 57)
      {
          cout << "Numeric value";
      }
      else if (asciiValue == 45)
      {
          cout << "Negative Numeric value";
      }
      else
      {
          cout << "Please Enter Valid Input";
      };
    */

    //  Sum of EVEN numbers
    { /*   int sum = 0;
        int i = 1;
        int n;
        cout << "Enter a number \n";
        cin >> n;

        while (i <= n)
        {
            if (i % 2 == 0)
            {
                sum += i;
            }
            i++;
        }
        cout << sum; */
    }

    int n;
    cin >> n;
    int i = 2;
    while (i < n)
    {
        if (n % i == 0)
        {
            cout << "Number is Not prime \n";
        }
        else if (n % i != 0)
        {
            cout << "Number is prime \n";
        }
        else
        {
            cout << "Enter valid input \n";
        };
        i++;
    }
}