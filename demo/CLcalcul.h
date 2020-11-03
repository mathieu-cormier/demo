#pragma once

class CLcalcul
{
private:
    int n1;
    int n2;
    void ini_obj(int, int);
public:
    CLcalcul(void);
    CLcalcul(int, int);
    int m_add(int, int);
    int m_sous(int, int);
    int getN1(void);
    int getN2(void);
    int setN1(int);
    int setN2(int);
};