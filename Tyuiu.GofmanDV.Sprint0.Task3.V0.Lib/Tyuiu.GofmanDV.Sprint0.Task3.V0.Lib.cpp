// Tyuiu.GofmanDV.Sprint0.Task2.V0.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "../../Tyuiu.Cours.cpp/Tyuiu.Cours.cpp.cpp"

// TODO: This is an example of a library function
class Service1 :public ISprint0Task3
{

	// Inherited via ISprint0Task3V0
	virtual int SummV3(int a, int b, int c) = 0;
	{
		return a + b + c; //�������
	}
};