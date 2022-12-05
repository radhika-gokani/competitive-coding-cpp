#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  int maxProfit(vector<int> &prices)
  {
    int buy = prices[0];

    int max_profit = 0;

    for (int i : prices)
    {
      if (i < buy)
      {
        buy = i;
      }
      if (i - buy > max_profit)
      {
        max_profit = i - buy;
      }

      cout << "buy " << buy << endl;
      cout << "max_profit " << max_profit << endl;
    }

    return max_profit;
  }
};

int main()
{
  Solution obj;

  vector<int> vect = {2, 4, 1};

  cout << obj.maxProfit(vect) << endl;
  return 0;
}