class Solution {
public:
    bool isPalindrome(string s) {
        if(s.length()<=1)
        return true;
        int p=0, q=s.length()-1;
        while(p<q)
        {
            while(p<q && !isalnum(s[p]))
            p++;

            while(p<q && !isalnum(s[q]))
            q--;

            if(p<q && tolower(s[p])!=tolower(s[q]))
            return false;
            p++;
            q--;
        }
        return true;
    }
};
