#include "PlayContext.h"


PlayContext::PlayContext(void)
{
}


PlayContext::~PlayContext(void)
{
}

void PlayContext::SetText(string t)
{
	text = t;
}

string PlayContext::GetText()
{
	return text;
}