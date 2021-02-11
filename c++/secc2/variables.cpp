#include <iostream>
using namespace std;

int main() {
 int numberCats = 5;
 int numberDogs = 7;
 int numberAnimals = numberCats + numberDogs;

 cout << " Number of cats: " << numberCats << endl; 
 cout << " Number of dogs: " << numberDogs << endl;

 cout << " Total number of animals: " << numberAnimals << endl;
 cout << " New dog acquired: " << endl;

 numberDogs ++;

 cout << " New number of dog: " << numberDogs << endl;


 return 0;
}
