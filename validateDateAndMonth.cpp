#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    int day = 0;
    int month = 0;
    bool validation = false;

    cout << "Enter Date: ";
    cin >> day;
    cout << "Enter Month: ";
    cin >> month;

    if (month >= 3 && month <= 6)
    {
        int daysOfMonth = 30 + (month % 2); 
        if (day > 1 && day < daysOfMonth)
        {
            int date = (month * 100 ) + day;
            if (date >= 320 && date <= 620)
            {
                validation = true;  
            }            
        }        
    }  
    cout << boolalpha << validation << endl;
    return 0;
}