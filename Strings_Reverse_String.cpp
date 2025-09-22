class Solution {
public:
    void reverseString(vector<char>& s) {
        int size=s.size();
        int st=0;
        int en=size-1;
        int i=0;
        while(st<en)
        {
            char temp=s[en];
            s[en]=s[st];
            s[st]=temp;
            st++;
            en--;
        }
    }
};
