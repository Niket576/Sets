#include<iostream>
#include<set>
#include<map>
using namespace std;

//Note: insertion,searching,and deletion will occure in T.C=O(n)
int main() {
    set<int> s;     //declaration of ordered set
    s.insert(1);
    s.insert(2);
    s.insert(18);
    s.insert(3);
    s.insert(4);
    for(int ele : s) {
        cout<<ele<<" ";
    }

    return 0;
}