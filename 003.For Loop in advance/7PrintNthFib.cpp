#include <iostream>
using namespace std;
int main()
{
  int a = -1, b = 1, c, n;
  cout << "Enter required term";
  cin >> n;
  if (n < 1)
    cout << "invalid term";
  else
  {
    for (int i = 1; i <= n; i++)
    {
      c = a + b;
      a = b;
      b = c;
    }
    cout << c;
  }
  return 0;
}
