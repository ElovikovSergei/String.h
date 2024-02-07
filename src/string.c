#include "string.h"
#if defined(__linux__)
#define ARRERROR                                                               \
  {                                                                            \
    "Success", "Operation not permitted", "No such file or directory",         \
        "No such process", "Interrupted system call", "Input/output error",    \
        "No such device or address", "Argument list too long",                 \
        "Exec format error", "Bad file descriptor", "No child processes",      \
        "Resource temporarily unavailable", "Cannot allocate memory",          \
        "Permission denied", "Bad address", "Block device required",           \
        "Device or resource busy", "File exists", "Invalid cross-device link", \
        "No such device", "Not a directory", "Is a directory",                 \
        "Invalid argument", "Too many open files in system",                   \
        "Too many open files", "Inappropriate ioctl for device",               \
        "Text file busy", "File too large", "No space left on device",         \
        "Illegal seek", "Read-only file system", "Too many links",             \
        "Broken pipe", "Numerical argument out of domain",                     \
        "Numerical result out of range", "Resource deadlock avoided",          \
        "File name too long", "No locks available",                            \
        "Function not implemented", "Directory not empty",                     \
        "Too many levels of symbolic links", "Unknown error 41",               \
        "No message of desired type", "Identifier removed",                    \
        "Channel number out of range", "Level 2 not synchronized",             \
        "Level 3 halted", "Level 3 reset", "Link number out of range",         \
        "Protocol driver not attached", "No CSI structure available",          \
        "Level 2 halted", "Invalid exchange", "Invalid request descriptor",    \
        "Exchange full", "No anode", "Invalid request code", "Invalid slot",   \
        "Unknown error 58", "Bad font file format", "Device not a stream",     \
        "No data available", "Timer expired", "Out of streams resources",      \
        "Machine is not on the network", "Package not installed",              \
        "Object is remote", "Link has been severed", "Advertise error",        \
        "Srmount error", "Communication error on send", "Protocol error",      \
        "Multihop attempted", "RFS specific error", "Bad message",             \
        "Value too large for defined data type", "Name not unique on network", \
        "File descriptor in bad state", "Remote address changed",              \
        "Can not access a needed shared library",                              \
        "Accessing a corrupted shared library",                                \
        ".lib section in a.out corrupted",                                     \
        "Attempting to link in too many shared libraries",                     \
        "Cannot exec a shared library directly",                               \
        "Invalid or incomplete multibyte or wide character",                   \
        "Interrupted system call should be restarted", "Streams pipe error",   \
        "Too many users", "Socket operation on non-socket",                    \
        "Destination address required", "Message too long",                    \
        "Protocol wrong type for socket", "Protocol not available",            \
        "Protocol not supported", "Socket type not supported",                 \
        "Operation not supported", "Protocol family not supported",            \
        "Address family not supported by protocol", "Address already in use",  \
        "Cannot assign requested address", "Network is down",                  \
        "Network is unreachable", "Network dropped connection on reset",       \
        "Software caused connection abort", "Connection reset by peer",        \
        "No buffer space available",                                           \
        "Transport endpoint is already connected",                             \
        "Transport endpoint is not connected",                                 \
        "Cannot send after transport endpoint shutdown",                       \
        "Too many references: cannot splice", "Connection timed out",          \
        "Connection refused", "Host is down", "No route to host",              \
        "Operation already in progress", "Operation now in progress",          \
        "Stale file handle", "Structure needs cleaning",                       \
        "Not a XENIX named type file", "No XENIX semaphores available",        \
        "Is a named type file", "Remote I/O error", "Disk quota exceeded",     \
        "No medium found", "Wrong medium type", "Operation canceled",          \
        "Required key not available", "Key has expired",                       \
        "Key has been revoked", "Key was rejected by service", "Owner died",   \
        "State not recoverable", "Operation not possible due to RF-kill",      \
        "Memory page has hardware error"                                       \
  }
#elif defined(__APPLE__)
#define ARRERROR                                                               \
  {                                                                            \
    "Undefined error: 0", "Operation not permitted",                           \
        "No such file or directory", "No such process",                        \
        "Interrupted system call", "Input/output error",                       \
        "Device not configured", "Argument list too long",                     \
        "Exec format error", "Bad file descriptor", "No child processes",      \
        "Resource deadlock avoided", "Cannot allocate memory",                 \
        "Permission denied", "Bad address", "Block device required",           \
        "Resource busy", "File exists", "Cross-device link",                   \
        "Operation not supported by device", "Not a directory",                \
        "Is a directory", "Invalid argument", "Too many open files in system", \
        "Too many open files", "Inappropriate ioctl for device",               \
        "Text file busy", "File too large", "No space left on device",         \
        "Illegal seek", "Read-only file system", "Too many links",             \
        "Broken pipe", "Numerical argument out of domain", "Result too large", \
        "Resource temporarily unavailable", "Operation now in progress",       \
        "Operation already in progress", "Socket operation on non-socket",     \
        "Destination address required", "Message too long",                    \
        "Protocol wrong type for socket", "Protocol not available",            \
        "Protocol not supported", "Socket type not supported",                 \
        "Operation not supported", "Protocol family not supported",            \
        "Address family not supported by protocol family",                     \
        "Address already in use", "Can't assign requested address",            \
        "Network is down", "Network is unreachable",                           \
        "Network dropped connection on reset",                                 \
        "Software caused connection abort", "Connection reset by peer",        \
        "No buffer space available", "Socket is already connected",            \
        "Socket is not connected", "Can't send after socket shutdown",         \
        "Too many references: can't splice", "Operation timed out",            \
        "Connection refused", "Too many levels of symbolic links",             \
        "File name too long", "Host is down", "No route to host",              \
        "Directory not empty", "Too many processes", "Too many users",         \
        "Disc quota exceeded", "Stale NFS file handle",                        \
        "Too many levels of remote in path", "RPC struct is bad",              \
        "RPC version wrong", "RPC prog. not avail", "Program version wrong",   \
        "Bad procedure for program", "No locks available",                     \
        "Function not implemented", "Inappropriate file type or format",       \
        "Authentication error", "Need authenticator", "Device power is off",   \
        "Device error", "Value too large to be stored in data type",           \
        "Bad executable (or shared library)", "Bad CPU type in executable",    \
        "Shared library version mismatch", "Malformed Mach-o file",            \
        "Operation canceled", "Identifier removed",                            \
        "No message of desired type", "Illegal byte sequence",                 \
        "Attribute not found", "Bad message", "EMULTIHOP (Reserved)",          \
        "No message available on STREAM", "ENOLINK (Reserved)",                \
        "No STREAM resources", "Not a STREAM", "Protocol error",               \
        "STREAM ioctl timeout", "Operation not supported on socket",           \
        "Policy not found", "State not recoverable", "Previous owner died",    \
        "Interface output queue is full", "Unknown error: 107"                 \
  }
