#include <iostream>
#include <Data.hpp>

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}


int	main() {

	Data	data;

	data._name = "Jan";

	uintptr_t	ser = serialize(&data);
	Data*		des = deserialize(ser);

	std::cout << des->_name << std::endl;
}
