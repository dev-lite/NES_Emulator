// NES used Ricoh 2A03 microprocessor, which is essentially a clone of the MOS 6502 microprocessor
// The zero page is the first 256 bytes of CPU's address space ($0000 - $00FF). MSB of ZP address is thus always $00

uint8_t IMP() {
	// parse instruction w/implied format
	// One byte. Operates on processor status register -- no operand
}

uint8_t ACC() {
	// parse instruction w/accumulator format
	// One byte. Operates on accumulator -- no operand
}

uint8_t IMM() {
	// parse instruction w/immediate format
	// Two bytes. Operates on embedded byte value -- opcode + embedded byte value
}

uint8_t ABS() {
	// parse instruction w/absolute format
	// Three bytes. Operates on 2-byte address -- opcode + address
}

uint8_t ZPA() {
	// parse instruction w/zero page format
	// Two bytes. Operates on 1-byte address -- opcode + address
}

uint8_t ABX() {
	// parse instruction w/absolute x format
	// Three bytes. Operates on 2-byte address -- opcode + address
	// Adds value in X register to specified address, so offset by X
	// i.e., LDA $027E, X       -- operates on address $(027E + X)
}

uint8_t ABY() {
	// parse instruction w/absolute y format
	// Three bytes. Operates on 2-byte address -- opcode + address
	// Adds value in Y register to specified address, so offset by Y
	// i.e., LDA $027E, Y       -- operates on address $(027E + Y)
}