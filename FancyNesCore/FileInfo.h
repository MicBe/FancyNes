#pragma once

#include <string>
#include <vector>

struct FileInfo
{
	FileInfo() : Loaded(false) {}
	std::string FileName;
	std::vector<uint8_t> Content;
	bool Loaded;
};

