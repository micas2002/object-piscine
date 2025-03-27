#pragma once

#include <iostream>
#include <list>
#include <algorithm>
#include <memory>

template <typename A>
class SingletonClass {
	private:
		SingletonClass() {};
		// static SingletonClass*	_instance;
		static std::unique_ptr<SingletonClass>	_instance;
		std::list<A*>							_elements;

	public:
		SingletonClass(const SingletonClass& copy) = delete;
	
		~SingletonClass() {}

		SingletonClass& operator = (const SingletonClass& assign) = delete;

		static SingletonClass*	getSingletonInstance() {
			if (!_instance)
				_instance.reset(new SingletonClass());
			
			return (_instance.get());
		}

		std::list<A*>	getElements() {return _elements;}
		
		void	addNewElement(A* element) {
			typename std::list<A*>::iterator it = find(_elements.begin(), _elements.end(), element);
			if (element && it == _elements.end())
				_elements.push_back(element);
		}

		void	removeElement(A* element) {
			typename std::list<A*>::iterator it = find(_elements.begin(), _elements.end(), element);
			if (element && it != _elements.end())
				_elements.erase(it);
		}
};

template<typename A>
std::unique_ptr<SingletonClass<A>> SingletonClass<A>::_instance = nullptr;