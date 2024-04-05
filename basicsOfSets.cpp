#include<iostream>
#include<unordered_set>
using namespace std;

int main() {
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.erase(2);
    int target = 40;
    //s.find(): it searches in the set and if targert is not found then it returns the last element
    //if target is found then doesn't return last element
    if(s.find(target) != s.end()) { //target exists
        cout<<"exists"<<endl;
    }
    else cout<<"Target doesn't exist."<<endl;
    s.insert(1);    //it will store unique element only
    cout<<s.size()<<endl;   // 5 despite 1 is insert
    for(int ele : s) {
        cout<<ele<<" ";
    }
    
    return 0;
}