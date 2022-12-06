#include <iostream>
#include <vector>
using namespace std;

// cout << "" <<  << endl;

struct ListNode
{
  int val;
  ListNode *next;
  ListNode() : val(0), next(nullptr) {}
  ListNode(int x) : val(x), next(nullptr) {}
  ListNode(int x, ListNode *next) : val(x), next(next) {}
};

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
  ListNode *oddEvenList(ListNode *head)
  {

    if (head == nullptr)
    {
      return head;
    }

    if (head->next == nullptr)
    {
      return head;
    }

    ListNode *curPointer = head;
    ListNode *tempPointer = head;
    ListNode *secondNode = head->next;

    int count = 0;
    while (curPointer->next->next != nullptr)
    {
      tempPointer = curPointer->next;

      curPointer->next = curPointer->next->next;
      curPointer = tempPointer;

      cout << "curPointer" << curPointer->val << endl;
      cout << "curPointer->next" << curPointer->next->val << endl;
      count++;
      // cout << "curPointer->next->next" << curPointer->next->next->val << endl;
    }
    cout << "curPointer outside" << curPointer->val << endl;
    cout << "count" << count << endl;

    if (count % 2 == 0)
    {
      curPointer->next = secondNode;
    }
    else
    {
      curPointer->next->next = secondNode;
      curPointer->next = nullptr;
    }

    return head;
  }
};

int main()
{
  Solution obj;
  ListNode n = ListNode(1);
  n.next = new ListNode(2);
  n.next->next = new ListNode(3);
  n.next->next->next = new ListNode(4);
  n.next->next->next->next = new ListNode(5);
  n.next->next->next->next->next = new ListNode(6);
  n.next->next->next->next->next->next = new ListNode(7);
  n.next->next->next->next->next->next->next = new ListNode(7);

  ListNode *res = obj.oddEvenList(&n);

  ListNode *tempPointer = res;

  while (tempPointer != nullptr)
  {
    cout << tempPointer->val << endl;
    tempPointer = tempPointer->next;
  }

  return 0;
}