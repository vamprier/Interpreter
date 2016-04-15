#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "PlayContext.h"

class Expression
{
public:
	Expression(void);
	virtual ~Expression(void);
public:
	void Interpret(PlayContext* context);
	virtual void Excute(string key,float value) = 0;
};

#endif