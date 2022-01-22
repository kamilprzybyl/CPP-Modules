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

	uintptr_t	ret = serialize(&data);
	Data*		ret2 = deserialize(ret);

	std::cout << ret2->_name << std::endl;
}