#endif

struct specifiers {
  char flag;
  int width;
  int acc;
  char length;
  char spec;
} specifiers;

void* memchr(const void* str, int c, size_t n) {
  int k = -1;
  char* str1;
  for (int i = 0; i < (int)n; ++i)
    if (*((char*)str + i) == c && k == -1) k = i;
  if (k == -1)
    str1 = NULL;
  else
    str1 = (char*)str + k;
  return str1;
}

void* memmove(void* dest, const void* src, size_t n) {
  char r[1000];

  for (int i = 0; i < (int)n; ++i) r[i] = *((char*)src + i);
  for (int i = 0; i < (int)n; ++i) *((char*)dest + i) = r[i];

  return (char*)dest;
}

void* memcpy(void* dest, const void* src, size_t n) {
  for (int i = 0; i < (int)n; ++i) *((char*)dest + i) = *((char*)src + i);
  return (char*)dest;
}

void* memset(void* str, int c, size_t n) {
  for (int i = 0; i < (int)n; ++i) *((char*)str + i) = c;
  return (char*)str;
}

int memcmp(const void* str1, const void* str2, size_t n) {
  if ((int)n == 0) return 0;
  while (--n && *(char*)str1 == *(char*)str2) {
    str1 = (char*)str1 + 1;
    str2 = (char*)str2 + 1;
  }
  return (*(char*)str1) - (*(char*)str2);
}

int strcmp(const char* str1, const char* str2) {
  size_t lenStr1 = strlen(str1);
  size_t i;
  for (i = 0; i < lenStr1; i++)
    if (str1[i] != str2[i]) break;
  return str1[i] - str2[i];
}
int strncmp(const char* str1, const char* str2, size_t n) {
  size_t i;
  for (i = 0; i < n - 1; i++)
    if (str1[i] != str2[i]) break;
  return str1[i] - str2[i];
}

char* strcpy(char* dest, const char* src) {
  char* startDest = dest;

  while ((*dest++ = *src++) != '\0') {
  }

  return startDest;
}

char* strncpy(char* dest, const char* src, size_t n) {
  int iter = 0;
  char* startDest = dest;

  while (((*dest++ = *src++) != '\0') || (iter++ < (int)n - 1)) {
  }

  return startDest;
}

char* strcat(char* dest, const char* src) {
  char* startDest = dest;
  int lenDest = strlen(dest);
  int iter = 0;

  while ((*(dest + lenDest + iter++) = *src++) && (*src != '\0')) {
  }

  return startDest;
}

char* strncat(char* dest, const char* src, size_t n) {
  char* startDest = dest;
  int lenDest = strlen(dest);
  int iter = 0, iter2 = 0;

  while (1) {
    *(dest + lenDest + iter) = *src++;
    iter++;
    iter2++;

    if (*src == '\0' || iter2 == (int)n) break;
  }
  return startDest;
}

char* strchr(const char* str, int number) {
  int lenStr = strlen(str) + 1;
  int iter = 0;
  char* symbol = NULL;

  while (1) {
    if (iter > lenStr) break;
    if (*(str + iter) == number) {
      symbol = (char*)str + iter;
      break;
    }

    iter++;
  }
  return symbol;
}

char* strrchr(const char* str, int number) {
  int lenStr = strlen(str) + 1;
  char* symbol = NULL;

  for (int i = 0; i < lenStr; i++) {
    if (*(str + i) == number) symbol = ((char*)str + i);
  }
  return symbol;
}

char* strpbrk(const char* str1, const char* str2) {
  int lenStr1 = strlen(str1);
  int lenStr2 = strlen(str2);
  char* symbol = NULL;

  for (int i = 0; i < lenStr1; i++) {
    if (symbol != NULL) break;

    for (int j = 0; j < lenStr2; j++) {
      if (*(str2 + j) == *(str1 + i)) symbol = ((char*)str1 + i);
    }
  }
  return symbol;
}

int is_delim(char c, const char* delim) {
  while (*delim != '\0') {
    if (c == *delim) return 1;
    delim++;
  }
  return 0;
}

char* strtok(char* s, const char* delim) {
  static char* p;
  if (!s) {
    s = p;
  }
  if (!s) {
    return NULL;
  }

  while (1) {
    if (is_delim(*s, delim)) {
      s++;
      continue;
    }
    if (*s == '\0') {
      return NULL;
    }
    break;
  }

  char* ret = s;
  while (1) {
    if (*s == '\0') {
      p = s;
      return ret;
    }
    if (is_delim(*s, delim)) {
      *s = '\0';
      p = s + 1;
      return ret;
    }
    s++;
  }
}

