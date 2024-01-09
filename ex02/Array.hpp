#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <stdlib.h>

template <typename T>
class Array
{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array<T>(const unsigned int size) : _size(size)
		{
			std::cout << "Size constructor called" << std::endl;        
			if (size <= 0)
				throw std::length_error("Invalid size");
			this->_array = new T[size];
		};
		Array<T>(void)
		{
			std::cout << "Default constructor called" << std::endl;
			this->_array = NULL;
			this->_size = 0;
		};
		unsigned int getSize(void)
		{
			return (this->_size);
		}
		T & operator [] (const unsigned int index)
		{
			if (index < 0 || index >= this->_size)
				throw std::length_error("Invalid size");
			return (this->_array[index]);
		}
		Array(Array const &src)
		{
			unsigned int	i;

			i = 0;
			_array = new T[src._size];
			_size = src._size;
			while (i < this->_size)
			{
				_array[i] = src._array[i];
			}
		}
		T & operator = ( T const & value )
		{
			std::cout << "Assignement = operator called" << std::endl;
			if (*this == value)
				return (*this); 
			if (this->_size > 0)
				delete [] this->_array;
			this->_size = value.getSize();
			this->_array = new T[this->_size];
			for (int i = 0; i < this->_array; i++)
				this->_array[i] = value[i];
			return (*this);
		}
		~Array()
		{
			std::cout << "Array destructor called" << std::endl;
		};
};


#endif