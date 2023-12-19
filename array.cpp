#include<iostream>
#include<array>//including array for stl use
using namespace std;

int main(){
    // int arr[5]={1,2,3,4,5};//normal declaration of static array;

    array<int, 5> a={1,2,3,4,5};//static array declaration using stl

    int size = a.size(); //we can find array size using stl function 'size()'

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<a.empty()<<endl;//this will give result is our array empty or not
    cout<<a.front()<<endl;//this will give first element of our array
    cout<<a.back()<<endl; //this will give last element of our array
    cout<<a.at(2)<<endl; //this will give element of spacific position
    swap(a[0],a[4]); //this will swap the element of array
    cout<<a.front()<<endl;
    cout<<a.back()<<endl;
    
}