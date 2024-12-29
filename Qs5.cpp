// Shahab Ahmed, F2024266727
#include <iostream>
using namespace std;
int main()
{
    cout << "1.Deposit \t 2.Withdraw \t 3.Balance \t 4.Exit";
    int choice,dep = 0, userdp, withdraw;

    do {
                 cin >> choice;
     switch (choice)
    {
        case (1):
        {
            cout << "Deposit: \n";
            cin >> userdp;
            if (userdp >= 0)
            {
                cout << "Amount Deposited \n";
                dep = dep + userdp;
            }
            else
            {
                cout << "invalid";
            }
            break;

        }
                case (2):
        {
            cout << "Withdraw \n";
            cin >> withdraw;
            if (withdraw > userdp)
            {
                cout << "Invalid \n";
            }
            else
            {
                dep = dep - withdraw;
                cout << "Remaining cash is: " << dep;
            }
            break;

        }
               case (3):
        {
            cout << "Display balance: \n";
             cout << "Your balance is: " << dep;
        }

    }
    }while (choice != 4);

}