char* strerror(int errnum) {
  char* result[] = ARRERROR;
  char* resnum = (char*)calloc(70, sizeof(char));
  int max;

  if (result[0][0] == 'U')
    max = 107;
  else
    max = 133;
  if (errnum > 0 && errnum <= max) {
    strcpy(resnum, result[errnum]);
  } else {
    char num[10] = {0};
    if (errnum < 0) {
      num[0] = '-';
      errnum *= -1;
    }
    strcpy(resnum, "Unknown error: ");
    int i;
    for (i = 8; errnum != 0; errnum /= 10, i--) {
      num[i] = errnum % 10 + '0';
    }
    if (num[0] == '-') {
      resnum[15] = '-';
    }

    strcat(resnum, num + i + 1);
  }
  return resnum;
}

char* strstr(const char* str1, const char* str2) {
  int lenStr1 = strlen(str1);
  int lenStr2 = strlen(str2);
  char* symbol = NULL;

  if (lenStr2 != 0) {
    int identicalSymbols = 0;
    for (int i = 0; i < lenStr1; i++) {
      if (identicalSymbols == lenStr2) break;

      if (*(str1 + i) == *(str2 + identicalSymbols)) {
        if (identicalSymbols == 0) symbol = ((char*)str1 + i);
        if (identicalSymbols < lenStr2) identicalSymbols++;
      } else {
        identicalSymbols = 0;
      }
    }

    if (identicalSymbols != lenStr2) symbol = NULL;
  } else {
    symbol = (char*)str1;
  }

  return symbol;
}

size_t strlen(const char* str) {
  int len = 0;

  for (int i = 0; *(str + i) != '\0'; i++) len++;

  return len;
}

size_t strspn(const char* str1, const char* str2) {
  size_t n;
  const char* p;

  for (n = 0; *str1; str1++, n++) {
    for (p = str2; *p && *p != *str1; p++) {
    }
    if (!*p) break;
  }
  return n;
}

size_t strcspn(const char* str1, const char* str2) {
  size_t n;
  int flage = 0;
  const char* p;

  for (n = 0; *str1; str1++, n++) {
    for (p = str2; *p; p++) {
      if (*p == *str1) {
        flage = 1;
        break;
      }
    }
    if (flage == 1) break;
  }
  return n;
}

void* to_upper(const char* str) {
  int lenStr = strlen(str);
  int i = 0;
  char* string;

  string = (char*)malloc(lenStr * sizeof(char));

  while (i < lenStr) {
    if (str[i] >= 'a' && str[i] <= 'z') {
      string[i] = str[i] - 32;
    }
    ++i;
  }
  return lenStr != 0 ? string : NULL;
}

void* to_lower(const char* str) {
  int lenStr = strlen(str);
  int i = 0;
  char* string;

  string = (char*)malloc(lenStr * sizeof(char));

  while (i < lenStr) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      string[i] = str[i] + 32;
    }
    ++i;
  }
  return string;
}

void* insert(const char* src, const char* str, size_t start_index) {
  char* len;
  int flage = -1;
  size_t lenSrc;

  if (src == NULL || str == NULL) {
    len = NULL;
    flage = 0;
  }

  if (flage == -1) {
    lenSrc = strlen(src);
    if (lenSrc < start_index) {
      len = NULL;
      flage = 1;
    }
  }

  char* result = NULL;
  size_t allStrLen = 0;

  if (flage == -1) {
    size_t lenStr;
    lenStr = strlen(str);
    allStrLen = lenSrc + lenStr;

    result = (char*)calloc((lenSrc + lenStr), sizeof(char));

    for (int i = 0; i < (int)start_index; i++) {
      result[i] = src[i];
    }

    strcat(result, str);

    for (int i = 0; i + start_index + lenStr < lenSrc + lenStr; i++) {
      result[i + start_index + lenStr] = src[i + start_index];
    }
  }
  return allStrLen != 0 || len != NULL ? result : NULL;
}

void* trim(const char* src, const char* trim_chars) {
  if (trim_chars == NULL || strlen(trim_chars) == 0) trim_chars = " ";

  int flage = 0;

  if (src == NULL) flage = 1;

  size_t lenSrc = 0;
  char* string;
  char* srt = NULL;

  if (flage == 0) {
    int start_index = 0, end_index = 0, new_index = 0;
    size_t lenTrim = 0;
    lenSrc = strlen(src);
    lenTrim = strlen(trim_chars);

    string = (char*)src;

    for (int i = 0; i <= (int)lenSrc; i++) {
      for (int j = 0; j <= (int)lenTrim; j++) {
        if (string[i] == trim_chars[j]) {
          start_index++;
          break;
        }
      }
      if (new_index == start_index) break;
      new_index++;
    }

    new_index = 0;
    for (int i = lenSrc - new_index - 1; i >= 0; i--) {
      for (int j = 0; j < (int)lenTrim; j++) {
        if (string[i] == trim_chars[j]) {
          new_index++;
          break;
        }
      }
      if (end_index == new_index) break;
      end_index++;
    }

    srt = (char*)malloc(lenSrc - start_index - end_index + 1 * sizeof(char));

    for (int i = 0; i + start_index < (int)lenSrc - end_index; i++) {
      srt[i] = string[i + start_index];
    }
  }
  return lenSrc != 0 ? (void*)srt : NULL;
}

void fill(char* str, va_list* string, int* i) {
  (*i)++;
  int sign = 1;
  if (*(str + *i) == '-') {
    sign = -1;
    (*i)++;
  } else if (*(str + *i) == '+') {
    (*i)++;
  }
  (specifiers).width = sign * number(str, i);
  if (*(str + *i) == '*') {
    (specifiers).width = va_arg(*string, int);
    (*i)++;
  }
  if (length(str + *i) == 1) {
    (specifiers).length = *(str + *i);
    (*i)++;
  } else {
    (specifiers).length = 'e';
  }
  (specifiers).spec = *(str + *i);
  if (*(str + *i) == 'c' && (specifiers).width == -1) (specifiers).width = 1;
}

