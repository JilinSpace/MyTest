    
#include <iostream>
#include <fstream>
#include <string>

std::string get_file_content(std::string file_path)
{
	std::ifstream in(file_path.c_str(), std::ios::binary);

    std::ostringstream tmp;
    tmp << in.rdbuf();

    script = tmp.str();

    in.close();
}

int main()
{

}
