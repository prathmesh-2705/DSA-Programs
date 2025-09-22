class Solution {
public:
 bool isValid(string word) {
        if(word.length()<3)
        {
            return false;
        }
        for (int i = 0; i < word.length(); i++) 
        {
            if (!isalnum(word[i])) {
                return false;
            }
        }
        for(int i=0;i<word.length();i++)
        {
            if(isVowel(word)==true && isConsonant(word)==true)
            {
                return true;
            }
        }  
         return 0;
    }
bool isVowel(string word)
    {
    for(int i=0;i<word.length();i++)
    {
        word[i]=tolower(word[i]);
        if(word[i]=='a'||word[i]=='e'||word[i]=='i'||word[i]=='o'||word[i]=='u')
        {
            return true;
        }

    }  
    return 0;
}
bool isConsonant(string word)
    {
    for(int i=0;i<word.length();i++)
    {
        word[i]=tolower(word[i]);
        if(isalpha(word[i]) && word[i]!='a' && word[i]!='e' && word[i]!='i' && word[i]!='o' && word[i]!='u')
        {
            return true;
        }
    }  
    return false;
}
   
};
