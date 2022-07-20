class Solution:
    def countWords(self, words1: List[str], words2: List[str]) -> int:
        if len(words1) > len(words2):
            d = dict(Counter(words2))
            d2 = dict(Counter(words1))
        else:
            d = dict(Counter(words1))
            d2 = dict(Counter(words2))
        c  = 0
        for i in d:
            if d[i] == 1:
                if i in d2:
                    if d2[i] == 1:
                        c += 1
        return c
        