int read(const char* str, int* j, va_list* string, int* counter) {
  int r = 0;
  if (specifiers.spec == 'c')
    r = read_s(str, j, string, counter);
  else if (specifiers.spec == 'd')
    r = read_d(str, j, string, counter);
  else if (specifiers.spec == 'i')
    r = read_i(str, j, string, counter);
  else if ((specifiers.spec == 'e') || (specifiers.spec == 'E') ||
           (specifiers.spec == 'f') || (specifiers.spec == 'g') ||
           (specifiers.spec == 'G'))
    r = read_f(str, j, string, counter);
  else if (specifiers.spec == 'o')
    r = read_o(str, j, string, counter);
  else if (specifiers.spec == 's')
    r = read_s(str, j, string, counter);
  else if (specifiers.spec == 'u')
    r = read_u(str, j, string, counter);
  else if ((specifiers.spec == 'x') || (specifiers.spec == 'X'))
    r = read_x(str, j, string, counter);
  else if (specifiers.spec == 'p')
    r = read_p(str, j, string, counter);
  else if (specifiers.spec == 'n')
    r = read_n(*counter, string);
  else if (specifiers.spec == '%')
    r = read_c_pr(str, j, string, counter);
  return r;
}

int read_n(int coun, va_list* string) {
  int* n = va_arg(*string, int*);
  *n = coun;
  return 1;
}

int read_s(const char* str, int* j, va_list* string, int* counter) {
  char copy[256];
  int i = 0, k = 1;
  if (specifiers.spec == 's') {
    skip(str, j, counter);
    if (specifiers.width != -1)
      *(counter) += copy_str(specifiers.width, str, copy, j);
    else
      *(counter) += copy_str(1000, str, copy, j);
  } else {
    if (specifiers.width != -1)
      *(counter) += copy_str_c(specifiers.width, str, copy, j);
    else
      *(counter) += copy_str_c(1000, str, copy, j);
  }
  read_c(copy, &i, string);
  if (specifiers.width == 0 || specifiers.width < -1) k = 0;
  return k;
}

int read_p(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  int k = 0;
  if (*(str + *j) == '0' && (*(str + *j + 1) == 'X' || *(str + *j + 1) == 'x'))
    (*j) += 2;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
      long p_str;
    if (specifiers.width != -1) {
      char copy[256];
      copy_str(specifiers.width, str, copy, j);
      int i = 0;
      p_str = hex_number(copy, &i, counter);
    } else {
      p_str = hex_number(str, j, counter);
    }
    void** p = va_arg(*string, void**);
    *p = (void**)(0x0 + p_str);
    k = 1;
  }
  return k;
}

int read_x(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  long x_str = 0;
  int k = 1;
  if (*(str + *j) == '-' || *(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      *(counter) += copy_str(specifiers.width, str, copy, j);
      int i = 0;
      x_str = hex_number(copy, &i, counter);
    } else {
      x_str = hex_number(str, j, counter);
    }
  }
  if (write_int_unsign(x_str, string) != 1) k = 0;
  return k;
}

int read_u(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  long u_str = 0;
  int k = 1;
  if (*(str + *j) == '-' || *(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      copy_str(specifiers.width, str, copy, j);
      int i = 0;
      u_str = read_i_convert(copy, &i, counter);
    } else {
      u_str = read_i_convert(str, j, counter);
    }
  }
  if (write_int_unsign(u_str, string) != 1) k = 0;
  return k;
}

int read_o(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  long o_str = 0;
  int k = 1;
  if (*(str + *j) == '-' || *(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      copy_str(specifiers.width, str, copy, j);
      int i = 0;
      o_str = oct_number(copy, &i, counter);
    } else {
      o_str = oct_number(str, j, counter);
    }
  }
  if (write_int(o_str, string) != 1) k = 0;
  return k;
}

int read_i(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  int sign = 1, k = 1;
  long i_str = 0;
  if (*(str + *j) == '-') {
    sign = -1;
    (*j)++;
  }
  if (*(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      copy_str(specifiers.width, str, copy, j);
      int i = 0;
      i_str = read_i_convert(copy, &i, counter);
    } else {
      i_str = read_i_convert(str, j, counter);
    }
    i_str *= sign;
  }
  if (write_int(i_str, string) != 1) k = 0;
  return k;
}

int read_f(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  int sign = 1, k = 1;
  long double f_str = 0;
  if (*(str + *j) == '-') {
    sign = -1;
    (*j)++;
  }
  if (*(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    k = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      copy_str(specifiers.width, str, copy, j);
      int i = 0;
      f_str = read_f_convert(copy, &i, counter);
    } else {
      f_str = read_f_convert(str, j, counter);
    }
    f_str *= sign;
  }
  if (write_float(f_str, string) != 1) k = 0;
  return k;
}

long double read_f_convert(const char* str, int* j, int* counter) {
  long double res = number(str, j);
  (*counter) += count(res);
  if (*(str + *j) == '.') {
    (*j)++;
    (*counter)++;
    long double k = 0.1;
    while (numb(str + *j)) {
      res += k * (*(str + *j) - '0');
      k *= 0.1;
      (*j)++;
      (*counter)++;
    }
  }
  if (*(str + *j) == 'e' || *(str + *j) == 'E') {
    if (*(str + *j) == '-' || *(str + *j) == '+') {
      char c = *(str + *j);
      (*j)++;
      (*counter)++;
      int pow = number(str, j), i = 1;
      while (pow > 0) {
        i *= 10;
        pow--;
      }
      if (c == '+')
        res *= i;
      else if (c == '-')
        res /= i;
    }
  }
  return res;
}

int write_float(long double d_str, va_list* string) {
  int res = 0;
  if (specifiers.length == 'e') {
    float* result = va_arg(*string, float*);
    *result = d_str;
  } else if (specifiers.length == 'L') {
    long double* result = va_arg(*string, long double*);
    *result = d_str;
  } else {
    res = 1;
  }
  return res;
}

