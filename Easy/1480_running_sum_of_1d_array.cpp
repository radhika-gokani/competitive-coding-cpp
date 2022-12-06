#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  Solution()
  {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
  }

public:
  vector<int> runningSum(vector<int> &nums)
  {
    for (int i = 1; i < nums.size(); i++)
    {
      nums[i] = nums[i] + nums[i - 1];
    }

    return nums;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {};
  cout << "hellow world" << endl;
  return 0;
}