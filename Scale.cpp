#include "Scale.h"


Scale::Scale(void)
{
}


Scale::~Scale(void)
{
}

void Scale::Excute(string key,float value)
{
	string scale;
	int n = static_cast<int>(value);
	if ( n == 1)
	{
		scale = "����";
	}
	else if(n == 2)
	{
		scale = "����";
	}
	else if(n == 3)
	{
		scale = "����";
	}
	cout<<scale<<" "<<endl;
}