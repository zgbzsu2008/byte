#include <bitset>
#include <cstddef>
#include <iostream>
#include <string>

std::ostream& operator<<(std::ostream& out, std::byte b)
{
  out << std::bitset<8>(std::to_integer<unsigned char>(b));
  return out;
}

// std::byte 是一种独立类型，它实现指定于 C++ 语言定义中的字节的概念
int main()
{
  std::byte b1{4};  // 0100
  std::byte b2{7};  // 0111
  std::cout << b1 << '&' << b2 << '=' << (b1 & b2) << '\n';
  std::cout << b1 << '|' << b2 << '=' << (b1 | b2) << '\n';
  std::cout << b1 << '^' << b2 << '=' << (b1 ^ b2) << '\n';
  std::cout << '~' << b1 << '=' << (~b1) << '\n';
  int shift = 2;
  std::cout << b1 << "<<" << shift << '=' << (b1 << shift) << '\n';
  std::cout << b2 << ">>" << shift << '=' << (b2 >> shift) << '\n';

  return 0;
}