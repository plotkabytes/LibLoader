#ifndef LIBRARYLOADER_H
#define LIBRARYLOADER_H

#include <windows.h>
#include <iostream>

using namespace std;

typedef long double (__stdcall *f)(long double x);
typedef long double (__stdcall *df)(long double x);

class LibraryLoader
{
    public:
        LibraryLoader();
        virtual ~LibraryLoader();
        void loadDLL(string);
        void releaseDLL();
        void getProcedureAddresses();
    protected:
    private:
        HINSTANCE dll;
};

#endif // LIBRARYLOADER_H
