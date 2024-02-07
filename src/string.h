#ifndef SRC_STRING_H_
#define SRC_STRING_H_

#include <errno.h>
#include <math.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

typedef unsigned long size_t;

void* memchr(const void* str, int c, size_t n);
void* memmove(void* dest, const void* src, size_t n);
void* memcpy(void* dest, const void* src, size_t n);
void* memset(void* str, int c, size_t n);
int memcmp(const void* str1, const void* str2, size_t n);
int strcmp(const char* str1, const char* str2);
int strncmp(const char* str1, const char* str2, size_t n);
char* strcpy(char* dest, const char* src);
char* strncpy(char* dest, const char* src, size_t n);
char* strcat(char* dest, const char* src);
char* strncat(char* dest, const char* src, size_t n);
char* strchr(const char* str, int number);
char* strrchr(const char* str, int number);
char* strpbrk(const char* str1, const char* str2);
int is_delim(char c, const char* delim);
char* strtok(char* str, const char* delim);
char* strerror(const int errorNum);
char* strstr(const char* str1, const char* str2);
size_t strlen(const char* str);
size_t strspn(const char* str1, const char* str2);
size_t strcspn(const char* str1, const char* str2);
void* to_upper(const char* str);
void* to_lower(const char* str);
void* insert(const char* src, const char* str, size_t start_index);
void* trim(const char* src, const char* trim_chars);

void fill(char* str, va_list* string, int* i);
int numb(const char* str);
int length(const char* str);
int number(const char* str, int* i);
int sscanf(const char* str, const char* format, ...);
int read(const char* str, int* j, va_list* string, int* counter);
int read_n(int coun, va_list* string);
int read_s(const char* str, int* j, va_list* string, int* counter);
int read_f(const char* str, int* j, va_list* string, int* counter);
int read_i(const char* str, int* j, va_list* string, int* counter);
int read_d(const char* str, int* j, va_list* string, int* counter);
int read_o(const char* str, int* j, va_list* string, int* counter);
int read_c_pr(const char* str, int* j, va_list* string, int* counter);
int read_u(const char* str, int* j, va_list* string, int* counter);
int read_p(const char* str, int* j, va_list* string, int* counter);
int read_x(const char* str, int* j, va_list* string, int* counter);
int copy_str(const int width, const char* str, char* copy, int* j);
int copy_str_c(const int width, const char* str, char* copy, int* j);
int hex_number(const char* str, int* i, int* counter);
int phex_number(const char* str, int* i);
int fl(const char* str);
int read_i_convert(const char* str, int* j, int* counter);
int oct_number(const char* str, int* i, int* counter);
int poct_number(const char* str, int* i);
int read_c(const char* str, const int* j, va_list* string);
void skip(const char* str, int* i, int* counter);
int read_i_convert(const char* str, int* j, int* counter);
int write_int_unsign(long d_str, va_list* string);
int write_int(long d_str, va_list* string);
int write_float(long double d_str, va_list* string);
long double read_f_convert(const char* str, int* j,
                           int* counter);
int count(int p);

void pfill(char* str, va_list* string, int* i);
void param(int* d, char* str, va_list* string, int* i);
int read_sprintf(char* str, int* j, va_list* string, int counter);
void pread_n(char* str, int* j, int count);
int pread_s(char* str, int* j, va_list* string);
int pread_p(char* str, int* j, va_list* string);
int pread_x_o(char* str, int* j, long res, int base);
void ltoaa(long value, char* buffer, int base);
char* reverse(char* buffer, int i, int j);
void swapp(char* x, char* y);
int pread_e(char* copy, int* p, long double res);
int pread_f(char* str, int* j, long double res);
void flag_read_spec_float(char* str, int* j, char* copy, int res, int* len);
int flag_pount(const char* copy);
int copy_f(char* copy, long double res);
int pwrite_float(char* str, int* j, va_list* string);
int pread_d(char* str, int* j, int res);
int pread_i(char* str, int* j, int res);
int pread_i_convert(char* str, int* j);
void flag_read_spec(char* str, int* j, char* copy, int* len, int base);
void flag_read_minus_int(char* str, int* j, char* copy, int res, int* len);
void flag_read_minus(char* str, int* j, char* copy, int* len);
void flag_read(char* str, int* j, char c, int* len);
void flag_read_zero_int(char* str, int* j, char* copy, int res, int* len);
void flag_read_zero(char* str, int* j, char* copy, int* len);
void flag_read_int(char* str, int* j, char* copy, int res, int* len);
void flag_read_plus_space(char* str, int* j, char* copy, int res, int* len,
                          int indic);
void pcopy_str(char* str, int* j, const char* copy);
void pcopy_int(char* copy, int res);
int len_int(int res);
int poww(int j, int p);
int pwrite_int(char* str, int* j, va_list* string);
int pwrite_int_unsign(char* str, int* j, va_list* string);
int pread_c(char* str, int* j, va_list* string);
int pread_c_pr(char* str, int* j);
int hex_len(const char* str, const int* i);
int oct_len(const char* str, const int* i);
int sprintf(char* str, const char* format, ...);
int hex(const char* str);
int oct(const char* str);
int flag(const char* str);

#endif  // SRC_STRING_H_
