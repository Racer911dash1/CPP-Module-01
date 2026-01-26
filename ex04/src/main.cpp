#include <iostream>
#include <fstream>

bool check_infile(std::ifstream& infile, const std::string& name)
{
	infile.open(name);
	if (infile.good() == false)
	{
		if (infile.fail())
		{
			std::cerr	<< "Could not read \"" << name << "\"\n"
						<< "Make sure the file exists and has read permissions\n";
		}
		return false;
	}
	return true;
}

bool check_outfile(std::ofstream& outfile, const std::string& name)
{
	outfile.open(name, std::ios::out);
	if (outfile.good() == false)
	{
		if (outfile.fail())
		{
			std::cerr << "Could not open \"" << name << "\"\n";
		}
		return false;
	}
	return true;
}

void search_and_replace(const std::string& search, const std::string& replace, std::ifstream& infile, std::ofstream& outfile)
{
	std::string	line;
	std::size_t	idx;

	while (std::getline(infile, line))
	{
		idx = line.find(search);
		while (idx != std::string::npos)
		{
			line.erase(idx, search.length());
			line.insert(idx, replace);
			idx = line.find(search, replace.length() + idx);
		}
		outfile << line << "\n";
	}
}

int main(int argc, const char* argv[])
{
	std::string		name_infile;
	std::string		name_outfile;
	std::string		search;
	std::string		replace;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4)
	{
		std::cerr << "Usage: ./sed_is_for_losers <filename> <search> <replace>\n";
		return EXIT_FAILURE;
	}
	name_infile = argv[1];
	name_outfile = name_outfile + argv[1] + ".replace";
	search = argv[2];
	replace = argv[3];
	if (search.empty())
	{
		std::cerr << "Search cannot be empty\n";
		return EXIT_FAILURE;
	}
	if (check_infile(infile, name_infile) == false || check_outfile(outfile, name_outfile) == false)
	{
		return EXIT_FAILURE;
	}
	search_and_replace(search, replace, infile, outfile);
	return EXIT_SUCCESS;
}
