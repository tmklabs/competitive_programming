#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0; i<n; i++)
    {
        cin>>s[i];
        //cout<<s[i]<<endl;
        //cout<<s[i].length()<<endl;
    }
    for(int i=0; i<n; i++)
    {
        if(s[i].length()<=10)
        cout<<s[i]<<endl;
        else
        cout<<s[i][0]<<s[i].length()-2<<s[i][s[i].length()-1]<<endl;
    }    
}