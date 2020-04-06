class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        result = []
        _dict = {}
        for each in strs:
            each_sort = tuple(sorted(each))
            if each_sort in _dict:
                _dict[each_sort].append(each)
            else:
                _dict[each_sort] = [each]
        for val in _dict.values():
            result.append(val)
        return result
