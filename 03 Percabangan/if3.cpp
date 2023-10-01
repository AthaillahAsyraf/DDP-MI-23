#include <iostream>

using namespace std;

int main()
{

  int nilai;
  cin >> nilai;

  if (nilai > 0 && nilai < 9)
  {
    cout << "Satuan\n";
  }
  else if (nilai >= 10 && nilai <= 99)
  {
    cout << "Puluhan\n";
  }
  else if (nilai >= 100 && nilai <= 999)
  {
    cout << "Ratusan\n";
  }
  else
  {
    cout << "Tidak Tahu\n";
  }
}
