#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    srand(time(0));
    int diceNumber = 1 + (rand() % 6);
    cout << diceNumber << endl;
}