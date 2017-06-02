#include "BaseFileLoader.h"

#include <fstream>

FileInfo BaseFileLoader::Load(const std::string& filename) const
{
	FileInfo fileInfo;
	fileInfo.FileName = filename;

	std::ifstream file(filename, std::ios::binary);

	if (!file.fail() && file.is_open())
	{
		std::copy(std::istreambuf_iterator<char>(file), std::istreambuf_iterator<char>(), back_inserter(fileInfo.Content));
		fileInfo.Loaded = true;
	}

	return fileInfo;
}
