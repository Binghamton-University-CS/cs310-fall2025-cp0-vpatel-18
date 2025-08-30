#include "Animal.h"

#include <iostream>
#include <stdlib.h>
using namespace std; 

class AnimalsInZoo{

	public: 
		AnimalsInZoo(Animal a);
	 	
		AnimalsInZoo();

		void display();

	private: 
		unsigned int numAnimals = 0; 
		Animal animal; 

};
