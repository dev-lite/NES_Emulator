#pragma once
class Bus;

enum StatusBits {
	N = (1 << 7);      // Negative
	V = (1 << 6);      // Overflow
	X = (1 << 5);      // Unused bit
	B = (1 << 4);      // BRK command
	D = (1 << 3);      // Decimal mode
	I = (1 << 2);      // IRQ disable
	Z = (1 << 1);      // Zero
	C = 1;             // Carry
};

uint8_t statusRegister = 0x00;     // Status register
uint8_t accumulator = 0x00;        // Accumulator register
uint8_t yRegister = 0x00;          // Index register Y
uint8_t xRegister = 0x00;          // Index register X
uint8_t SPointer = 0x00;           // Stack pointer
uint16_t PC = 0x0000;              // Program Counter