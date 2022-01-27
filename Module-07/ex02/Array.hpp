#pragma once

template<class T>
class	Array {

	private:
		T				*_arr;
		unsigned int	_size;

	public:
		Array() : _arr(), _size() {}
		Array( unsigned int n ) : _arr(new T[n]), _size(n) {}
		Array( Array<T> const & b ) {

			_arr = new T[b._size];
			_size = b._size;
			for (unsigned int i = 0; i < b._size; i++) {
				_arr[i] = b._arr[i];
			}
		}

		~Array() { delete[] _arr; }

		Array<T>	&operator=( Array<T> const & b ) {

			if (this != &b) {
				delete[] _arr;
				_arr = new T[b._size];
				_size = b._size;
				for (unsigned int i = 0; i < b._size; i++) {
					_arr[i] = b._arr[i];
				}
			}

			return *this;
		}

		T	&operator[]( int index ) {

			if (index < 0 || index >=  static_cast<int>(_size)) {
				throw Array::OutOfBounds();
			}
			return _arr[index];
		}

		size_t	size() { return _size; }

		class OutOfBounds : public std::exception {

			public:
				virtual const char*	what() const throw() {

					return "Out of bounds";
				}
		};
};
