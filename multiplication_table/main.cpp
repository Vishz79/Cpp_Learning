#include <iostream>

using namespace std;

int main()
{
    int i,j,k ;

    cout << "  ";

    for(j = 1 ; j <= 12 ; j++)
        {
            cout << j ;
            cout << "  ";
        }
        cout << endl;
    for(i=1 ; i <= 12 ; i++)
    {
        cout << i ;
        for ( k =1 ; k <= 12 ; k++)
        {
            cout << " " << i * k ;
        }
        cout<< endl;

    }




    return 0;
}
