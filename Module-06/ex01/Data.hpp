#pragma once

#include <iostream>

typedef struct {

	std::string	_name;
} Data;

uintptr_t	serialize( Data* ptr );
Data*		deserialize( uintptr_t raw );
