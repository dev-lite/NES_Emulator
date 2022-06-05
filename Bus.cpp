/* Emulates the functionality of the buses within the NES console.
* CPU has 16-bit address bus
* Major connected devices include the CPU and 2KB RAM (0x0000 - 0x07FF)
* Mirrors? (0x0800 - 0x1FFF)
* PPU registers (0x2000 - 0x2007)
* Mirrors (0x2008 - 0x3FFF)
* APU and I/O (0x4000 - 0x4017)
* Disabled APU and I/O functionality (0x4018 - 0x401F)
* Cartridge space: PRG ROM, PRG RAM, mappers (0x4020 - oxFFFF)
*/ 