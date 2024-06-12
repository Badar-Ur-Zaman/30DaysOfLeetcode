class Solution:
    def relativeSortArray(self, arr1: List[int], arr2: List[int]) -> List[int]:
        result = []
        for element in arr2:
            frequency = arr1.count(element)
            result.extend([element] * frequency)

        temp = []
        for element in arr1:
            if element not in arr2:
                temp.append(element)
        
        temp.sort()

        result.extend(temp)
        return result
        