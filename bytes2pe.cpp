#include <iostream>
#include<fstream>
#include "bytes2pe.h"
#include <vector>



bool bytes2pe(std::string filepath, std::vector<uint8_t> image)
{
	std::ofstream file(filepath, std::ios_base::out | std::ios_base::binary);
	if (!file.write((char*)image.data(), image.size()))
	{
		file.close();
		return false;
	}

	file.close();
	return true;
}

