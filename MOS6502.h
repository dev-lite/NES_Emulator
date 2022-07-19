#pragma once
class Bus;

class MOS6502 {

	enum StatusBits {
	N = (1 << 7);        // Negative
	V = (1 << 6);        // Overflow
	X = (1 << 5);        // Unused bit
	B = (1 << 4);        // BRK command
	D = (1 << 3);        // Decimal mode
	I = (1 << 2);        // IRQ disable
	Z = (1 << 1);        // Zero
	C = 1;               // Carry
	};

	uint8_t statusReg = 0x00;          // Status register
	uint8_t accumulator = 0x00;        // Accumulator register
	uint8_t yReg = 0x00;               // Index register Y
	uint8_t xReg = 0x00;               // Index register X
	uint8_t sp = 0x00;                 // Stack pointer
	uint16_t pc = 0x0000;              // Program Counter

	// Addressing modes written as functions to decode instructions correctly
	uint8_t IMP();             // Implied addressing
	uint8_t ACC();             // Accumulator addressing
	uint8_t IMM();             // Immediate addressing
	uint8_t ABS();             // Absolute addressing
	uint8_t ZPA();             // Zero page Addressing
	uint8_t ABX();             // Absolute indexed addressing (X index register)
	uint8_t ABY();             // Absolute indexed addressing (Y index register)
	uint8_t ZPX();             // Zero page indexed addressing (X index register)
	uint8_t ZPY();             // Zero page indexed addressing (Y index register)
	uint8_t REL();             // Relative addressing
	//uint8_t ZIN();             // Zero page indexed indirect addressing
	//uint8_t AND();             // Absolute indexed indirect addressing
	uint8_t INX();             // Indirect X addressing
	uint8_t INY();             // Indirect Y addressing
	//uint8_t ZPG();             // Zero page indirect addressing
	uint8_t ABI();             // Absolute indirect addressing

	// Instruction set opcodes
	uint8_t ADC();	uint8_t AND();	uint8_t ASL();	uint8_t BCC();
	uint8_t BCS();	uint8_t BEQ();	uint8_t BIT();	uint8_t BMI();
	uint8_t BNE();	uint8_t BPL();	uint8_t BRK();	uint8_t BVC();
	uint8_t BVS();	uint8_t CLC();	uint8_t CLD();	uint8_t CLI();
	uint8_t CLV();	uint8_t CMP();	uint8_t CPX();	uint8_t CPY();
	uint8_t DEC();	uint8_t DEX();	uint8_t DEY();	uint8_t EOR();
	uint8_t INC();	uint8_t INX();	uint8_t INY();	uint8_t JMP();
	uint8_t JSR();	uint8_t LDA();	uint8_t LDX();	uint8_t LDY();
	uint8_t LSR();	uint8_t NOP();	uint8_t ORA();	uint8_t PHA();
	uint8_t PHP();	uint8_t PLA();	uint8_t PLP();	uint8_t ROL();
	uint8_t ROR();	uint8_t RTI();	uint8_t RTS();	uint8_t SBC();
	uint8_t SEC();	uint8_t SED();	uint8_t SEI();	uint8_t STA();
	uint8_t STX();	uint8_t STY();	uint8_t TAX();	uint8_t TAY();
	uint8_t TSX();	uint8_t TXA();	uint8_t TXS();	uint8_t TYA();

	void clock();	    // This is a clock.
	void irq();         // Interrupt request
	void nmi();         // Non-maskable interrupt. I will not be ignored, Dan.
	void reset();       // Reset. Self-explanatory. 6 clock cycles

};


