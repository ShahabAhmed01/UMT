#include <iostream>
using namespace std;
int presentt(int x, int y)
{
    int z = x - y;
    // z = present, x = total, y = absent
    return z;
}
int absentt(int x, int p)
{
    // formula to find 14 percent of 50 is: (14/100)*50
    // (14/100)*50 = 7
    int y = (p / 100.0) * x;
    return y;
}
int main()
{
    int total=50,absent,present;
    int percentage = 14;
    absent = absentt(total, percentage);
    present = presentt(total, absent);
    cout << "Number of students absent on a particular day = " << absent << endl;
    cout << "The number of students present = " << present << endl;
}
