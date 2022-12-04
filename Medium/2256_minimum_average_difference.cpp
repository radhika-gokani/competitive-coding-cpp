
#include <bits/stdc++.h>
#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

// cout << "" <<  << endl;

class Solution
{
  // public:
  //   int minimumAverageDifference(vector<int> &nums)
  //   {
  //     int l = nums.size();

  //     if (l == 1)
  //     {
  //       return 0;
  //     }

  //     float totalAvg = 0.0;

  //     for (int i = 0; i < l; i++)
  //     {
  //       totalAvg += nums[i];
  //     }
  //     totalAvg = totalAvg / l;

  //     float leftAvg = 0.0;
  //     int leftn = 0;
  //     float rightAvg = totalAvg;
  //     int rightn = l;

  //     int min_diff = INT_MAX;
  //     int min_index = 0;
  //     for (int i = 0; i < l - 1; i++)
  //     {
  //       leftAvg = ((leftAvg * leftn) + nums[i]) / (leftn + 1);

  //       rightAvg = ((rightAvg * rightn) - nums[i]) / (rightn - 1);

  //       // cout << "leftAvg " << leftAvg << endl;

  //       // cout << "rightAvg " << rightAvg << endl;

  //       int avg_diff = floor(leftAvg) - floor(rightAvg);
  //       if (avg_diff < 0)
  //         avg_diff = -avg_diff;

  //       // cout << "avg_diff " << avg_diff << endl;

  //       if (avg_diff < min_diff)
  //       {
  //         min_diff = avg_diff;
  //         min_index = i;
  //       }
  //       leftn++;
  //       rightn--;
  //     }

  //     if (totalAvg < min_diff)
  //     {
  //       return l - 1;
  //     }

  //     return min_index;
  //   }

public:
  int minimumAverageDifference(vector<int> &nums)
  {
    int l = nums.size();

    if (l == 1)
    {
      return 0;
    }

    long long totalSum = 0;

    for (int i = 0; i < l; i++)
    {
      totalSum += nums[i];
    }

    long long leftSum = 0;
    long long rightSum = totalSum;
    long long min_diff = LLONG_MAX;
    int min_index = 0;
    for (int i = 0; i < l - 1; i++)
    {
      leftSum += nums[i];
      rightSum -= nums[i];

      long long avg_diff = abs((leftSum / (i + 1)) - (rightSum / (l - i - 1)));

      if (avg_diff < min_diff)
      {
        min_diff = avg_diff;
        min_index = i;
      }

      cout << "avg_diff " << avg_diff << endl;
    }

    if (min_diff > (totalSum / l))
    {
      return l - 1;
    }

    return min_index;
  }
};

int main()
{
  Solution obj;

  vector<int> vect = {2, 5, 3, 9, 5, 3};

  cout << obj.minimumAverageDifference(vect) << endl;
  return 0;
}