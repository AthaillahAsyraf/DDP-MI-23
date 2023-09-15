#include <iostream>

using namespace std;

int main()
{

  string x[12];

  cin >> x[1] >> x[2] >> x[3];
  cin >> x[4] >> x[5] >> x[6];
  cin >> x[7] >> x[8] >> x[9];
  cin >> x[10] >> x[11] >> x[12];

  cout << x[1] << " " << x[4] << " " << x[7] << " " << x[10] << endl;
  cout << x[2] << " " << x[5] << " " << x[8] << " " << x[11] << endl;
  cout << x[3] << " " << x[6] << " " << x[9] << " " << x[12] << endl;

  return 0;
}