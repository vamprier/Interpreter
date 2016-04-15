#ifndef PLAYCONTEXT_H
#define PLAYCONTEXT_H

#include <string>
#include <string.h>
#include <iostream>

using namespace std;

class PlayContext
{
public:
	PlayContext(void);
	~PlayContext(void);
public:
	void SetText(string t);
	string GetText();
private:
	string text;
};

#endif