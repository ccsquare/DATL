#ifndef _ALLOCATOR_H_
#define _ALLOCATOR_H_

#include <cstddef>

namespace DATL {

	template <typename T>
	class Allocator {
	public:
		typedef T value_type;
		typedef T* pointer;
		typedef T& reference;
		typedef const T* const_pointer;
		typedef const T& const_reference;
		typedef size_t size_type;
		typedef ptrdiff_t difference_type;



		// Constructors
		Allocator () noexcept {
			
		}

		
		T* allocate();
		T* allocate(size_t n);
		void deallocate(T* ptr);
		void deallocate(T* ptr, size_t n);

		void construct(T* ptr);
		void construct(T* ptr, const T& value);
		void destroy(T* ptr);
		void destroy(T* first, T* last);

		
	};

	template <typename T>
	T* Allocator::allocate() {
		return static_cast<T*>(::operator new(sizeof(T)));
	}

	template <typename T>
	T* Allocator::allocate(size_t n) {
		return static_cast<T*>(::operator new(sizeof(T) * n));
	}

	template <typename T>
	void Allocator::deallocate(T* ptr) {
		::operator delete(ptr);
	}

	template <typename T>
	void Allocator::deallocate(T* ptr, size_t n) {

	}

}


#endif
