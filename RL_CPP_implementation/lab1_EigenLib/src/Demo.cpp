#include "../lib/Demo.h"

void Demo1()
{
     cout << "++++++++++ Demo1 ++++++++++" << endl;
     MatrixXd mat1;
     // mat1=MatrixXd::Random(3,3);
     mat1 = MatrixXd::Constant(3, 3, 41);
     cout << mat1 << endl;
     Matrix<double, 2, 1> mat2(1.011, 2);
     cout << mat2 << endl;
     Matrix2i mat3;
     mat3 = MatrixXi::Constant(2, 2, 4.5);
     cout << mat3 << endl;
     MatrixXi mat4(2, 2);
     mat4(0, 0) = 12;
     mat4(0, 1) = 13;
     mat4(1, 0) = 13;
     mat4(1, 1) = 13;
     cout << mat4 << endl;
     VectorXi mat5(3);
     mat5(0) = 1;
     mat5(1) = 1;
     mat5(2) = 1;
     cout << mat5 << endl;
     Matrix3f mat6;
     mat6 << 1, 2, 3, 4, 5, 6, 7, 8, 9;
     cout << mat6 << endl;
     // mat6.resize(1,9);//error
     std::cout << "The matrix m is of size " << mat6.rows() << "x" << mat6.cols() << std::endl;

     Matrix2Xi mat7;
     cout << "size of mat7 is:" << mat7.size() << endl;
     //mat7.resize(4, 3);//row of mat7 is already defined should be 2
     mat7.resize(2, 3);
     cout << "size of mat7.resize(2,3) is:" << mat7.size() << endl;
     mat7 << 1, 2, 3, 4, 5, 6;
     cout << "mat7= \n"
          << mat7 << endl;
}

void Demo2()
{
     cout << "++++++++++ Demo2 ++++++++++" << endl;
     Matrix2f mat1, mat2;
     mat1 = MatrixXf::Constant(2, 2, 2);
     mat2 = MatrixXf::Constant(2, 2, 4);
     Vector2f v1(1, 2);
     cout << "mat1 = \n"
          << mat1 << endl;
     cout << "mat2 = \n"
          << mat2 << endl;
     cout << "v1 = \n"
          << v1 << endl;
     Matrix2f mat3 = mat1 + mat2;
     cout << "mat+ = \n"
          << mat3 << endl;
     Matrix2f mat4 = mat1 * mat2; //matrix mult
     cout << "mat* = \n"
          << mat4 << endl;
     Matrix2f mat5 = 3 * mat1; //num*mat
     cout << "mat num*mat = \n"
          << mat5 << endl;
     MatrixXf mat6 = mat1 * v1;
     cout << "mat mat*vector = \n"
          << mat6 << endl;
     MatrixXf mat7 = v1.transpose() * mat1;
     cout << "mat vector*mat = \n"
          << mat7 << endl;

     Matrix2Xcf mat8 = MatrixXcf::Random(2, 2); //for real matrix conjugate op does nothing
     cout << "mat8 = \n"
          << mat8 << endl;
     cout << "mat8 conjugation = \n"
          << mat8.conjugate() << endl;
     cout << "mat8 adjoint = \n"
          << mat8.adjoint() << endl;

     Matrix<double, 2, 3> mat9;
     Matrix<double, 3, 2> mat10;
     mat9 << 1, 2, 3, 4, 5, 6;
     mat10 << 2, 3, 4, 5, 6, 7;
     cout << "mat9 = \n"
          << mat9 << endl;
     cout << "mat10 = \n"
          << mat10 << endl;
     cout << "dot mult = \n"
          << mat9 * mat10 << endl;

     cout << "mat9.sum():       " << mat9.sum() << endl;
     cout << "mat9.prod():      " << mat9.prod() << endl;
     cout << "mat9.mean():      " << mat9.mean() << endl;
     ptrdiff_t i, j;
     cout << "mat9.minCoeff():  " << mat9.minCoeff(&i, &j) << endl;
     cout << "Its minimum coefficient (" << mat9.minCoeff() << ") is at position (" << i << "," << j << ")\n";
     cout << "mat9.maxCoeff():  " << mat9.maxCoeff(&i, &j) << endl;
     cout << "Its maximum coefficient (" << mat9.maxCoeff() << ") is at position (" << i << "," << j << ")\n";
     cout << "mat9.trace():     " << mat9.trace() << endl;

     Matrix<double, 3, 1> v2, v3;
     v2 << 1, 2, 3;
     v3 << 5, 6, 7;
     cout << "vector2 :\n"
          << v2 << endl;
     cout << "vector3 :\n"
          << v3 << endl;
     cout << "cross product = \n"
          << v2.cross(v3) << endl;
     cout << "dot product = \n"
          << v2.dot(v3) << endl;
     //Remember that cross product is only for vectors of size 3.
     //Dot product is for vectors of any sizes.
     //When using complex numbers, Eigen's dot product is conjugate-linear in the first variable and linear in the second variable.
}