int read_i_convert(const char* str, int* j, int* counter) {
  long i_str;
  if (*(str + *j) == '0' &&
      (*(str + *j + 1) == 'X' || *(str + *j + 1) == 'x')) {
    i_str = hex_number(str, j, counter);
  } else if (*(str + *j) == '0') {
    i_str = oct_number(str, j, counter);
  } else {
    i_str = number(str, j);
    (*counter) += count(i_str);
  }
  return i_str;
}

int count(int p) {
  int res = 0;
  while (p > 0) {
    res++;
    p /= 10;
  }
  return res;
}

int read_d(const char* str, int* j, va_list* string, int* counter) {
  int i = 1;
  skip(str, j, counter);
  int sign = 1;
  long d_str = 0;
  if (*(str + *j) == '-') {
    sign = -1;
    (*j)++;
  }
  if (*(str + *j) == '+') (*j)++;
  if (specifiers.width == 0 || specifiers.width < -1) {
    i = 0;
  } else {
    if (specifiers.width != -1) {
      char copy[256];
      (*counter) += copy_str(specifiers.width, str, copy, j);
      int k = 0;
      d_str = number(copy, &k);
    } else {
      d_str = number(str, j);
      (*counter) += count(d_str);
    }
    d_str *= sign;
  }
  if (write_int(d_str, string) != 1) i = 0;
  return i;
}

int write_int(long d_str, va_list* string) {
  int res = 0;
  if (specifiers.length == 'e') {
    int* result = va_arg(*string, int*);
    *result = d_str;
  } else if (specifiers.length == 'l') {
    long* result = va_arg(*string, long*);
    *result = d_str;
  } else if (specifiers.length == 'h') {
    short* result = va_arg(*string, short*);
    *result = d_str;
  } else {
    res = 1;
  }
  return res;
}

int write_int_unsign(long d_str, va_list* string) {
  int res = 0;
  if (specifiers.length == 'e') {
    unsigned int* result = va_arg(*string, unsigned int*);
    *result = d_str;
  } else if (specifiers.length == 'l') {
    unsigned long* result = va_arg(*string, unsigned long*);
    *result = d_str;
  } else if (specifiers.length == 'h') {
    unsigned short* result = va_arg(*string, unsigned short*);
    *result = d_str;
  } else {
    res = 1;
  }
  return res;
}

int copy_str(const int width, const char* str, char* copy, int* j) {
  int k;
  for (k = 0; k < width && *(str + *j) != '\0' && *(str + *j) != ' ';
       ++k, (*j)++)
    copy[k] = *(str + *j);
  copy[k] = '\0';
  return k - 1;
}

int copy_str_c(const int width, const char* str, char* copy, int* j) {
  int k;
  for (k = 0; k < width && *(str + *j) != '\0'; ++k, (*j)++)
    copy[k] = *(str + *j);
  copy[k] = '\0';
  return k - 1;
}

int read_c(const char* str, const int* j, va_list* string) {
  int res = 0;
  if (specifiers.length == 'l') {
    wchar_t* ch = va_arg(*string, wchar_t*);
    int i;
    for (i = 0; *(str + *j + i) != '\0'; ++i) ch[i] = str[*j + i];
    if (specifiers.spec == 's') ch[i] = '\0';
  } else if (specifiers.length == 'e') {
    char* ch = va_arg(*string, char*);
    int i = 0;
    for (i = 0; *(str + *j + i) != '\0'; ++i) ch[i] = str[*j + i];
    if (specifiers.spec == 's') ch[i] = '\0';
  } else {
    res = 1;
  }
  return res;
}

int read_c_pr(const char* str, int* j, va_list* string, int* counter) {
  skip(str, j, counter);
  if (specifiers.length == 'l') {
    wchar_t* ch = va_arg(*string, wchar_t*);
    *ch = *(str + *j);
    (*j)++;
  } else {
    char* ch = va_arg(*string, char*);
    *ch = *(str + *j);
    (*j)++;
  }
  if (*(str + *j - 1) == '%') {
    (*counter)++;
  }
  return 0;
}

int hex(const char* str) {
  return ((*str >= '0' && *str <= '9') || (*str >= 'a' && *str <= 'f') ||
          (*str >= 'A' && *str <= 'F'));
}

int oct(const char* str) { return (*str >= '0' && *str <= '7'); }
int numb(const char* str) { return (*str >= '0' && *str <= '9'); }
int length(const char* str) {
  return (*str == 'L' || *str == 'l' || *str == 'h');
}

int hex_len(const char* str, const int* i) {
  int res = 0;
  while (hex(str + *i + res)) res++;
  return res;
}

int oct_len(const char* str, const int* i) {
  int res = 0;
  while (oct(str + *i + res)) res++;
  return res;
}

int oct_number(const char* str, int* i, int* counter) {
  int res = 0, octe = 1;
  (*i)++;
  int len = oct_len(str, i) - 1;
  while (len >= 0) {
    res += (*(str + *i + len) - '0') * octe;
    octe *= 8;
    len--;
    (*counter)++;
  }
  (*i) += len;
  return res;
}

int hex_number(const char* str, int* i, int* counter) {
  int res = 0, hexe = 1;
  (*i) += 2;
  int len = hex_len(str, i) - 1;
  while (len >= 0) {
    if (numb(str + *i + len))
      res += (*(str + *i + len) - '0') * hexe;
    else if (*(str + *i + len) >= 'a' && *(str + *i + len) <= 'f')
      res += (*(str + *i + len) - 87) * hexe;
    else if (*(str + *i + len) >= 'A' && *(str + *i + len) <= 'F')
      res += (*(str + *i + len) - 55) * hexe;
    hexe *= 16;
    len--;
    (*counter)++;
  }
  (*i) += len;
  return res;
}

