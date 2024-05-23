/*! \file Shapes.h
	\brief Dichiarazione funzioni per generare e gestire le forme
	@author Elisa Castellari / Francesco Casazza

	abbiamo usato vector e le sue funzioni
*/

#include<iostream>
#include <cstring>
#include <vector>

#include "CQuadrilateral.h"
#include "CRectangle.h"
#include "CRhombus.h"

#define SHAPESNUMBER 50

using namespace std;

#ifndef SHAPES_H
#define SHAPES_H

/// @name VISUALIZZATORE
/// @{
	void ShowShapes(Quadrilateral* Shapes[SHAPESNUMBER], int lenght);
/// @}

/// @name AGGIUNGI-SHAPE
/// @{
	void AddShapes(vector<Quadrilateral> Shapes);
/// @}

/// @name RIMUOVI-SHAPE
/// @{
	void RemoveOneShape(Quadrilateral* ShapeToRemove);
	void RemoveAllShapes(vector<Quadrilateral> Shapes);	
	/// @}

#endif; //SHAPES_H