
#include<iostream>
using namespace std;

template <class T>
void swap(T *no1,T *no2)
{
    T temp;
    temp = *no1;
    *no1 = *no2;
    *no2 = temp;
}

int main()
{
    int a = 10,b = 11;
    cout<<"data before swapping: "<<"\n";
    cout<<"value of a : "<<a<<"\n";
    cout<<"value of b : "<<b<<"\n";
    swap(&a,&b);
    cout<<"data after swapping: "<<"\n";
    cout<<"value of a : "<<a<<"\n";
    cout<<"value of b : "<<b<<"\n";
       
    double x = 10.39,y = 11.67;
    swap(&x,&y);
    cout<<"data after swapping: "<<"\n";
    cout<<"value of x : "<<x<<"\n";
    cout<<"value of y : "<<y<<"\n";
    return 0;
}