void skip(const char* str, int* i, int* counter) {
  while (*(str + *i) == ' ') {
    (*i)++;
    (*counter)++;
  }
}

int number(const char* str, int* i) {
  int res = 0;
  int k = 0;
  while (numb(str + *i)) {
    res *= 10;
    res += *(str + *i) - '0';
    (*i)++;
    k++;
  }
  if (k == 0) res = -1;
  return res;
}

int sscanf(const char* str, const char* format, ...) {
  va_list string;
  int counte = 0, c = 0;
  int j = 0;
  va_start(string, format);
  for (int i = 0; *(format + i) != '\0'; ++i) {
    if (*(format + i) == '%') {
      fill((char*)(format), &string, &i);
      c += read(str, &j, &string, &counte);
    }
  }
  va_end(string);
  return c;
}

void pfill(char* str, va_list* string, int* i) {
  (*i)++;
  if (flag(str + *i)) {
    specifiers.flag = *(str + *i);
    (*i)++;
  } else {
    specifiers.flag = 'e';
  }
  param(&(specifiers.width), str, string, i);
  if (*(str + *i) == '.') {
    (*i)++;
    param(&(specifiers.acc), str, string, i);
  } else {
    specifiers.acc = -1;
  }
  if (length(str + *i)) {
    (specifiers).length = *(str + *i);
    (*i)++;
  } else {
    (specifiers).length = 'e';
  }
  (specifiers).spec = *(str + *i);
  if (*(str + *i) == 'c' && (specifiers).width == -1)
    (specifiers).width = 1;
  else if ((*(str + *i) == 'e' || *(str + *i) == 'E' || *(str + *i) == 'f' ||
            *(str + *i) == 'g' || *(str + *i) == 'G') &&
           ((specifiers).acc == -1))
    (specifiers).acc = 6;
}

void param(int* d, char* str, va_list* string, int* i) {
  int sign = 1;
  if (*(str + *i) == '-') {
    sign = -1;
    (*i)++;
  } else if (*(str + *i) == '+') {
    (*i)++;
  }
  *d = sign * number(str, i);
  if (*(str + *i) == '*') {
    *d = va_arg(*string, int);
    (*i)++;
  }
}

int read_sprintf(char* str, int* j, va_list* string, int counter) {
  int r = 0;
  if (specifiers.spec == 'c')
    r = pread_c(str, j, string);
  else if ((specifiers.spec == 'd') || (specifiers.spec == 'i'))
    r = pwrite_int(str, j, string);
  else if ((specifiers.spec == 'f') || (specifiers.spec == 'g') ||
           (specifiers.spec == 'G') || (specifiers.spec == 'e') ||
           (specifiers.spec == 'E'))
    r = pwrite_float(str, j, string);
  else if (specifiers.spec == 's')
    r = pread_s(str, j, string);
  else if ((specifiers.spec == 'x') || (specifiers.spec == 'X') ||
           (specifiers.spec == 'o') || (specifiers.spec == 'u'))
    r = pwrite_int_unsign(str, j, string);
  else if (specifiers.spec == 'n')
    pread_n(str, j, counter);
  else if (specifiers.spec == '%')
    r = pread_c_pr(str, j);
  return r;
}

void pread_n(char* str, int* j, int count) {
  char copy[256];
  int len = len_int(count);
  pcopy_int(copy, count);
  flag_read_int(str, j, copy, count, &len);
}

int pread_s(char* str, int* j, va_list* string) {
  char copy[256];
  int i = 0;
  if (specifiers.length == 'l') {
    wchar_t* ch = va_arg(*string, wchar_t*);
    if (specifiers.acc != -1) {
      for (i = 0; *(ch + i) != '\0' && i < specifiers.acc; ++i) copy[i] = ch[i];
      copy[i] = '\0';
    } else {
      for (i = 0; *(ch + i) != '\0'; ++i) copy[i] = ch[i];
      copy[i] = '\0';
    }
  } else if (specifiers.length == 'e') {
    char* ch = va_arg(*string, char*);
    if (specifiers.acc != -1) {
      for (i = 0; *(ch + i) != '\0' && i < specifiers.acc; ++i) copy[i] = ch[i];
      copy[i] = '\0';
    } else {
      for (i = 0; *(ch + i) != '\0'; ++i) copy[i] = ch[i];
      copy[i] = '\0';
    }
  }
  if (specifiers.flag == '-') {
    flag_read_minus(str, j, copy, &i);
  } else if (specifiers.flag == '0') {
    flag_read_zero(str, j, copy, &i);
  } else {
    flag_read(str, j, ' ', &i);
    pcopy_str(str, j, copy);
  }
  return i;
}

int pread_x_o(char* str, int* j, long res, int base) {
  char copy[256], copy1[256];
  ltoaa(res, copy, base);
  int len = strlen(copy), l = 0;
  if (len >= specifiers.acc && res != 0) {
    pcopy_str(copy1, &l, copy);
  } else {
    int k = 0;
    int r = specifiers.acc - len;
    while (r - k > 0) {
      copy1[k] = '0';
      ++k;
    }
    pcopy_str(copy1, &k, copy);
    len += r;
  }
  if (specifiers.flag == '-') {
    flag_read_minus(str, j, copy1, &len);
    len--;
  } else if (specifiers.flag == '#') {
    flag_read_spec(str, j, copy1, &len, base);
    // len--;
  } else {
    flag_read(str, j, ' ', &len);
    pcopy_str(str, j, copy1);
  }
  flag_read(str, j, ' ', &len);
  return len;
}

