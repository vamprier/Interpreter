#include "Note.h"


Note::Note(void)
{
}


Note::~Note(void)
{
}

void Note::Excute(string key,float value)
{
	string note;
	if ( key == "C")
	{
		note = "1";
	}
	else if(key == "D")
	{
		note = "2";
	}
	else if(key == "E")
	{
		note = "3";
	}
	else if(key == "F")
	{
		note = "4";
	}
	else if(key == "G")
	{
		note = "5";
	}
	else if(key == "A")
	{
		note = "6";
	}
	else if(key == "B")
	{
		note = "7";
	}
	cout<<note<<" "<<endl;
}