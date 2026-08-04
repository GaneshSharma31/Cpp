#include <iostream>
using namespace std;
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << "*";
        } if (i==3){
            cout << " 0 " ;
            // cout << " " ;
        } else  cout << "   ";
        for (int j = 0; j < 2 * (n - i) - 2; j++)
        {
            cout << " ";
        }
        for (int k = 0; k < i + 1; k++)
        {
        
            cout << "*";
        
        }
        
            // cout<<" ";
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < 5+(2*i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < n - i-1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}


/* output :
*         *
**       **
***     ***
**** 0 ****
***     ***
**       **
*         *


*/