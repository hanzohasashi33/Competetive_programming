class Solution:
    def stringShift(self, s: str, shift: List[List[int]]) -> str:
        ns = collections.deque(s)
        for item in shift:
            if item[0] == 0:
                time = 0
                while time < item[1]:
                    ns.append(ns.popleft())
                    time += 1
            else:
                time = 0
                while time < item[1]:
                    ns.appendleft(ns.pop())
                    time += 1
        return ''.join(ns)
                    
