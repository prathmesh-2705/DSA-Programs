class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        if(s.length()==1)
        {
            return 1;
        }
        while(s[i]==' ')
        {
            s.erase(i);
            i--;
        }
        int count=0;
        for(i=s.length()-1;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
            }
            else
            {
                break;
            }
        }
        return count;

    }
};
