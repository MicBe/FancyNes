#pragma once

#include <cstdint>

class Cpu
{
public:
	Cpu();

private:
	struct Registers
	{
		uint16_t PC;
		uint16_t SP;
		uint8_t A;
		uint8_t X;
		uint8_t Y;
		uint8_t P;
	};
};

