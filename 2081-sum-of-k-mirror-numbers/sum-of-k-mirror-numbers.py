class Solution:
    def kMirror(self, k: int, n: int) -> int:
        def base_k_is_pal(num):
            base_k = []
            while num:
                base_k.append(num % k)
                num //= k
            return base_k == base_k[::-1]

        res = []
        l = 1
        while len(res) < n:
            r = l * 10
            for p in [1, 0]:
                for i in range(l, r):
                    if len(res) == n:
                        break
                    copy = str(i)
                    if p == 0:
                        copy = copy + copy[::-1]
                    else:
                        copy = copy[:-1] + copy[::-1]
                    copy = int(copy)

                    if base_k_is_pal(copy):
                        res.append(copy)

            l = r
        return sum(res)