void ltoaa(long value, char* buffer, int base) {
  if (value < 0) value *= -1;
  int i = 0;
  while (value) {
    int r = value % base;
    if (r >= 10) {
      buffer[i++] = 65 + (r - 10) + ('X' - specifiers.spec);
    } else {
      buffer[i++] = 48 + r;
    }
    value = value / base;
  }
  if (i == 0) {
    buffer[i++] = '0';
  }
  buffer[i] = '\0';
  reverse(buffer, 0, i - 1);
}

char* reverse(char* buffer, int i, int j) {
  while (i < j) {
    swapp(&buffer[i++], &buffer[j--]);
  }
  return buffer;
}

void swapp(char* x, char* y) {
  char t = *x;
  *x = *y;
  *y = t;
}

int pread_e(char* copy, int* p, long double res) {
  int k;
  int len;
  if (res < 0) res *= -1;
  if (res >= 1.0 || res * -1.0 >= 1.0) {
    k = 1;
    while (res / 10 >= 1.0) {
      (*p)++;
      res /= 10;
    }
  } else {
    k = -1;
    while (res < 1.0) {
      (*p)++;
      res *= 10;
    }
  }
  len = copy_f(copy, res);
  while (specifiers.acc - len > 0) {
    copy[len] = '0';
    ++len;
  }
  if (specifiers.spec == 'e' || specifiers.spec == 'E')
    copy[len] = specifiers.spec;
  else if (specifiers.spec == 'g')
    copy[len] = 'e';
  else if (specifiers.spec == 'G')
    copy[len] = 'E';
  ++len;
  if (k >= 0)
    copy[len] = '+';
  else
    copy[len] = '-';
  len++;
  if (*(p) >= 10) {
    copy[len] = '0' + *(p) / 10;
    ++len;
    copy[len] = '0' + (*p) % 10;
    ++len;
  } else {
    copy[len] = '0';
    ++len;
    copy[len] = '0' + *p;
    ++len;
  }
  copy[len] = '\0';
  (len)++;
  return len - 1;
}

int pread_f(char* str, int* j, long double res) {
  char copy[256];
  int len, p = 0, k = len_int((int)res), sign = 1;
  if (res < 0) sign = -1;
  if (specifiers.spec == 'f') {
    len = copy_f(copy, res);
    while (specifiers.acc - (len - k - 1) > 0) {
      copy[len] = '0';
      ++len;
    }
    copy[len] = '\0';
  } else if ((specifiers.spec == 'E') || (specifiers.spec == 'e')) {
    len = pread_e(copy, &p, res);
  } else {
    len = pread_e(copy, &p, res);
    if (!(p < -4 || p >= specifiers.acc)) {
      len = copy_f(copy, res);
      len--;
      while (specifiers.acc - (len + 1) > 0) {
        copy[len] = '0';
        ++len;
      }
      copy[len] = '\0';
    }
  }
  if (specifiers.flag == '+')
    flag_read_plus_space(str, j, copy, sign, &len, 0);
  else if (specifiers.flag == '-')
    flag_read_minus_int(str, j, copy, sign, &len);
  else if (specifiers.flag == ' ')
    flag_read_plus_space(str, j, copy, sign, &len, 1);
  else if (specifiers.flag == '#')
    flag_read_spec_float(str, j, copy, sign, &len);
  else if ((specifiers.acc <= 6) && (specifiers.flag == '0'))
    flag_read_zero_int(str, j, copy, sign, &len);
  else
    flag_read_int(str, j, copy, sign, &len);
  return len - 1;
}

void flag_read_spec_float(char* str, int* j, char* copy, int res, int* len) {
  if (res < 0) (*len)++;
  flag_read(str, j, ' ', len);
  if (res < 0) {
    str[*j] = '-';
    (*j)++;
  }
  pcopy_str(str, j, copy);
  (*len)++;
  if (!flag_pount(copy)) {
    str[*j] = '.';
    (*j)++;
    str[*j] = '\0';
  }
}

int flag_pount(const char* copy) {
  int j = 0;
  for (int i = 0; copy[i] != '\0'; ++i)
    if (copy[i] == '.') j = 1;
  return j;
}

int copy_f(char* copy, long double res) {
  int len = len_int(res);
  int k = (int)res;
  if (res < 0) {
    res *= -1;
    k *= -1;
  }
  pcopy_int(copy, k);
  copy[len] = '.';
  len++;
  int l = 0;
  while (res >= 0 && l < specifiers.acc) {
    l++;
    res *= 10;
    k = (int)res % 10;
    copy[len] = k + '0';
    len++;
  }
  return len;
}

int pwrite_float(char* str, int* j, va_list* string) {
  long double d_str = 0.0;
  long double result = (long double)va_arg(*string, double);
  d_str = result;
  return pread_f(str, j, d_str);
}

int pread_d(char* str, int* j, int res) {
  char copy[256];
  int len = len_int(res);
  if (len >= specifiers.acc && res != 0) {
    pcopy_int(copy, res);
  } else {
    int k = 0;
    int r = specifiers.acc - len;
    while (r - k > 0) {
      copy[k] = '0';
      ++k;
    }
    pcopy_int(copy + r, res);
    len += r;
  }
  if (specifiers.flag == '+')
    flag_read_plus_space(str, j, copy, res, &len, 0);
  else if (specifiers.flag == '-')
    flag_read_minus_int(str, j, copy, res, &len);
  else if (specifiers.flag == ' ')
    flag_read_plus_space(str, j, copy, res, &len, 1);
  else if ((specifiers.flag == '0') && (specifiers.acc == -1))
    flag_read_zero_int(str, j, copy, res, &len);
  else
    flag_read_int(str, j, copy, res, &len);
  return len - 1;
}

int pread_i(char* str, int* j, int res) {
  char copy1[256];
  pcopy_int(copy1, res);
  int i = 0;
  int n = number(copy1, &i);
  if (res < 0) n *= -1;
  return pread_d(str, j, n);
}

