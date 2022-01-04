#include"Zombie.hpp"

int main() {
	
	Zombie*  newZom = newZombie( "TOM" );
	newZom->announce();
	randomChump( "Steve" );

	delete newZom;
}