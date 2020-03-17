class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
     stack <int> s;
  int maxarea = 0;
  int tp ;
  int areawithtop = 0;
  int n = arr.size();
  int i = 0;
  while(i < n)
  {
    if(s.empty() || arr[s.top()] <= arr[i])
    {
      s.push(i++);
    }

    else 
    {
      tp = s.top();
      s.pop();
      areawithtop = arr[tp] * (s.empty() ? i : i - s.top() - 1);
      if (maxarea < areawithtop)
      {
        maxarea = areawithtop;
      }
    }
  }

  while(!s.empty())
  {
    tp = s.top();
    s.pop();
    areawithtop = arr[tp] * (s.empty() ? i : i - s.top() - 1);
    if (maxarea < areawithtop)
    {
      maxarea = areawithtop;
    }
  }

  return maxarea;   
    }
}
