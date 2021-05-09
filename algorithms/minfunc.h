#pragma once

namespace {
	//! Minimum function with any number of arguments
	template<typename T>
	T min(T const a, T const b) {
		return a < b ? a : b;
	}

	template<typename T1, typename...T>
	T1 min(T1 a, T... args) {
		return min(a, min(args...));
	}

	//! Minimum function with a comparison function and 
	//! any number of arguments 
	template <class Compare, typename T>
	T minc(Compare comp, T const a, T const b) {
		return comp(a, b) ? a : b;
	}

	template <class Compare, typename T1, typename... T>
	T1 minc(Compare comp, T1 a, T... args) {
		return minc(comp, a, minc(comp, args...));
	}
}
