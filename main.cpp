// Interpreter.cpp : 定义控制台应用程序的入口点。
//

#include "Note.h"
#include "Scale.h"
#include <sstream>

int main(int argc, char* argv[])
{
	PlayContext* context = new PlayContext();
	cout<<"上海滩演奏："<<endl;
	context->SetText("O 2 E 0.5 G 0.5 A 3 E 0.5 G 0.5 D 3 E 0.5 G 0.5 A 0.5 O 3 C 1 O 2 A 0.5 G 1 C 0.5 E 0.5 D 3");
	Expression* expression;
	int n = 1;
	while( context->GetText().length() > 0)
	{
		stringstream is(context->GetText());
		string ss;
		string str;
		int num = 1;
		while ( is>>ss)
		{
			if(num >=3)break;
			str+=" "+ss;
			++num;
		}		
		string::size_type pos = str.find("O");
		if (pos != string::npos)
		{
			expression = new Scale();
		}
		else
		{
			expression = new Note();
		}
		expression->Interpret(context);
//		string::size_type tpos = context->GetText().find_first_of(str);
		string text;
		int lenth = context->GetText().length()-str.length();
		if( lenth>= 0)
		{
			text = context->GetText().substr(str.length(),lenth);
		}
		else
		{
			text = "";
		}
		context->SetText(text);
	}
	cin.ignore();
	return 0;
}

