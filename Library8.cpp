/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Description :      Used to perform addition of 2 numbers
//  Input :              Integer, Integer
//  Output :            Integer
//  Date :               14/08/2022
//  Author :            Akash Pramod Bagul
//
/////////////////////////////////////////////////////////////////////

int Addition(int iValue1, int iValue2)
{
    int iAns = 0;

    if (iValue1 < 0)
    {
        iValue1 = -iValue1;
    }

    if (iValue2 < 0)
    {
        iValue2 = -iValue2;
    }

    iAns = iValue1 + iValue2;
    return iAns;
}
