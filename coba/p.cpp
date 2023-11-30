#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;

  int bilangan[n];
  int total = 0;

  for (int i = 0; i < n; ++i)
  {
    cout << "Masukkan bilangan ke-" << i + 1 << ": ";
    cin >> bilangan[i];
    total += bilangan[i];
  }

  double ratarata = static_cast<double>(total) / n;

  cout << "Nilai rata-rata: " << ratarata << endl;

  return 0;
}