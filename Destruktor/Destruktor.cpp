#include <iostream>
using namespace std;

class angka {
private:
    int *arr;
    int panjang;
public:
    angka(int); //konstruktor
    ~angka(); //destruktor
    void cetakData();
    void isiData();
};
//definis member function

int main()
{
    std::cout << "Hello World!\n";
}
