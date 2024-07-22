#include <iostream>
#include <fstream>
#include <string>
int main(int argc, char **argv){
    std::ifstream ifs{argv[1]};
    if(!ifs.is_open()){
        std::cout<<"open fail\n";
    }
    std::string buffer;
    double number;
    
    for(auto i=0;i<std::stoi(argv[2]);++i){
        ifs>>buffer;
        ifs>>buffer;
        ifs>>number;
        std::cout<<number<<" ";
    }
    return 0;
}
