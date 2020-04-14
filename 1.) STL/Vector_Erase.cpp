/*
    https://www.hackerrank.com/challenges/vector-erase/problem
*/
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {  
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0;i<n;i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }

    int x;
    cin >> x;
    v.erase(begin(v) + (x-1));

    int a,b;
    cin >> a >> b;
    v.erase(begin(v)+a-1 , begin(v)+b-1);

    cout << v.size() << endl;
    for(int c = 0;c < v.size(); c++)
    {
        cout << v[c] << " ";
    }

}
