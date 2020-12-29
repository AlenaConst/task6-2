#include <iostream>
#include <set>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int n,i,j;
    set <int> S;
    vector <string> answ;
    cin>>n;
    for(i=0; i<n; i++)
    {
        cin>>j;
        if(S.find(j)==S.end())
        {
            answ.push_back("NO");
            S.insert(j);
        }
        else
        {
            answ.push_back("YES");
        }
    }
    for(i=0; i<n; i++)cout<<answ[i]<<endl;
    return 0;
}
