#include <iostream>

using namespace std;

int main()
{
  int bilangan;
  cin >> bilangan;

  if (bilangan >= 0)
  {
    if (bilangan % 2 == 0)
    {
      cout << "Positif Genap";
    }
    else
    {
      cout << "Positif Ganjil";
    }
  }
  else
  {
    cout << "Negatif";
  }
  return 0;
}
