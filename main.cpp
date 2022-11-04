#include <iostream>
#include <fstream>
#include "bytes2pe.h"
#include "bytes.hpp"

int main()
{ 
	// put your bytes of the PE file in bytes.h, you can get the bytes of your file by looking at this repo : https://github.com/danielkrupinski/PE2HEX
	// for now im just putting helloworld.exe in bytes.h
	std::string outputfilename = "helloworld.exe"; // your filename goes here, make sure to include the file extension :)

	// this is where we attempt to write the data to your desired name/filepath
	if (!bytes2pe(outputfilename, raw_image))
	{
		// doing some error handling to make sure data wrote correctly, if it did then it will skip this part
		std::cout << "Failed to write data, make sure your data header is valid along with the file path doesnt require admin perms!";
		system("pause >nul");
		exit(0);
	}

	// success message
	std::cout << "File written successfully at dir " + outputfilename + "!";
	system("pause >nul");
	
}

