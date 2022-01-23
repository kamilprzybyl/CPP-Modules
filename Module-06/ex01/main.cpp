#include <iostream>
#include <Data.hpp>

// For casting to and from void*, static_cast should be preferred.

uintptr_t	serialize(Data* ptr) {

	return reinterpret_cast<uintptr_t>(ptr);
}

Data*		deserialize(uintptr_t raw) {

	return reinterpret_cast<Data*>(raw);
}


int	main() {

	Data	data;

	data._name = "Jan";

	std::cout << "before serializaation:	" << &data._name << std::endl;

	uintptr_t	ser = serialize(&data);
	Data*		des = deserialize(ser);

	std::cout << "after serializaation:	" << &des->_name << std::endl;
}
