#include <stdlib.h>
#include <stdio.h>
#include "minirisc.h"


minirisc_t* minirisc_new(uint32_t initial_PC, platform_t *platform)
{
	this -> PC = ;       // Program counter register
	this -> IR;       // Instruction register
	platform -> next_PC;  // Value used to update the PC after the exec stage
	platform -> regs[32]; // General purpose registers, r0 is hardwired to 0
	platform_t *platform; // The platform this core is connected to
	platform -> halt;     // Stop the emulator when other than 0
	platform -> error;    // 0 if no error, 1 if an error occured
}


void minirisc_free(minirisc_t *mr)
{
	// TODO
}


void minirisc_fetch(minirisc_t *mr)
{
	// TODO
}


void minirisc_decode_and_execute(minirisc_t *mr)
{
	// TODO
}


int minirisc_run(minirisc_t *mr)
{
	// TODO
}


