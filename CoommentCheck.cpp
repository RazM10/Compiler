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

int main(){
    /*string file,file2;
    vector<int> ii,i2;
    ii.push_back(1);
    ii.push_back(2);
    i2=ii;
    for(int i=0;i<ii.size();i++){
        cout<<ii[i];
    }
    cout<<endl;
    int len=i2.size()-1;
    for(int i=0;i<len;i++){
        cout<<i2[i];
    }*/
    freopen("comment_IP.txt","r",stdin);
    string str;
    string start="0";
    while(cin>>str){
        if(str=="/*" || str=="*/"){
            start=str;
        }
        if(start=="*/" || start=="0"){
            isOperator(str);
        }
        cout<<str;
    }
    cout<<"\nOperators: \n";
    for(int i=0; i<Operator.length(); i++)
    {
        cout<<Operator[i]<<endl;
    }
    return 0;
}
