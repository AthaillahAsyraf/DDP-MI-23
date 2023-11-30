#include <iostream>
using namespace std;

int main()
{
  int a1, a2, a3, total;
  double rata_rata;

  cout << "tentukan a1= ";
  cin >> a1;
  cout << "tentukan a2= ";
  cin >> a2;
  cout << "tentukan a3= ";
  cin >> a3;

  total = a1 + a2 + a3;
  mengrata_rata = total / 3.0;

  cout << "Bilangan 1 = " << a1 << endl;
  cout << "Bilangan 2 = " << a2 << endl;
  cout << "Bilangan 3 = " << a3 << endl;
  cout << "Total = " << total << endl;
  cout << "menghitung_rata_rata = " << rata_rata << endl;

  return 0;
}