#include <iostream>

using namespace std;

int main()
{

  string kata;
  getline(cin, kata);

  for (int i = 0; i < kata.size(); i++)
  {
    cout << kata[i] << endl;
  }
  return 0;
}
