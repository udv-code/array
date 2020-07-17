// Copyright (c) 2020 udv. All rights reserved.

#ifndef USTL_ARRAY
#define USTL_ARRAY

namespace ustd {
	template<typename T, size_t s>
	class array {
		using size_type = size_t;
	public:
		[[nodiscard]] constexpr size_type size() const noexcept { return s; }

		// TODO: indexofbounds check in debug
		[[nodiscard]] T &operator[](size_type index) noexcept { return data_[index]; }

		[[nodiscard]] const T &operator[](size_type index) const noexcept { return data_[index]; }

		[[nodiscard]] const T *data() const noexcept { return data_; }
		[[nodiscard]] T *data() noexcept { return data_; }

		// TODO: iterators

	private:
		T data_[s];
	};
}

#endif //USTL_ARRAY
