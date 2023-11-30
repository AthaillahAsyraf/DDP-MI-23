#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Masukkan jumlah bilangan: ";
  cin >> n;

  int bilangan[n];
  int total = 0;

  for (int i = 0; i < n; i++)
  {
    cout << "Masukkan bilangan ke-" << i + 1 << ": ";
    cin >> bilangan[i];
    total += bilangan[i];
  }

  double rata_rata = static_cast<double>(total) / n;

  cout << "Nilai rata-rata: " << rata_rata << endl;

  return 0;
}
