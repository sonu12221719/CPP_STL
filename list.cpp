#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    cout<<"size: "<<l.size()<<endl;
    l.push_back(2);
    l.push_front(1);
    cout<<"size: "<<l.size()<<endl;
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    l.pop_back();
    l.pop_front();
    l.push_back(3);
    l.push_back(4);
    l.push_front(2);
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<l.front()<<endl;

    // // l.erase(l.end()); 
    // cout<<l.back()<<endl;
    // for(int i:l){
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    return 0;
}