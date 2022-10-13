#pragma once
#include <memory>
#include <string>
#include <iostream>
#include <string_view>
#include <initializer_list>

class MyArray final
{
public:
	explicit MyArray(size_t size);
	explicit MyArray(std::initializer_list<int> l);
	MyArray(size_t size, const std::string_view name);
	~MyArray();
	void setName(const std::string_view name);
	std::string toString() const;
	size_t size() const noexcept { return mSize; }
	std::string_view name() const { return mName; }

private:
	std::string nameWithSpace() const;
	std::string mName{};
	size_t mSize{0};
	std::unique_ptr<int[]> ptr{};
};

std::ostream& operator<< (std::ostream & os, const MyArray & a);
