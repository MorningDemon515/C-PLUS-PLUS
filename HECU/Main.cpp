#include <iostream>  
#include <vector>  
#include <stdio.h>  
#include <stdlib.h>  
#include <string.h>  
#include <fstream>
#include <sstream>

int main()  
{  
    std::string vsscode;
    std::ifstream vssfile;
    std::stringstream vssstream;

    vssfile.open("main.txt");
    vssstream << vssfile.rdbuf();
    vssfile.close();
    vsscode = vssstream.str();

   std::string str = vsscode;  
   char* c = new char[str.size() + 1];  
   strncpy_s(c, str.size() + 1, str.c_str(), str.size());  
   c[str.size()] = '\0';  

   for (int i = 0; i < str.size(); i++)  
   {  
       std::cout << c[i];  
   }  

   std::cout << std::endl;
   delete[] c;  
   system("pause");  
   return 0;  
}