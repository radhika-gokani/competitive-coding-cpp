#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
  int mySqrt(int x)
  {

    if (x == 1)
      return 1;
    int l = 0;
    int r = (x / 2) + 1;
    cout << "l " << l << endl;
    cout << "r " << r << endl;
    while (l < r - 1)
    {
      int mid = l + (r - l) / 2;

      cout << "mid " << mid << endl;

      if (mid == x / mid)
        return mid;
      else if (mid > x / mid)
        r = mid;
      else
        l = mid;
    }
    return l;
  }
};

int main()
{
  Solution obj;
  cout << obj.mySqrt(4) << endl;
  return 0;
}