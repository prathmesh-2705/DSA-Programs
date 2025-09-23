class Solution {
public:
        bool isVowel(char s)
        {
            s= tolower(s);
            return s== 'a' || s == 'e' || s == 'i' || s == 'o' || s == 'u';
        } 
    string reverseVowels(string s) {
        int size=s.size();
        int st=0;
        int en=size-1;
        int i=0;
        while(st<en)
        {
            while(st<en && !isVowel(s[st]))
            {
                st++;
            }
            while(st<en && !isVowel(s[en]))
            {
                en--;
            }
            if(st<en)
            {
                swap(s[st],s[en]);
                st++;
                en--;
            }
        }
        return s;
    }
};
