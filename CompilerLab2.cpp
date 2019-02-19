#include<bits/stdc++.h>
using namespace std;

string Operator,Digit;
vector<string> vDigit, keyWord,identifier,functionC;
string keyWords[100];
int n;

void isOperator(string str)
{
    int len=str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i]==';' || str[i]=='(' || str[i]==')' || str[i]=='=' || str[i]=='{' || str[i]=='}' || str[i]=='+'||str[i]=='-'||str[i]=='/'||str[i]=='*')
        {
            Operator+=str[i];
        }
    }
}

void isDigit(string str)
{
    int flag=0;
    int len=str.length();
    for(int i=0; i<len; i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            flag=1;
        }
    }
    if(flag)
    {
        vDigit.push_back(str);
    }
}

int isKeyword(string str)
{
    int flagOut=0;
    for(int i=1; i<=n; i++)
    {
        if(keyWords[i]==str)
        {
            keyWord.push_back(str);
            break;
        }
    }
}

void isIdentifier(string s)
{
    int out=0;
    for(int i=1; i<=n; i++)
    {
        if(keyWords[i]==s)
        {
            out=1;
            break;
        }
    }
    if((s[0]=='_' || (s[0]>='a' && s[0]<='z') || (s[0]>='A' && s[0]<='Z')) && out==0)
    {
        int flag=0;
        if(s.length()==1)
        {
            flag=1;
        }
        else
        {
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
        }
        if(flag==1)
        {
            identifier.push_back(s);
        }
    }
}

void isFunction(string s)
{
    int flag=0;
    int len=s.length();
    string s1=s.substr(0,len-2);
    if(s[len-2]=='(' && s[len-1]==')')
    {
        for(int i=0; i<identifier.size(); i++)
        {
            if(s1==identifier[i])
            {
                flag=1;
                break;
            }
        }
        if(flag==0){
            functionC.push_back(s);
        }

    }
}

int main()
{
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cin>>keyWords[i];
    }
    freopen("in.txt","r",stdin);
    string str;
    while(cin>>str)
    {
        cout<<str<< " ";
        isOperator(str);
        isDigit(str);
        isKeyword(str);
        isIdentifier(str);
        isFunction(str);

    }
    cout<<"\nOperators: \n";
    for(int i=0; i<Operator.length(); i++)
    {
        cout<<Operator[i]<<endl;
    }
    cout<<"Digits: \n";
    for(int i=0; i<vDigit.size(); i++)
    {
        cout<<vDigit[i]<<endl;
    }
    cout<<"Keywords: \n";
    for(int i=0; i<keyWord.size(); i++)
    {
        cout<<keyWord[i]<<endl;
    }
    cout<<"Identifiers: \n";
    for(int i=0; i<identifier.size(); i++)
    {
        cout<<identifier[i]<<endl;
    }
    cout<<"Functions: \n";
    for(int i=0; i<functionC.size(); i++)
    {
        cout<<functionC[i]<<endl;
    }
}
