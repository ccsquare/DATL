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
}

#endif
