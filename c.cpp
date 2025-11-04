#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<int>c={5,2,5,7,2,9,7,10};
    unordered_set<int>s;
    for(int x:c) if(!s.count(x)) cout<<x<<" ", s.insert(x);
}

