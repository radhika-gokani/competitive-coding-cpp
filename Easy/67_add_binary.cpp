#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  string addBinary(string a, string b)
  {
    int carry = 0;
    int l1 = a.length() - 1;
    int l2 = b.length() - 1;

    string res = "";

    while (l1 != -1 && l2 != -1)
    {
      if (a[l1] == '0' && b[l2] == '0')
      {
        if (carry)
        {
          res.append("1");
          carry = 0;
        }
        else
        {
          res.append("0");
        }
      }

      if (a[l1] == '0' && b[l2] == '1')
      {
        if (carry)
        {
          res.append("0");
        }
        else
        {
          res.append("1");
        }
      }

      if (a[l1] == '1' && b[l2] == '0')
      {
        if (carry)
        {
          res.append("0");
        }
        else
        {
          res.append("1");
        }
      }

      if (a[l1] == '1' && b[l2] == '1')
      {
        if (carry)
        {
          res.append("1");
        }
        else
        {
          res.append("0");
          carry = 1;
        }
      }

      l1--;
      l2--;
    }

    if (l1 != -1)
    {
      while (l1 != -1)
      {
        if (a[l1] == '1' && carry == 1)
        {
          res.append("0");
        }

        else if (a[l1] == '0' && carry == 1)
        {
          res.append("1");
          carry = 0;
        }

        else if (a[l1] == '1' && carry == 0)
        {
          res.append("1");
          carry = 0;
        }

        else if (a[l1] == '0' && carry == 0)
        {
          res.append("0");
        }

        l1--;
      }
    }

    if (l2 != -1)
    {
      while (l2 != -1)
      {
        if (b[l2] == '1' && carry == 1)
        {
          res.append("0");
        }

        else if (b[l2] == '0' && carry == 1)
        {
          res.append("1");
          carry = 0;
        }

        else if (b[l2] == '1' && carry == 0)
        {
          res.append("1");
          carry = 0;
        }

        else if (b[l2] == '0' && carry == 0)
        {
          res.append("0");
        }

        l2--;
      }
    }

    if (carry)
    {
      res.append("1");
    }

    int n = res.length();
    for (int i = 0; i < n / 2; i++)
    {
      char temp = res[i];
      res[i] = res[n - i - 1];
      res[n - i - 1] = temp;
    }

    return res;
  }
};

int main()
{
  Solution obj;
  cout << obj.addBinary("101111", "10") << endl;
  return 0;
}