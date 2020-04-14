/*
    https://www.hackerrank.com/challenges/cpp-sets/problem
*/
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    int q;
    cin >> q;
    set<int> s;
    while(q--)
    {
        int y;
        cin >> y;
        if(y==1)
        {
            int x;
            cin >> x;
            s.insert(x);
        }
        else if(y==2)
        {
            int x;
            cin >> x;
            s.erase(x);
        }
        else if(y==3)
        {
            int x;
            cin >> x;
            set<int>::iterator it = s.find(x);
            if(it == s.end())
            {
                cout <<"No"<<endl;
            }
            else
            {
                cout << "Yes" <<endl;
            }
        }
        else
        {
            continue;
        }
    }
}



