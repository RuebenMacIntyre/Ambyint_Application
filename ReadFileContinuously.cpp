// ReadFileContinuously.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <chrono>
#include <string>
#include <fstream>
#include <iostream>
#include <iomanip>
#include <io.h>
#include <Windows.h>
#include <stdio.h>

using namespace std;

int main()
{
	// read the data file and write to the output every 150 ms until the user hits Enter key
	bool exit = false;

	cout << "Hit the <ENTER> key to stop.\n";

	while (exit == false)
	{
		if (GetAsyncKeyState(VK_RETURN))
		{
			exit = true;
		}

		auto begin = chrono::high_resolution_clock::now();
		auto end = chrono::high_resolution_clock::now();
		auto dur = end - begin;
		auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();

		int counter = 0, sum = 0;

		std::ifstream data;
		data.open("data");

		// Continuously read the file line by line.  
		while (data.is_open() && !data.eof() && ms < 150)
		{
			std::string line = "";
			std::getline(data, line);
			int value = atoi(line.c_str());
			sum += value;

			counter++;
			end = chrono::high_resolution_clock::now();
			dur = end - begin;
			ms = std::chrono::duration_cast<std::chrono::milliseconds>(dur).count();
		}

		std::ofstream output, outputOld;
		output.open("output");
		output << "sum of " << counter << " lines read in " << ms << " milliseconds = " << sum;
		output.close();

		std::cout << "sum of " << counter << " lines read in " << ms << " milliseconds = " << sum << "\n";
		sum = 0;
	}

    return 0;
}

