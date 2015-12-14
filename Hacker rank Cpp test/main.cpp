#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int nos,pos,fr,lr,i;
    cin>>nos;
    for(i=0; i<nos; i++)
       {
        int temp; cin>>temp;
        v.push_back(temp);
    }
    cin>>pos;
    v.erase(v.begin()+(pos-1));
    cin>>fr; cin>>lr;
    v.erase(v.begin()+(fr-1),v.begin()+(lr-1));
    cout<<v.size()<<"\n";
    for(i=0; i<(v.size()) ; i++)
        {
        cout<<v[i]<<" ";
    }
    return 0;
}
