#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Masukkan jumlah value: ";
  cin >> n;

  int value[n];
  int total = 0;

  for (int i = 0; i < n; ++i)
  {
    cout << "Masukkan value ke-" << i + 1 << ": ";
    cin >> value[i];
    total += value[i];
  }

  double rataRata = static_cast<double>(total) / n;

  cout << "Nilai rata-rata: " << rataRata << endl;

  return 0;
}