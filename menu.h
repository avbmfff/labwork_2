#ifndef MENU_H
#define MENU_H
#include "sq_pol.h"
using namespace std;

class menu
{
    public:
        menu();
        ~menu();
        void menupr();
        void start();

    private:
        sq_pol a;
        sq_pol b;
        sq_pol c;
};

#endif // MENU_H
