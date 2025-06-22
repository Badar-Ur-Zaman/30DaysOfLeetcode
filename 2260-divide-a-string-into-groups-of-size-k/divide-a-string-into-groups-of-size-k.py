class Solution:
    def divideString(self, s: str, k: int, fill: str) -> List[str]:
        arr = []
        for i in range(0, len(s), k):
            if (len(s) - i + 1) > k:
                substr = s[i:i+k]
                arr.append(substr)
            else:
                substr = s[i:]
                substr += fill * (k - len(substr))
                arr.append(substr)
        return arr