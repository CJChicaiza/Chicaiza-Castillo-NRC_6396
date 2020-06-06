/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/

/* Se realizan 10 pruebas con diferentes datos*/
#include "pch.h"
#include "ProcCosSin.h"

#define MAX 999
#define PI 3.1415926535897
TEST(TestSin1, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI, 1), 0);
	EXPECT_TRUE(true);
}
TEST(TestCos1, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI, 1), -1);
	EXPECT_TRUE(true);
}
TEST(TestSin2, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(0, 1), 0);
	EXPECT_TRUE(true);
}
TEST(TestCos2, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(0, 1), 1);
	EXPECT_TRUE(true);
}
TEST(TestSin3, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI/2, 1), 1);
	EXPECT_TRUE(true);
}
TEST(TestCos3, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI/2, 1), 0);
	EXPECT_TRUE(true);
}
TEST(TestSin4, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI*2, 1), 0);
	EXPECT_TRUE(true);
}
TEST(TestCos4, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI*2, 1), 1);
	EXPECT_TRUE(true);
}
TEST(TestSin5, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI*3/2, 1), -1);
	EXPECT_TRUE(true);
}
TEST(TestCos5, TestPI) {
	ProcCosSin objProc;
	EXPECT_EQ(objProc.Sin(PI*3/2, 1), 0);
	EXPECT_TRUE(true);
}
