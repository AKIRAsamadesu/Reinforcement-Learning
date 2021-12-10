/* std lib definition */
#include <iostream>
using namespace std;

/* user lib definition */
#include "Demo.h"
/* user variable definition */

/* user constant definition */

int main()
{
    system("clear");
    cout<<"clear complete!"<<endl;
    cout<<"Program start!\n"<<"Your eigen version is: "
    << EIGEN_WORLD_VERSION <<"." 
    << EIGEN_MAJOR_VERSION <<"."
    << EIGEN_MINOR_VERSION <<"."
    <<endl;
    //Getting Start//
    // cout<<"++++++++++ Getting Start ++++++++++"<<endl;
    // MatrixXd m(2,2);
    // m(0,0) = 3;
    // m(1,0) = 2.5;
    // m(0,1) = -1;
    // m(1,1) = m(1,0) + m(0,1);
    // cout <<"m = \n"<< m <<endl;
    //++++++++ Code 1 ++++++++//
    // Demo1();
    //++++++++ Code 2 ++++++++//
    // Demo2();
    //++++++++ Code 3 ++++++++//
    // Demo3();
    //++++++++ Code 4 ++++++++//
    // Demo4();
    //++++++++ Code 5 ++++++++//
    // Demo5();
    //++++++++ Code 6 ++++++++//
    // Demo6();
    // ++++++++ Code 7 ++++++++//
    // Demo7();
    // ++++++++ Code 8 ++++++++//
    Demo8();
    cout<<"Program end!"<<endl;
    return 0;
}