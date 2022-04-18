#ifndef Files_h
#define Files_h

class Files{

    public:
    std::string filename;
    std::string line;
    std::string code;
    void set_filename(std::string filename);
    void set_line(std::string filename);
    std::string get_filename();
    std::string get_line();
    std::string read(std::string filename,std::string line, std::string code);
    

};
#endif