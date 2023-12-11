#include <iostream>
using namespace std;

/*123
456
789*/

int main()
{
    int n;
    int i = 1;
    cin >> n;
    int num = 1;
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            cout << num++;
            j++;
        }
        cout << endl;
        i++;
    }
}