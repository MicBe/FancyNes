#pragma once

#include "IFileLoader.h"

class BaseFileLoader : public IFileLoader
{
public:
	virtual FileInfo Load(const std::string& filename) const override;
};

