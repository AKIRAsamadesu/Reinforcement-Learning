#include "..\lib\env.h"
#include <iostream>
using namespace std;

bool check(int argc, char *argv1)
{
    cout<<(argv1 != "-v")<<endl;
    cout<<argc<<endl;
    if (argc != 3 && argv1 != "-v")
    {
        cout << argv1 << endl;
        cout << "input format error!!" << endl;
        return 0;
    }
    return 1;
}