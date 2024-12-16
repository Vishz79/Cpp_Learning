#include <iostream>
using namespace std;

int main()
{
    int factorial = 1 , i , n;
    cout << "Enter a positive number" << endl;
    cin >> n ;

    if( n < 0)
        cout << "Enter a positive number." << endl;

    else
    {
        for (i =1 ; i <= n ; i++)
        {
            factorial *= i ;
        }
        cout << "factorial = " << factorial << endl;
    }
}
