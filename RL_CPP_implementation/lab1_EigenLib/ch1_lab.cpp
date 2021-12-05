/* std lib definition */
#include <iostream>
#include <eigen3/Eigen/Dense>
 
using Eigen::MatrixXd;
using namespace std;

/* user lib definition */

/* user variable definition */

/* user constant definition */

int main()
{
    cout<<"Program start!"<<endl;
    MatrixXd m(2,2);
    m(0,0) = 3;
    m(1,0) = 2.5;
    m(0,1) = -1;
    m(1,1) = m(1,0) + m(0,1);
    std::cout <<"m= \n"<< m << std::endl;
    cout<<"Program end!"<<endl;
    return 0;
}