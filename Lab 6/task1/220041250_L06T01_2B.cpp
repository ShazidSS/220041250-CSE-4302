#include"matrix3D.h"
#include<bits/stdc++.h>

using namespace std;
int main()
{
    int arr1[3][3]={
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    int arr2[3][3]={
        {10,20,30},
        {40,50,60},
        {70,80,90}
    };
    Matrix3D m(arr1);
    m.setIncrement(5);
    Matrix3D mm(arr2);
    Matrix3D mmm=m+mm;
    mmm.printmat();
    m.increment();
    if(m==mm)
        cout<<"true"<<endl;
    else cout<<"false"<<endl;
    cout<<m.det()<<endl;

}