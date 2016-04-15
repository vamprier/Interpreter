#ifndef NOTE_H
#define NOTE_H


#include "expression.h"

class Note : public Expression
{
public:
	Note(void);
	~Note(void);
public:
	virtual void Excute(string key,float value);
};

#endif