#include<iostream>
#include<vector>//including vector library
using namespace std;

int main(){
    vector<int> v;//declaration of vector. It is a dynamic array size is not fixed
    
    cout<<"Size: "<<v.size()<<endl;//for checking size of our v
    cout<<"Capacity: "<<v.capacity()<<endl;//At the begining capacity of vector is 0, we can check by using stl function 'capacity()'
    
    v.push_back(1);//Adding element at back of vector
    cout<<"Size: "<<v.size()<<endl;//
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(2);//Adding element at back of vector
    cout<<"Size: "<<v.size()<<endl;//
    cout<<"Capacity: "<<v.capacity()<<endl;

    v.push_back(3);//Adding element at back of vector
    cout<<"Size: "<<v.size()<<endl;//
    cout<<"Capacity: "<<v.capacity()<<endl;//If space is empty then after adding element capacity will be double

    v.at(1);//Adding element at back of vector
    cout<<"Size: "<<v.size()<<endl;//
    cout<<"Capacity: "<<v.capacity()<<endl;
    
    vector<int> a(5,1);//vector declared of size 5 and all value contain 1
    vector<int> l(a);//copy vector from 'a'
    for(int i:l){
        cout<<l[i]<<" ";
    }
    cout<<endl;

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;
    v.pop_back();//It will delete one element from end;
    cout<<v.back()<<endl;
    return 0;
}