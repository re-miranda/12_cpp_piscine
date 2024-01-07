#include <iostream>
#include <fstream>

void    my_replace( std::string *line, size_t pos, char *s1, char *s2){
    line->erase(pos, std::string(s1).length());
    line->insert(pos, s2);
    return ;
}

int main( int argc, char **argv ) {
    std::ifstream   infile;
    std::ofstream   outfile;
    std::string     line;

    if (argc != 4) {
        std::cout << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    infile.open(argv[1]);
    if (infile.fail()) {
        std::cout << "Failed to open file: " << argv[1] << std::endl;
        return (2);
    }
    if (std::string(argv[2]).compare(argv[3]) == 0)
        return (0);
    outfile.open("temp_file");
    if (outfile.fail()) {
        std::cout << "Failed to create temporary file" << std::endl;
        return (3);
    }
    while (std::getline(infile, line)) {
        while (line.find(argv[2], 0) != std::string::npos)
            my_replace(&line, line.find(argv[2], 0), argv[2], argv[3]);
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
    std::remove(argv[1]);
    std::rename("temp_file", argv[1]);
    return (0);
}

