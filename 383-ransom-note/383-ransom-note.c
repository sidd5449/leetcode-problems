

bool canConstruct(char * ransomNote, char * magazine){
	int htab[26] = {0};
    for (int i = 0; magazine[i]; i++)
        htab[magazine[i] - 'a']++;
    
    for (int i = 0; ransomNote[i]; i++) {
        htab[ransomNote[i] - 'a']--;
        if (htab[ransomNote[i] - 'a'] < 0)
            return false;
    }
    return true;
}