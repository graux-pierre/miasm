
typedef struct {
	uint32_t exception_flags;

	/* gpregs */
	uint32_t R0;
	uint32_t R1;
	uint32_t R2;
	uint32_t R3;
	uint32_t R4;
	uint32_t R5;
	uint32_t R6;
	uint32_t R7;
	uint32_t R8;
	uint32_t R9;
	uint32_t R10;
	uint32_t R11;
	uint32_t R12;
	uint32_t SP;
	uint32_t LR;
	uint32_t PC;

	/* eflag */
	uint32_t zf;
	uint32_t nf;
	uint32_t of;
	uint32_t cf;

}vm_cpu_t;



//#define RETURN_PC return PyLong_FromUnsignedLongLong(vmcpu->PC);
#define RETURN_PC return BlockDst;
