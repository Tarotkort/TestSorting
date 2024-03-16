#include "pch.h"
#include "SortingLib.h"

#include <filesystem>

namespace fs = std::filesystem;

void move_file(const std::string& From, const std::string& To)
{
	std::filesystem::copy_file(From, To);
	std::filesystem::remove(From);
}

void create_dir(const std::string& Path)
{
	std::filesystem::create_directories(Path);
}