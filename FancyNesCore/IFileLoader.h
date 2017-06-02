#pragma once

#include "FileInfo.h"

class IFileLoader
{
public:
	IFileLoader() = default;
	virtual ~IFileLoader() = default;

	virtual FileInfo Load(const std::string& filename) const = 0;
};