void Demo3()
{
     cout << "++++++++++ Demo3 ++++++++++" << endl;
     Array<int64_t, Dynamic, Dynamic> arr1;
     // arr1(0, 0) = 1;
     // arr1(0, 1) = 2;
     // arr1(0, 2) = 3;
     // arr1(0, 3) = 4;
     // cout << arr1 << endl;
     // arr1 << 2, 6, 7, 8;
     // cout << arr1 << endl;
     // these two ways of assignment are invalid
     arr1.resize(3, 4); //define size at runtime
     arr1 << 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12;
     cout << "arr1 is: \n"
          << arr1 << endl;

     // other op only included in array
     arr1 *= 3;
     cout << "arr1*= \n"
          << arr1 << endl;
     arr1(1, 2) = -123;
     cout << "arr1.abs()= \n"
          << arr1.abs() << endl;
     cout.setf(ios::right);
     cout << "arr1.abs().sqrt()= \n"
          << arr1.abs().sqrt() << endl;
     cout << "arr1.min(arr1.abs().sqrt())= \n"
          << arr1.min(arr1.abs().sqrt()) << endl;
     cout << "arr1.tanh()= \n"
          << arr1.tanh() << endl;
     // You cannot apply Matrix operations on arrays, or Array operations on matrices.
     // Thus, if you need to do linear algebraic operations such as matrix multiplication, then you should use matrices;
     // if you need to do coefficient-wise operations, then you should use arrays.

     MatrixXi mat1;
     ArrayXXi arr2;
     mat1.resizeLike(arr1.matrix());
     arr2.resizeLike(mat1);
     mat1 << 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2, 2;
     cout << "mat1=\n"
          << mat1 << endl;
     arr2 = mat1.array().sqrt();
     cout << "arr2 size=" << arr2.size() << endl;
}

void Demo4()
{
     cout << "++++++++++ Demo4 ++++++++++" << endl;
     Matrix3f mat1;
     mat1<<1,2,3,4,5,6,7,8,9;

     Matrix2f mat2=mat1.block(1,1,2,2);
     cout<<"mat1=\n"<<mat1<<endl;
     cout<<"mat2=\n"<<mat2<<endl;

     mat1.block<2,2>(0,0)=mat2;
     cout<<"mat1=\n"<<mat1<<endl;

     cout<<mat1.row(2)<<endl;
     cout<<mat1.col(2)<<endl;
     
     VectorXf v1(10);
     v1<<1,2,2,3,4,5,6,7,87,8;
     cout<<v1.head(2)<<endl;//these funcs are only for vector
     cout<<v1.tail(3)<<endl;
     cout<<"6 elements start from 3th, segment:"<<v1.segment(3,6)<<endl;

}

void Demo5()
{
     cout << "++++++++++ Demo5 ++++++++++" << endl;
     MatrixXf mat1(2,2);
     mat1<<1,2,3,4;
     cout<<mat1<<endl;
     ArrayXXf mat2=ArrayXXf::Zero(4,5);
     ArrayXXi mat3=ArrayXXi::Random(4,5);
     ArrayXXi mat4=ArrayXXi::Constant(4,3,1);
     cout<<mat2<<endl;
     cout<<mat3<<endl;
     cout<<mat4<<endl;

     ArrayXXf mat5;
     mat5.resize(3,2);
     mat5.col(0).head(2)<<123,1;
     mat5.col(1).head(3)<<3,4,5;
     mat5.row(2).head(2)<<22,2;
     mat5.row(2).tail(1)<<8;
     cout<<mat5<<endl;    
      
     MatrixXf mat6=MatrixXf::Constant(3,4,3);
     mat6=((MatrixXf(3,3)<<1,2,3,4,5,6,7,8,9).finished())*mat6;
     cout<<"mat6 = \n"<<mat6<<endl;
}
