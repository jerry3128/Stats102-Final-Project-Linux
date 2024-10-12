#include <cstdio>
#include <cstdarg>
int main() {
char buf[256]; va_list args; __builtin_vsnprintf (buf,256,"", args);
return 0; }