#include <iostream>
using namespace std;

void myFunction()
{
  cout << "I just got executed" << endl;
}

void myFunction2(string name = "Atha", int umur = 12)
{
  cout << "Nama saya : " << name << " umur saya : " << umur << endl;
}

int myFunction(int x)
{
  return 5 + x;
}

int main()
{
  myFunction();
  myFunction();
  myFunction();

  myFunction2("Atha");
  myFunction2("andi", 12);
  myFunction2("Budi", 14);
  myFunction2("Charlie", 17);

  cout << myFunction(17) << endl;
  cout << myFunction(25) << endl;
  cout << myFunction(30) << endl;

  int value1 = myFunction(18);
  cout << value1 << endl;

  return 0;
}