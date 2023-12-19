#include<iostream>
#include<deque>//including deque library
using namespace std;

int main(){
    deque<int> d;//declaration of deque

    cout<<"size: "<<d.size()<<endl;
    // cout<<"capacity: "<<d.capacity()<<endl;//there is no capacity memeber in deque

    cout<<d.empty()<<endl;
    d.push_back(2);
    d.push_front(3);
    d.push_back(3);

    cout<<d.front()<<endl;
    cout<<d.back()<<endl;

    cout<<d.empty()<<endl;

    d.erase(d.begin(),d.begin()+1);
    cout<<d.front()<<endl;
    cout<<endl;

}