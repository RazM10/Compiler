#include<bits/stdc++.h>
using namespace std;
vector<int> str,str2;
int i;

void Action()
{
    str2.clear();
    int len2=str.size();
    for(int j=0; j<len2; j++)
    {
        if(j==i-1)
        {
            j=i+1;
            str2.push_back(1);
        }
        else
        {
            str2.push_back(str[j]);
        }
    }
    str.clear();
    str=str2;
    i=0;
    str2.clear();
}
int main()
{
    freopen("inG.txt","r",stdin);
    string s;
    while(cin>>s)
    {
        if(s=="(")
            str.push_back(4);
        else if(s==")")
            str.push_back(5);
        else if(s=="+")
            str.push_back(2);
        else if(s=="-")
            str.push_back(3);
        else
        {
            str.push_back(1);
        }
    }
    for(int i=0; i<str.size(); i++)
    {
        cout<<str[i];
    }
    for(i=0; i<str.size(); i++)
    {
        if(str[i]==1)
        {
            if(str[i-1]==4 && str[i+1]==5)
            {
                Action();
            }
        }
        else if((str[i]==2) || (str[i]==3))
        {
            if(str[i-1]==1 && str[i+1]==1)
            {
                Action();
            }
        }
    }
    cout<<endl;
    int l=str.size();
    if(l>1)
    {
        cout<<"Invalid";
    }
    else
    {
        cout<<"Valid\n";
        for(int i=0; i<l; i++)
        {
            cout<<str[i];
        }
    }

    return 0;
}
