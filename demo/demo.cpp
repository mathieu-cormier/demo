#include "pch.h"


using namespace std;

void main(void)
{
    CLcalcul obj1;
    CLcalcul* obj2;

    int r;
    int r1;

    r = obj1.m_add(1, 2);
    r1 = obj1.m_sous(10, 10);
    cout << "Le resultat : " << r << endl;
    cout << "Le resultat : " << r1 << endl;

    obj2 = new CLcalcul();
    cout << "Le resultat : " << obj2->m_add(20, 30) << endl;

    delete obj2;

    system("PAUSE");
}

