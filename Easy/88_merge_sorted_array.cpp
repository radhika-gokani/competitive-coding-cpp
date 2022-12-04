#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
public:
  void merge(vector<int> &nums1, int m, vector<int> &nums2, int n)
  {

    vector<int> res;

    int i = 0;
    int j = 0;

    while (i < m && j < n)
    {
      if (nums1[i] > nums2[j])
      {
        res.push_back(nums2[j]);
        j++;
      }
      else
      {
        res.push_back(nums1[i]);
        i++;
      }
    }

    while (i < m)
    {
      res.push_back(nums1[i]);
      i++;
    }
    while (j < n)
    {
      res.push_back(nums2[j]);
      j++;
    }

    nums1 = res;
  }
};

int main()
{
  Solution obj;
  vector<int> vect1 = {1, 2, 3, 0, 0, 0};
  vector<int> vect2 = {2, 5, 6};

  obj.merge(vect1, vect1.size() - vect2.size(), vect2, vect2.size());

  for (int i : vect1)
  {
    cout << i << endl;
  }

  return 0;
}