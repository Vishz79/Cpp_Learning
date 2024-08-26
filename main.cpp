#include <iostream>

using namespace std;

int main()
{
    int nmb1,nmb2,i;
    cout << "Enter number 1: ";
    cin >> nmb1;
    cout << "enter number 2: ";
    cin >> nmb2;

    if(nmb1>nmb2)
        i = nmb2;
    else
        i = nmb1;

    for(;i>=1;i--)
    {
        if(nmb1 % i == 0 && nmb2 % i == 0)
        break;
    }
    cout << "GCD is: "<<i;
    return 0;
}
