/// \file Shapes.cpp
///	\brief Functions to manage shapes: implementation of the functions
/// @author Elisa Castellari / Francesco Casazza
/// 
///	Details;
///

#include "Shapes.h"
#include <vector>
using namespace std;

/// @brief funzione per vedere tutte le forme create
/// @param vector<Quadrilateral*> Shapes per stampare le forme
void ShowShapes(vector<Quadrilateral*> Shapes) {

	cout << "_________________________CON_VECTOR_________________________" << endl;
	cout << "Ecco tutte le tue forme\n" << endl;
	if (Shapes.size() != 0) {
		for (auto i : Shapes) {
		//	cout << "\nForma: " << ;
			i->Drawing();
			//std::cout << i->GetFontSize() << ' '; // will print the various sizes
		}
	}
	else {
		cout << "Non hai nessuna forma" << endl;
	}
	cout << "__________________________________________________________\n" << endl;

}

/// @brief funzione per rimuovere tutte le forme
/// @param vector<Quadrilateral*> Shapes[SHAPESNUMBER] per indicare quale lista cancellare
void RemoveAllShapes(vector<Quadrilateral*> Shapes[SHAPESNUMBER]) {
	cout << "__________________________________________________________" << endl;
	cout << "Cancellazione in corso...." << endl;
	//auto i   Shapes;
	Shapes->clear();
	//Shapes.~Quadrilateral();
	//Shapes->erase(std::next(Shapes->begin()));
	cout << "Cancellazione eseguita con successo" << endl;
	cout << "__________________________________________________________\n" << endl;
	return;

}

/// @brief funzione per rimuovere una sola shape
/// @param vector<Quadrilateral*> ShapeToRemove[SHAPESNUMBER] per indicare dove cancellare
/// @param int ShapeToRemoveNumber � il numero della shape da eliminare
void RemoveOneShape(vector<Quadrilateral*> ShapeToRemove[SHAPESNUMBER], int ShapeToRemoveNumber) {
	try {
		cout << "\n\n" << ShapeToRemove->size() << endl;

		if (ShapeToRemoveNumber < SHAPESNUMBER && ShapeToRemoveNumber < ShapeToRemove->size() && ShapeToRemove->size() != 0) {
			ShapeToRemove->erase((ShapeToRemove->begin() + ShapeToRemoveNumber)); // controllo per verificare che la shape da rimuovere effettivamente esista
			//ShapeToRemove->~Quadrilateral();
		}
		else {
			//cout << endl << "questa shape non esiste riprova con una shape valida" << endl;
			throw(1);
		}
	}
		catch (...) {
			cout << endl << "----------------------------ERRORE------------------------------\n";
			cout << endl << "questa shape non esiste riprova con una shape valida" << endl;
		}
	}

/// @brief funzione per aggiungere forme
void AddShapes(vector<Quadrilateral*> Shapes[SHAPESNUMBER], Quadrilateral* NewShape) {

	if (Shapes->size() < SHAPESNUMBER) {
		Shapes->push_back(NewShape);
		cout << endl << "forma aggiunta con successo!" << endl;
	}
	else {
		cout << endl << "Limite forme raggiunto! cancella qualcosa per fare una nuova forma" << endl;
	}
}
