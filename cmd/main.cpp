#include<iostream>

void print_usage(char* file_name)
{
  std::cout << "Usage: " << file_name << " file" << std::endl;
}

int main(int argc, char** argv)
{
  if(argc < 2)
    {
      print_usage(argv[0]);
      return -1;
    }
  else
    {
      std::cout << "Opening file " << argv[1] << std::endl;
    };
}
