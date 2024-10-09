#include"matrix3D.h"
#include<bits/stdc++.h>

using namespace std;

Matrix3D::Matrix3D():count(0),_incremnet(1)
{
    memset(matrix,0,sizeof(matrix));
    determinant=calculatedet(matrix);
}
Matrix3D::Matrix3D(int m[][3]):count(0),_incremnet(1)
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            matrix[i][j]=m[i][j];
}
Matrix3D Matrix3D::getMatrix()
{
    return *this;
}
double Matrix3D::calculatedet(int arr[][3])
{
    double a=matrix[0][0]*((matrix[1][1]*matrix[2][2])-(matrix[1][2]*matrix[2][1]));
    double b=matrix[0][1]*((matrix[1][0]*matrix[2][2])-(matrix[1][2]*matrix[2][0]));
    double c=matrix[0][2]*((matrix[1][0]*matrix[2][1])-(matrix[1][1]*matrix[2][0]));
    return a-b+c;
}
double Matrix3D::det()
{
    return determinant;
}

void Matrix3D::setIncrement(int value)
{
    if(value<0){
        cout<<"Negative value"<<endl;
        _incremnet=1;
        return;
    }

    if(count==0)
        _incremnet=value;
    else cout<<"cant set increment"<<endl;
}
void Matrix3D::increment()
{
    for(int i=0;i<3;i++)
        for(int j=0;j<3;j++)
            matrix[i][j]+=_incremnet;
}

Matrix3D Matrix3D::operator+(const Matrix3D& m)
{
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            arr[i][j]=matrix[i][j]+m.matrix[i][j];
        }
    }
    return Matrix3D(arr);
}
Matrix3D Matrix3D::operator-(const Matrix3D& m)
{
    int arr[3][3];

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            arr[i][j]=matrix[i][j]-m.matrix[i][j];
        }
    }
    return Matrix3D(arr);
}
Matrix3D Matrix3D::operator*(const Matrix3D& m)
{
    int arr[3][3];
    
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            arr[i][j]=matrix[i][j]-m.matrix[i][j];
        }
    }
    return Matrix3D(arr);
}
void Matrix3D::printmat()
{
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
bool Matrix3D::operator!=(const Matrix3D& m)
{
    return (determinant!=m.determinant)?true:false;
}
bool Matrix3D::operator==(const Matrix3D& m)
{
    return (determinant==m.determinant)?true:false;
}
bool Matrix3D::operator>=(const Matrix3D& m)
{
    return (determinant>=m.determinant)?true:false;
}
bool Matrix3D::operator<=(const Matrix3D& m)
{
    return (determinant<=m.determinant)?true:false;
}
bool Matrix3D::operator>(const Matrix3D& m)
{
    return (determinant>m.determinant)?true:false;
}
bool Matrix3D::operator<(const Matrix3D& m)
{
    return (determinant<m.determinant)?true:false;
}