#include<iostream>
using namespace std;
typedef unsigned int UNIT;

// 1111  1111 1111 1111 1111 1111 1011 1111
//   F   F    F    F    F    F    B     F

UNIT offbit(UNIT ino)
{
    UNIT imask = 0xFFFFFFBF;
    UNIT iresult = 0;

    iresult = ino & imask;

    return iresult; 
}

int main()
{
    UNIT ivalue = 0;
    UNIT bret = 0;

    cout << "enter number: "<<"\n";
    cin>>ivalue;

    bret = offbit(ivalue);

    cout<<"result is: "<<bret<<"\n";
    return 0;
}