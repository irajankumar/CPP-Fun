#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
int lonelyinteger(vector<int> a)
{
    int res;
    if(a.size()==1)
    return a[0];
    for(int i=0; i<a.size();i++)
    {
        int flag=0;
        for(int j=0;j<a.size();j++)
        {
            if((a[i]^a[j])!=0)
            {
                flag=1;
            }

        }
        if(flag==1)
        { res=a[i];
         break;
        }

    }
return res;
}

int main() {
    int res;

    int _a_size;
    cin >> _a_size;
    vector<int> _a;
    int _a_item;
    for(int _a_i=0; _a_i<_a_size; _a_i++) {
        cin >> _a_item;
        _a.push_back(_a_item);
    }

    res = lonelyinteger(_a);
    cout << res;

    return 0;
}
