#include "./lib/env.h"
#include "C:/Python27/include/Python.h"
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    if (check(argc, argv[1]))
    {
        cout << "argc=" << argc << endl;
        cout << "addr_argv=" << argv << endl;
        for (int i = 0; i <= argc; i++)
        {
            cout << "argv[" << i << "]"
                 << "=" << argv[i] << endl;
        }
    }
    /* 调用python脚本 */
    Py_Initialize();
    Py_Finalize();
}
