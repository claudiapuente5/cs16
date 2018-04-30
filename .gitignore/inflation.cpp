#include <iostream>

using namespace std;

double inflationRate(int oldPrice, int newPrice);
// Computes the inflation rate using newPrice/oldPrice                               

int main ()
{
  double infR;
  int oldP, newP;

  while(oldP>0)
    {

      cout << "Enter the old price (or zero to quit):\n";
      cin >> oldP;
      if (oldP==0)
        {
          return 0;
        }
      else
        {
          cout << "\nEnter the new price:\n";
          cin >> newP;

          infR = inflationRate(oldP,newP);

          cout.setf(ios::fixed);
          cout.setf(ios::showpoint);
          cout.precision(2);

          cout << "\nThe inflation rate is " << infR << "%\n";
        }

     }

}
double inflationRate(int oldPrice, int newPrice)
{
  double total;

  total = newPrice/oldPrice;
  return total;

}
