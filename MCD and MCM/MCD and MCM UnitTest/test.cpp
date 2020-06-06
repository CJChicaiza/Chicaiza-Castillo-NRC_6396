/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/

/* Se realizan 10 pruebas con diferentes datos y tamaños de vector*/
#include "pch.h"
#include "Array.h"
#include "Array.cpp"
TEST(Test1, TestMcM) {
	Array ObjArray;
	int v[3];
	v[0] = 5;
	v[1] = 10;
	v[2] = 50;	
	int ans;
	ans = ObjArray.mcm(v, 3);
  EXPECT_EQ(ans,50);
  EXPECT_TRUE(true);
}
TEST(Test2, TestMcD) {
	Array ObjArray;
	int v[3];
	v[0] = 5;
	v[1] = 10;
	v[2] = 50;
	int ans;
	ans = ObjArray.mcd(v, 3);
	EXPECT_EQ(ans, 5);
	EXPECT_TRUE(true);
}
TEST(Test3, TestMcM) {
	Array ObjArray;
	int v[3];
	v[0] = 2;
	v[1] = 10;
	v[2] = 20;
	int ans;
	ans = ObjArray.mcm(v, 3);
	EXPECT_EQ(ans, 20);
	EXPECT_TRUE(true);
}
TEST(Test4, TestMcD) {
	Array ObjArray;
	int v[3];
	v[0] = 2;
	v[1] = 10;
	v[2] = 20;
	int ans;
	ans = ObjArray.mcd(v, 3);
	EXPECT_EQ(ans, 2);
	EXPECT_TRUE(true);
}
TEST(Test5, TestMcM) {
	Array ObjArray;
	int v[2];
	v[0] = 2;
	v[1] = 3;
	int ans;
	ans = ObjArray.mcm(v, 2);
	EXPECT_EQ(ans, 6);
	EXPECT_TRUE(true);
}
TEST(Test6, TestMcD) {
	Array ObjArray;
	int v[3];
	v[0] = 2;
	v[1] = 3;
	int ans;
	ans = ObjArray.mcd(v, 2);
	EXPECT_EQ(ans, 1);
	EXPECT_TRUE(true);
}
TEST(Test7, TestMcM) {
	Array ObjArray;
	int v[2];
	v[0] = 35;
	v[1] = 7;
	int ans;
	ans = ObjArray.mcm(v, 2);
	EXPECT_EQ(ans, 35);
	EXPECT_TRUE(true);
}
TEST(Test8, TestMcD) {
	Array ObjArray;
	int v[2];
	v[0] = 35;
	v[1] = 7;
	int ans;
	ans = ObjArray.mcd(v, 2);
	EXPECT_EQ(ans, 7);
	EXPECT_TRUE(true);
}
TEST(Test9, TestMcM) {
	Array ObjArray;
	int v[1];
	v[0] = 5;
	int ans;
	ans = ObjArray.mcm(v, 1);
	EXPECT_EQ(ans, 5);
	EXPECT_TRUE(true);
}
TEST(Test10, TestMcD) {
	Array ObjArray;
	int v[1];
	v[0] = 5;
	int ans;
	ans = ObjArray.mcd(v, 1);
	EXPECT_EQ(ans, 5);
	EXPECT_TRUE(true);
}
