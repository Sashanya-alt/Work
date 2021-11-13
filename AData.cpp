#include "pch.h"
#include "AData.h"

struct _AData2 AData2;

void InitAData2()
{
    AData2.Name[0] = "Column";
    AData2.Name[1] = "Column";
    AData2.Name[2] = "Column";
    AData2.Visible[0] = true;
    AData2.Visible[1] = true;
    AData2.Visible[2] = true;
    AData2.sub[0] = 1;
    AData2.sub[1] = 2;
    AData2.sub[2] = 3;
}