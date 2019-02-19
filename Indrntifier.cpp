#include<bits/stdc++.h>
using namespace std;

string s;
string keyWords[100];
int n;

int keyWordCheck()
{
    int flagOut=0;
    for(int i=1; i<=n; i++)
    {
        if(keyWords[i]==s)
        {
            flagOut=1;
            break;
        }
        else
        {
            flagOut=0;
        }
    }
    return flagOut;
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>keyWords[i];
    }

    while(1)
    {
        cin>>s;
        int flagOut=0;
        flagOut=keyWordCheck();
        if(flagOut==1)
        {
            cout<<"Its not a Identifier,it is a keyword\n";
            break;
        }
        else if(s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z'))
        {
            int flag=0;
            for(int i=1; i<s.length(); i++)
            {
                if(s[i]=='_' || (s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
                {
                    flag=1;
                }
                else
                {
                    flag=0;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"Its a Identifier\n";
            }
            else
            {
                cout<<"Its not a Identifier\n";
            }
        }
        else
        {
            cout<<"Its not a Identifier\n";
        }
    }
    //cout<<s.length();
    return 0;
}
