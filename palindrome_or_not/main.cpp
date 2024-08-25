#include <iostream>

using namespace std;

int main()
{
    int number ,remainder,new_number = 0 , original_nmb;
    cout << "Enter a number." << endl;
    cin >> number;

    original_nmb = number;//16461


    while (number > 0)
    {
        remainder = number % 10;//1
        new_number = new_number * 10 + remainder;//1
        number = number / 10 ;

    }
    if (new_number == original_nmb)
        cout << original_nmb << " is palindrome." << endl;
    else
        cout << original_nmb << " in not palindrome." << endl;

    return 0;
}
