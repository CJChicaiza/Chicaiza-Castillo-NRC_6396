/******************************************************************
*            UNIVERSIDAD DE LAS FUERZAS ARMADAS ESPE              *
* CARRERA: Ingenieria de Software                                 *
* SEMESTRE: Tercer semestre                                       *
* MATERIA: Estructura de Datos                                    *
* NRC: 6396                                                       *
* AUTOR: Chicaiza Jaya Cristopher Jennsy                          *
* VERSION DEL PROGRAMA: 1.0                                       *
******************************************************************/

/* Se realizan pruebas con diferentes datos y tamaños de vector*/
#include "pch.h"
#include "Matrix.h"

TEST(TestCaseName, TestName) {
	Matrix objMatrix;
	int M1[2][], Mr[2][], Me[2];
	M1[0][0] = 2;
	M1[0][1] = 3;
	M1[1][0] = 4;
	M1[1][1] = 5;
	Mr[0][0] = 16;
	Mr[0][1] = 21;
	Mr[1][0] = 28;
	Mr[1][1] = 37;
	objMatrix.process(M1, Mr, 2, 2);
	EXPECT_EQ(M1, Mr);
	EXPECT_TRUE(true);
}
