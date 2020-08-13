#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int coinSide = rand() % 2;
    
    if (coinSide == 0)  
    {
        cout << "Heads" << endl;
    }
    else
    {
        cout << "Tails" << endl;
    }   
}