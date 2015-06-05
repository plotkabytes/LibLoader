#include "LibraryLoader.h"

LibraryLoader::LibraryLoader()
{
    //ctor
}

LibraryLoader::~LibraryLoader()
{
    //dtor
}

void LibraryLoader::loadDLL(string path)
{
    dll = LoadLibrary(path.c_str());

    if (!dll)
    {
        cout << "DLL not loaded" << endl;
    }
    else
    {
        cout << "DLL loaded" << endl;
    }
}

void LibraryLoader::releaseDLL()
{
    FreeLibrary(dll);
    cout << "Released DLL" << endl;
}

void LibraryLoader::getProcedureAddresses()
{
    f funkcjaF = (f) GetProcAddress(dll,"f");
    df funkcjaDF = (df) GetProcAddress(dll,"df");

    if(!funkcjaDF) cout << "Could not locate function" << endl;
        else cout << "Function found" << endl;
    if(!funkcjaF) cout << "Could not locate function" << endl;
        else cout << "Function found" << endl;
}


