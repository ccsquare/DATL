#ifndef _DATL_NUMERIC_H
#define _DATL_NUMERIC_H

namespace DATL {


	// accumulate(1) add all value to init
	// O(n)
	template <typename InputIterator, typename T>
	T accumulate (InputIterator first, InputIterator last, T init) {

		for ( ; first != last; first++) {
			init += *first;
		}

		return init;
	}


	// O(n)
	// accumulate(2) carry on binary op on each value
	template <typename InputIterator, typename T, typename BinaryOp>
	T accumulate (InputIterator first, InputIterator last, T init, BinaryOp binaryOp) {
		for ( ; first != last; first++) {
			init = binaryOp(init, *first);
		}

		return init;
	}



	// adjacent_difference calculate x0 x1 - x0 x2 - x1 ... and
	// store them in result's sequence
	template <typename InputIterator, typename OutputIterator>
	OutputIterator adjacent_difference (InputIterator first, InputIterator last,
										OutputIterator result) {
		
		if (first == last) return result;
		auto prev = *first;
		*result = prev;
		while (++first != last) {
			auto val = *first;
			*++result = val - prev;
			prev = val;
		}
		++result;
		return result;
	}


	template <typename InputIterator, typename OutputIterator, typename BinaryOperation>
	OutputIterator adjacent_difference (InputIterator first, InputIterator last,
										OutputIterator result, BinaryOperation binary_op) {

		if (first == last) return result;
		auto prev = *first;
		*result = prev;
		while (++first != last) {
			auto val = *first;
			*++result = val - prev;
			prev = val;
		}
		++result;
		return result;
	}


	template <typename InputIterator1, typename InputIterator2, typename T>
	T inner_product (InputIterator1 first1, InputIterator1 last1, 
					 InputIterator2 first2, T init) {

		while (first1 != last1) {

			init = init + (*first1 * *first2);
			first1++;
			first2++;
		}

		return init;
	}

	template <typename InputIterator1, typename InputIterator2, typename T,
			  typename BinaryOperation1, typename BinaryOperation2>
	T inner_product (InputIterator1 first1, InputIterator2 last1,
					 InputIterator2 first2, T init,
					 BinaryOperation1 binary_op1,
					 BinaryOperation2 binary_op2) {
		while (first1 != last1) {
			init = binary_op1 (init, binary_op2(*first1, *first2));
			first1++;
			first2++;
		}
	}


	template <typename InputIterator, typename OutputIterator>
	OutputIterator partial_sum (InputIterator first, InputIterator last,
								OutputIterator result) {
		if (first == last) return result;
		auto value = *first;
		*result = value;
		
		while (++first != last) {
			value = value + *first;
			*++result = value;

		}
		result++;
		return result;
	}

	template <typename InputIterator, typename OutputIterator, typename BinaryOperation>
	OutputIterator partial_sum (InputIterator first, InputIterator last,
								OutputIterator result, BinaryOperation binary_op) {

		if (first == last) return result;
		auto value = *first;
		*result = value;

		while (++first != last) {
			value = binary_op(value, *first);
			*++result = value;
		}
		result++;
		return result;
	}


	// itoa a mutating algorithm
	template <typename ForwardIterator, typename T>
	void itoa (ForwardIterator first, ForwardIterator last, T value) {
		while (first != last) *first++ = value++;
	}
}

#endif
