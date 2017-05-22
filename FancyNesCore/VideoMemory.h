#pragma once

#include <cstdint>

class VideoMemory
{
private:
	static const int MEMORY_SIZE = 65536; // 0x10000
	uint8_t memory_[MEMORY_SIZE];
};

