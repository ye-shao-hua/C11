#include <iostream>
#include <string>
#include <fstream>
int main(int argc , char **argv){
    if(argc<6){
        std::cout<<"input argument orderly(inputfile1,inputfile2,outputfile,inputfile1's number,inputfile2's number):\n";
        return 0;
    }else{
        std::ifstream ifs1{argv[1]};
        std::ifstream ifs2{argv[2]};
        std::ofstream ofs{argv[3]};
        double number;
        while(!ifs1.eof()){
            for(auto i=0;i<std::stoi(argv[4]);++i){
                ifs1>>number;
                ofs<<number;
                ofs<<"\t ";
            }
            for(auto i=0;i<std::stoi(argv[5]);++i){
                ifs2>>number;
                ofs<<number;
                ofs<<"\t ";
            }
            ofs<<"\n";
        }
        ifs1.close();
        ifs2.close();
        ofs.close();
        return 0;
    }
}
