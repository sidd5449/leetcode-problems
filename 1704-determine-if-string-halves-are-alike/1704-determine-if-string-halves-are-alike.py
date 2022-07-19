class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        
        vowelNum = 0
        vowelsList = set(list('aeiouAEIOU'))
        
        for i in range(len(s)//2):
            if s[i] in vowelsList:
                vowelNum += 1
        
        for i in range(len(s)//2, len(s)):
            if s[i] in vowelsList:
                vowelNum -= 1	
            if vowelNum < 0:
                return False
        
        return vowelNum == 0
        