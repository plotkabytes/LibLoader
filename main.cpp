#include <iostream>
#include "LibraryLoader.h"

using namespace std;

int main()
{
    LibraryLoader libLoad;
    libLoad.loadDLL("C:\\Users\\Mati\\Desktop\\NewtonDLL\\NewtonDLL\\bin\\Debug\\NewtonDLL.dll");
    libLoad.getProcedureAddresses();
    libLoad.releaseDLL();
    cout << "The end" << endl;
    return 0;
}
