#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  int search(vector<int> &nums, int target)
  {
    int l = nums.size();

    if (target < nums[0])
    {
      return -1;
    }

    if (target > nums[l - 1])
    {
      return -1;
    }

    int start = 0;
    int end = l - 1;

    while (start <= end)
    {
      int mid = (start + end) / 2;
      if (target == nums[mid])
      {
        return mid;
      }
      else if (target > nums[mid])
      {
        start = mid + 1;
      }
      else
      {
        end = mid - 1;
      }

      cout << "start " << start << endl;
      cout << "mid " << mid << endl;
      cout << "end " << end << endl;
    }

    cout << "start " << start << endl;
    cout << "end " << end << endl;

    return -1;
  }
};

int main()
{
  Solution obj;
  vector<int> vect = {-1, 0, 3, 5, 9, 12};
  cout << obj.search(vect, 2) << endl;
  return 0;
}