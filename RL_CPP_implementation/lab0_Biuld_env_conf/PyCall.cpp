#include <iostream>
#include <string>
#include "Python.h"
using namespace std;
int main()
{    
    cout<<"success!"<<endl;
    Py_Initialize();
    
    if(Py_IsInitialized())
    {
        cout<<"environment initialize success!!"<<endl;
    }
    PyRun_SimpleString("print('python running!')");
    
    Py_Finalize();
    return 0;
}