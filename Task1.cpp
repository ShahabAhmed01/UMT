#include <iostream>
using namespace std;
void eman(int, int, int);
void GOV(float,float,float,float,float,float,float,float,float);
int main()
{
    cout << "Program 1:Eman's Age." << endl;
    cout << "Program 2:Government of Punjab." << endl;
    cout << "Please press 1 to Run Program one and 2 to run program two: ";
    int choice;
    cin >> choice;
    if (choice < 1 && choice > 2)
    {
        cout << "Invalid Choice";
    }
    else if (choice == 1)
    {
    int T=20,E=19,K=21;
    // lets say T is older than E but K is older than T which makes K older than both
    eman(T,E,K); // calling the function
    }
    else
    {
    float TotalBudget = 7,Earthquake = 2.5,Roads = 1,School = 0.5,Senate = 1.5,Agricultural = 2,Provincial = 0.5,Small = 3,International = 4;
     GOV(TotalBudget,Earthquake,Roads,School,Senate,Agricultural,Provincial,Small,International);
    }
}
// making this function to check if Eman is older than Kashif or not
void eman(int T, int E, int K)
{
    if(T>E&&K>T)
    {
        if(E>K)
        {
            cout << "True";
        }
        else
        {
            cout << "False";
        }
    }
}
void GOV(float T,float E,float R,float S,float Sen,float A,float P,float Small,float I)
{
    if (I+A < T)
    {
      if (I+A+S+P <= T)
      {
          cout << "They can spend money on School improvement program and Provincial radio.";
      }
      if (I+A+E <= T)
      {
          cout << "They can spend money on Earthquake preparedness.";
      }
      if (I+A+R+S <= T)
      {
          cout << "They can spend money on School improvement program and Roads improvement.";
      }
      if (I+A+Small <= T)
      {
          cout << "They can spend money on Small business loan program.";
      }
      if (I+A+Sen+P <= T)
      {
          cout << "They can spend money on Provincial radio and senate office building re-modeling.";
      }
    }
}
