class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
        map<string,int>mp;
        for(string email:emails)
        {
            int Pos=email.find('@');
            string local=email.substr(0,Pos);
            string domain=email.substr(Pos);
            string new_local="";
            for(char ch:local)
            {
                if(ch=='+')
                break;
                if(ch!='.')
                new_local+=ch;
            }
            string normalised=new_local+domain;
            mp[normalised]++;
        }
        return mp.size();
    }
};