void flag_read_spec(char* str, int* j, char* copy, int* len, int base) {
  (*len) += 2;
  while (specifiers.width - *len > 0) {
    str[*j] = ' ';
    (*j)++;
    (*len)++;
  }
  str[*j] = '0';
  (*j)++;
  if (base == 16) {
    str[*j] = specifiers.spec;
    (*j)++;
  }
  pcopy_str(str, j, copy);
}

void flag_read_minus_int(char* str, int* j, char* copy, int res, int* len) {
  if (res < 0) {
    str[*j] = '-';
    (*j)++;
    (*len)++;
  }
  flag_read_minus(str, j, copy, len);
}

void flag_read_minus(char* str, int* j, char* copy, int* len) {
  pcopy_str(str, j, copy);
  flag_read(str, j, ' ', len);
  str[*j] = '\0';
  (*len)++;
}

void flag_read(char* str, int* j, char c, int* len) {
  while (specifiers.width - *len > 0) {
    str[*j] = c;
    (*j)++;
    (*len)++;
  }
}

void flag_read_zero_int(char* str, int* j, char* copy, int res, int* len) {
  if (res < 0) {
    str[*j] = '-';
    (*j)++;
    (*len)++;
  }
  flag_read_zero(str, j, copy, len);
}

void flag_read_zero(char* str, int* j, char* copy, int* len) {
  flag_read(str, j, '0', len);
  pcopy_str(str, j, copy);
  (*len)++;
}

void flag_read_int(char* str, int* j, char* copy, int res, int* len) {
  if (res < 0) (*len)++;
  flag_read(str, j, ' ', len);
  if (res < 0) {
    str[*j] = '-';
    (*j)++;
  }
  pcopy_str(str, j, copy);
  (*len)++;
}

void flag_read_plus_space(char* str, int* j, char* copy, int res, int* len,
                          int indic) {
  (*len)++;
  flag_read(str, j, ' ', len);
  if (res >= 0 && indic == 0)
    str[*j] = '+';
  else if (res >= 0 && indic == 1)
    str[*j] = ' ';
  else
    str[*j] = '-';
  (*j)++;
  pcopy_str(str, j, copy);
  (*len)++;
}

void pcopy_str(char* str, int* j, const char* copy) {
  for (int k = 0; copy[k] != '\0'; ++k, (*j)++) str[*j] = copy[k];
  str[*j] = '\0';
}

void pcopy_int(char* copy, int res) {
  int k = len_int(res), j = 0;
  if (res < 0) res *= -1;
  for (int i = poww(10, k - 1); i > 0; i /= 10, ++j) {
    copy[j] = res / i + '0';
    res = res % i;
  }
  copy[j] = '\0';
}

int len_int(int res) {
  int k = 0;
  if (res == 0) k = 1;
  if (res < 0) res *= -1;
  while (res > 0) {
    res /= 10;
    k++;
  }
  return k;
}

int poww(int j, int p) {
  int k = j;
  if (p == 0) {
    j = 1;
  } else if (p != 1) {
    p--;
    while (p > 0) {
      j *= k;
      p--;
    }
  }
  return j;
}

int pwrite_int(char* str, int* j, va_list* string) {
  int res = 0;
  long d_str = 0;
  if (specifiers.length == 'e') {
    int result = va_arg(*string, int);
    d_str = result;
  } else if (specifiers.length == 'l') {
    long result = (long)va_arg(*string, int);
    d_str = result;
  } else if (specifiers.length == 'h') {
    short result = (short)va_arg(*string, int);
    d_str = result;
  }
  if (specifiers.spec == 'd')
    res = pread_d(str, j, d_str);
  else
    res = pread_i(str, j, d_str);
  return res;
}

int pwrite_int_unsign(char* str, int* j, va_list* string) {
  int res = 0;
  long d_str = 0;
  if (specifiers.length == 'e') {
    unsigned int result = (unsigned int)va_arg(*string, int);
    d_str = result;
  } else if (specifiers.length == 'l') {
    unsigned long result = (unsigned long)va_arg(*string, int);
    d_str = result;
  } else if (specifiers.length == 'h') {
    unsigned short result = (unsigned short)va_arg(*string, int);
    d_str = result;
  }
  if ((specifiers.spec == 'X') || (specifiers.spec == 'x'))
    res = pread_x_o(str, j, d_str, 16);
  else if (specifiers.spec == 'o')
    res = pread_x_o(str, j, d_str, 8);
  else
    res = pread_x_o(str, j, d_str, 10);
  return res;
}

int pread_c(char* str, int* j, va_list* string) {
  char c = '\0';
  char copy[256];
  int len = 2;
  if (specifiers.length == 'l') {
    wchar_t ch = (wchar_t)va_arg(*string, int);
    c = ch;
  } else if (specifiers.length == 'e') {
    char ch = (char)va_arg(*string, int);
    c = ch;
  }
  copy[0] = c;
  copy[1] = '\0';
  if (specifiers.flag == '-') {
    flag_read_minus(str, j, copy, &len);
  } else if (specifiers.flag == '0') {
    flag_read_zero(str, j, copy, &len);
  } else {
    flag_read(str, j, ' ', &len);
    pcopy_str(str, j, copy);
  }
  return len - 1;
}

int pread_c_pr(char* str, int* j) {
  int k = 1;
  *(str + *j) = '%';
  (*j)++;
  *(str + *j) = '\0';
  return k;
}

int flag(const char* str) {
  return (*str == '-' || *str == '+' || *str == ' ' || *str == '#' ||
          *str == '0');
}

int sprintf(char* str, const char* format, ...) {
  va_list string;
  int counte = 0;
  int j = 0;
  va_start(string, format);
  for (int i = 0; *(format + i) != '\0'; ++i) {
    if (*(format + i) == '%') {
      pfill((char*)(format), &string, &i);
      counte += read_sprintf(str, &j, &string, counte);
    }
  }
  va_end(string);
  return counte;
}
