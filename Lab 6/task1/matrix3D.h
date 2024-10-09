#ifndef MAT
#define MAT

class Matrix3D
{
    int matrix[3][3];
    int _incremnet;
    int count;
    int determinant;
    public:
    Matrix3D();
    Matrix3D(int mat[][3]);
    double calculatedet(int arr[][3]);
    double det();
    void printmat();
    Matrix3D inverse();
    void setIncrement(int);
    Matrix3D getMatrix();
    void increment();
    Matrix3D operator+(const Matrix3D&);
    Matrix3D operator-(const Matrix3D&);
    Matrix3D operator*(const Matrix3D&);
    bool operator>(const Matrix3D&);
    bool operator<(const Matrix3D&);
    bool operator>=(const Matrix3D&);
    bool operator<=(const Matrix3D&);
    bool operator==(const Matrix3D&);
    bool operator!=(const Matrix3D&);
    
    //~Matrix3D();

};

#endif //MAT