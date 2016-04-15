#ifndef SCALE_H
#define SCALE_H


#include "expression.h"

class Scale : public Expression
{
public:
	Scale(void);
	~Scale(void);
public:
	virtual void Excute(string key,float value);
};

#endif