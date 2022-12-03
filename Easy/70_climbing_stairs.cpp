#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  int climbStairs(int n)
  {

    vector<int> dp(n + 1, 0);
    dp[0] = 1;
    dp[1] = 2;

    for (int i = 2; i < n; i++)
    {
      dp[i] = dp[i - 1] + dp[i - 2];
    }

    return dp[n - 1];
  }
};

int main()
{
  Solution obj;
  cout << "res 7 " << obj.climbStairs(7) << endl;
  cout << "res 8 " << obj.climbStairs(8) << endl;
  cout << "res 9 " << obj.climbStairs(9) << endl;
  cout << "res 10 " << obj.climbStairs(10) << endl;
  return 0;
}