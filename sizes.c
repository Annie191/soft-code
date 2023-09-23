// Copyright (c) 2012 MIT License by 6.172 Staff
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

// 定义一个宏，用于打印数据类型的大小
#define PRINT_SIZE(type) printf("size of %s: %zu bytes\n", #type, sizeof(type))

int main()
{
  // 使用宏打印各种数据类型的大小
  PRINT_SIZE(int);
  PRINT_SIZE(short);
  PRINT_SIZE(long);
  PRINT_SIZE(char);
  PRINT_SIZE(float);
  PRINT_SIZE(double);
  PRINT_SIZE(unsigned int);
  PRINT_SIZE(long long);
  PRINT_SIZE(uint8_t);
  PRINT_SIZE(uint16_t);
  PRINT_SIZE(uint32_t);
  PRINT_SIZE(uint64_t);
  PRINT_SIZE(uint_fast8_t);
  PRINT_SIZE(uint_fast16_t);
  PRINT_SIZE(uintmax_t);
  PRINT_SIZE(intmax_t);
  PRINT_SIZE(__int128);

  // 定义一个结构体 student
  typedef struct
  {
    int id;
    int year;
  } student;

  student you;
  you.id = 12345;
  you.year = 4;

  // 使用宏打印结构体大小
  PRINT_SIZE(student);

  // 声明一个整数数组 x
  int x[5];

  // 使用宏打印整数数组的大小
  PRINT_SIZE(x);

  return 0;
}
