/***********************************************************************
 * Module:  ProcCosSin.h
 * Author:  Chicaiza Jaya Cristopher Jennsy
 * Modified: Saturday, June 6, 2020 10:00:38 AM
 * Purpose: Declaration of the class ProcCosSin
 ***********************************************************************/

#if !defined(__Sen_and_Cos_ProcCosSin_h)
#define __Sen_and_Cos_ProcCosSin_h

class ProcCosSin
{
public:
   ProcCosSin();
   ~ProcCosSin();
   float Sin(float x, int n);
   float Cosin(float x, int n);
	float calcTang(float x, int n);

protected:
private:

};

#endif
