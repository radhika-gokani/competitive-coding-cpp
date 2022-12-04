#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  int maxSubArray(vector<int> &nums)
  {

    int currentSum = nums[0], totalSum = nums[0];
    cout << "currentSum " << currentSum << " totalSum " << totalSum << endl;
    for (int i = 1; i < nums.size(); i++)
    {

      currentSum = max(nums[i], currentSum + nums[i]);

      totalSum = max(totalSum, currentSum);

      cout << "currentSum " << currentSum << " totalSum " << totalSum << endl;
    }
    return totalSum;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
  cout << obj.maxSubArray(vect) << endl;
  return 0;
}