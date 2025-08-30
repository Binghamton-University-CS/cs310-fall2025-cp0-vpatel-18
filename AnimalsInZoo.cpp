#include "AnimalsInZoo.h"


AnimalsInZoo::AnimalsInZoo(Animal a){
	numAnimals = 1; 
	animal = a; 
}

AnimalsInZoo::AnimalsInZoo() : numAnimals(0) {}; 

void AnimalsInZoo::display(){

	if(numAnimals == 1){
		cout << numAnimals << " ";
		animal.display();
	}
	else{
		cout << numAnimals << endl;
	}

}

