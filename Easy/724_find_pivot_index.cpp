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
  int pivotIndex(vector<int> &nums)
  {

    int totalSum = 0;

    for (int i : nums)
    {
      totalSum += i;
    }

    // if (totalSum == 0)
    // {
    //   return 0;
    // }

    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++)
    {
      if (leftSum == totalSum - nums[i])
      {
        return i;
      }

      leftSum += nums[i];
      totalSum -= nums[i];

      cout << "leftSum " << leftSum << endl;
      cout << "totalSum " << totalSum << endl;
    }

    return -1;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {2, 1, -1};
  cout << obj.pivotIndex(vect) << endl;
  return 0;
}