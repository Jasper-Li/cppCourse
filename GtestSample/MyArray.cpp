#include "MyArray.h"
#include <format>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;

MyArray::MyArray(size_t size)
	:mSize{size},ptr{make_unique<int[]>(size)} {
	cout << format("{}constructor\n", nameWithSpace());
}

MyArray::MyArray(std::initializer_list<int> l)
	:mSize{ l.size() }, ptr{ make_unique<int[]>(l.size()) } {
	std::copy(std::cbegin(l), std::cend(l), ptr.get());
}
MyArray::MyArray(size_t size, const string_view name)
	:mSize{ size }, ptr{ make_unique<int[]>(mSize) }, mName{ name } {
	cout << format("{}constructor\n", nameWithSpace());
}
MyArray::~MyArray() {
	cout << format("{}destructor\n", name());
}
void MyArray::setName(const std::string_view name) {
	mName = name;
}
std::string MyArray::toString() const {
	ostringstream ss;
	ss << '{';
	for (size_t i{}; i < mSize - 1; i++) {
		ss << format("{}, ", ptr[i]);
	}
	ss << format("{}}}", ptr[mSize-1]);
	return ss.str();
}

std::string MyArray::nameWithSpace() const {
	return mName.empty() ? "" : format("{} ", mName);
}

std::ostream& operator<< (std::ostream& os, const MyArray& a) {
	return os << a.toString();
}
