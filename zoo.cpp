
#include "AnimalsInZoo.h"


#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
   Animal *animal1 = new Animal("African Elephant", 1758);
   Animal animal2("Giant Panda", 1869);
   Animal animal3("Brown Tailed Swallow", 1548);

   delete animal1;
   animal1 = new Animal("Snow Leopard", 1777);


   animal2.display();
   animal1->display();
   animal3.display();

   printf("\n");

   delete animal1;

  
   AnimalsInZoo *newZoo = new AnimalsInZoo(animal2);
   AnimalsInZoo zoo2;


   newZoo->display();
   zoo2.display();

}
