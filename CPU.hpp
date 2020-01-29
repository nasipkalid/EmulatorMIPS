#include <stdint.h>
typedef uint64_t Address;

class CPU {
    uint64_t r[32]; //General Purpose Registers
    uint64_t HI;
    uint64_t LO;
    uint64_t PC;
    uint8_t *RAM;
    void movb();
	void pushb(uint8_t byte);
	void pushw(uint16_t word);
	void pushd(uint32_t dword);
	void pushq(uint64_t qword);
	void syscall();
};
