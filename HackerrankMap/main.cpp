#include <vector>
#include <iostream>
#include <map>
using namespace std;
int main() {
    map<string,int>s;
    int q;
    vector<string>qs;
    cin>>q;
    while(q--)
        {
        int type;
        cin>>type;
         switch(type)
            {
             case 1:
             { string name; int y;
             cin>>name; cin>>y;
             s.insert(make_pair(name,y));
              break; }
             case 2:
             {
                 string name;
                 cin>>name;
                 s[name]=0;
                 break;
             }
             case 3:
             {
                 string name;
                 cin>>name;
                 qs.push_back(name);
             }

         }
    }
    for(int i=0; i<qs.size(); i++)
        { int z=(s[qs[i]]);
        cout<<z<<"\n";
    }
    return 0;
}
