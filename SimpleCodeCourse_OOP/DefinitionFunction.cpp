#include "DefinitionFunction.h"
#include "stdafx.h"

//Video: 104. Definition a function out of class

class DefinitionFunction
{
public:
	void PrintMessage(); //Definition function
private:

};

void DefinitionFunction::PrintMessage()
{
	cout << "Hi, I am definition a function" << endl;
}

void LaunchDefinitionFunction()
{
	DefinitionFunction definitionFunction;
	definitionFunction.PrintMessage();
}