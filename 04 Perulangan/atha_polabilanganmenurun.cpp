#include <iostream>

using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y >> z;

  for (int a = x; a >= y; a += z)
  {
    cout << a << " ";
  }
  return 0;
}
