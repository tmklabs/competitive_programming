// problem
/*
#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n==2 || n%2==1 || n==0)
        cout << "NO\n";
    else
        cout << "YES\n"; 
}
*/

#include <iostream>
using namespace std;
int main()
{
    int w;
    cin>>w;
    if(w>0 && w<=100 && w%2==0 && w!=2)
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;

}
