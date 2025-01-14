#include <iostream>
using namespace std;
/*
Q3: Write a multiple-alternative if statement to implement the following decision table that
categorizes a systolic blood pressure reading (pressure as ventricles contract) as “normal,”
“pre-hypertension,” or “hypertension.” Assume that the systolic blood pressure has been input
as an integer.
Systolic Blood Pressure     140 and higher             120–139            Under 120
Category                    Hypertension               Pre-hypertension   Normal
*/
int bloodpressuree();
int bloodpressure;

int main()
{
    cout << "Please enter systolic blood pressure: ";
    cin >> bloodpressure;
    int ret; // ret = return value
    ret = bloodpressuree();
        if (ret == 1)
    {
        cout << "Systolic Blood Pressure can't be in negative value or Zero.";
    }
    else if (ret == 2)
    {
        cout << "Hypertension";
    }
    else if (ret == 3)
    {
        cout << "Pre-Hypertension";
    }
    else if (ret == 4)
    {
        cout << "Normal";
    }

}
int bloodpressuree()
{
    if (bloodpressure <= 0)
    {
        return 1;
    }
    else if (bloodpressure >= 140)
    {
        return 2;
    }
    else if (bloodpressure >= 120 && bloodpressure <= 139)
    {
        return 3;
    }
    else if (bloodpressure < 120)
    {
        return 4;
    }
}
