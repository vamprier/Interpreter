#include "Expression.h"


Expression::Expression(void)
{
}


Expression::~Expression(void)
{
}

void Expression::Interpret(PlayContext* context)
{
	if(context->GetText().length() == 0)
	{
		return;
	}
	else
	{
		string playkey = context->GetText().substr(0,1);
		string text = context->GetText().substr(2,1);
		float playvalue = atof(text.data());
		Excute(playkey,playvalue);
	}
}
