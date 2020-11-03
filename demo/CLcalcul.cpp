#include "pch.h"
#include "CLcalcul.h"

CLcalcul::CLcalcul(void)
{
	this->ini_obj(0, 0);
}
CLcalcul::CLcalcul(int n1, int n2)
{
	this->ini_obj(n1, n2);
}
void CLcalcul::ini_obj(int n1, int n2)
{
	this->setN1(n1); this->setN2(n2);
}

int CLcalcul::m_add(int n1, int n2)
{
	return n1 + n2;
}

int CLcalcul::m_sous(int n1, int n2)
{
	return n1 - n2;
}

void CLcalcul::setN1(int n1)
{
	if (n1 > 0)
	{
		this->n1 = n1;
	}
	else
	{
		this->n1 = 0;
	}
}

void CLcalcul::setN2(int n2)
{
	if (n2 > 0)
	{
		this->n2 = n2;
	}
	else
	{
		this->n2 = 0;
	}
}

int CLcalcul::getN1(void) { return this->n1;}
int CLcalcul::getN2(void) { return this->n2;}