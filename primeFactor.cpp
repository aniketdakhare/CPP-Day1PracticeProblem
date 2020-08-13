#include <iostream>

using namespace std;

int main()
{
    int number = 0;
    cout << "Enter your Number" << endl;
    cin >> number;

    cout << "Prime factors of given number: ";
    for (int i = 2; number > 1 ; i++ )
    {
	    for ( int j = i; (number % i) == 0 ; j++ )
        {
            cout << i << "  ";
		    number = number / i;
        }
    }
}    