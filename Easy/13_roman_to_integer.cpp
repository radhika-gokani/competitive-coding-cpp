#include <iostream>
using namespace std;

class Solution
{
public:
  int romanToInt(string s)
  {

    int l = s.length();
    int num = 0;
    int prev = 0;
    int cur = 0;
    for (int i = 0; i < l; i++)
    {

      switch (s[i])
      {
      case 'I':
        cur = 1;
        break;

      case 'V':
        cur = 5;
        break;

      case 'X':
        cur = 10;
        break;

      case 'L':
        cur = 50;
        break;

      case 'C':
        cur = 100;
        break;

      case 'D':
        cur = 500;
        break;

      case 'M':
        cur = 1000;
        break;

      default:
        break;
      }

      if (prev < cur)
      {
        num = num - prev - prev + cur;
      }
      else
      {
        num = num + cur;
      }

      prev = cur;
    }

    return num;
  }
};

int main()
{

  Solution obj;

  cout << obj.romanToInt("LVIII") << endl;
  return 0;
}