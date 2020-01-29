#include <stddef.h>
#include <stdint.h>

typedef uint64_t Address;

class Program{
	Address data;
	Address text;
	Address bss;
	Address heap;
	Address stack;
};
