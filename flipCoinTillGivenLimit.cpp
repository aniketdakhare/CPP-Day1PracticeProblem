#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int heads = 1;
    int tails = 1;
    srand(time(0));

    while (heads <= 11 && tails <= 11)
    {
        int coinSide = rand() % 2;
    
        if (coinSide == 0)  
        {
            cout << "Heads" << endl;
            heads++;
        }
        else
        {
            cout << "Tails" << endl;
            tails++;
        }
    }   
}