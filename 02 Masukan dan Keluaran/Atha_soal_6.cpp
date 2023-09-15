#include <iostream>

using namespace std;

int main()
{

  int a, b;
  cin >> a >> b;

  int bagi = a / b;
  int sisa_bagi = a % b;

  cout << "masing-masing " << bagi << endl;
  cout << "bersisa " << sisa_bagi << endl;

  return 0;
}