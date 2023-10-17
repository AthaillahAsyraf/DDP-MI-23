#include <iostream>

using namespace std;

int main()
{
  string kata;
  getline(cin, kata);

  for (int i = kata.length() - 1; i >= 0; i--)
  {
    cout << kata[i];
  }
  return 0;
}
