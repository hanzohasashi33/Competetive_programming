  def largestRectangleArea(self, heights):
      stack = [-1]
      maxArea = 0

      for i in xrange(len(heights)):
          # we are saving indexes in stack that is why we comparing last element in stack
          # with current height to check if last element in stack not bigger then
          # current element
          while stack[-1] != -1 and heights[stack[-1]] >= heights[i]:
              lastElementIndex = stack.pop()
              maxArea = max(maxArea, heights[lastElementIndex] * (i - stack[-1] - 1))
          stack.append(i)

      # we went through all elements of heights array
      # let's check if we have something left in stack
      while stack[-1] != -1:
          lastElementIndex = stack.pop()
          maxArea = max(maxArea, heights[lastElementIndex] * (len(heights) - stack[-1] - 1))

      return maxArea
