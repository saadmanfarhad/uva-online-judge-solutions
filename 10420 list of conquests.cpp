#include <iostream>
#include <iomanip>
#include <map>
#include <cstdio>
using namespace std;

int main()
{
    map<string,int>m;
    map<string,int>::iterator i;
    string country,name;
    int n,j;
    cin>>n;
    for(j=0;j<n;j++){
        cin>>country;
        getline(cin,name);
        m[country]++;
    }
    for(i=m.begin();i!=m.end();i++){
        cout<<i->first << " "<<i->second << endl;
    }
    return 0 ;
}
