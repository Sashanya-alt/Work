#pragma once
#include <vector>
#include <iostream>
#include <cstring>
using namespace std;

class AData
{
};

struct _AData2
{
	bool Visible[3];// = TRUE;
	string Name[3];// = "column";
	int sub[3];// = { 1, 2, 3 };

};

//struct _AData2
//{
//	vector <bool> Visible;// = TRUE;
//	vector <string> Name;// = "column";
//	vector <int> sub;// = { 1, 2, 3 };
//
//};

extern struct _AData2 AData2;
void InitAData2();