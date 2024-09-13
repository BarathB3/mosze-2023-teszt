<<<<<<< HEAD
#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS]; // Az "NELEMENTS" hibásan van írva, a helyes változónév "N_ELEMENTS"
    std::cout << '1-100 ertekek duplazasa' // Az egyes idézõjelek helytelenek. A karakterláncokat dupla idézõjelekbe kell tenni.
    for (int i = 0;) // for (int i = 0; i < N_ELEMENTS; i++).
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++) // for (int i = 0; i < N_ELEMENTS; i++).
    {
        std::cout << "Ertek:" // pontosvesszõ hiánya
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag; // Az "atlag" változó nem inicializált
    for (int i = 0; i < N_ELEMENTS, i++) // vesszõ (,) helyett pontosvesszõ (;) kellene.
    {
        atlag += b[i] //A sor végi pontosvesszõ hiányzik.
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;

}
=======



#include <iostream>

constexpr int N_ELEMENTS = 100;

int main()
{
    int *b = new int[NELEMENTS];
    std::cout << '1-100 ertekek duplazasa'
    for (int i = 0;)
    {
        b[i] = i * 2;
    }
    for (int i = 0; i; i++)
    {
        std::cout << "Ertek:"
    }
    std::cout << "Atlag szamitasa: " << std::endl;
    int atlag;
    for (int i = 0; i < N_ELEMENTS, i++)
    {
        atlag += b[i]
    }
    atlag /= N_ELEMENTS;
    std::cout << "Atlag: " << atlag << std::endl;
    return 0;
}

>>>>>>> 0f09f55e49b3cd01710d23988bc0d018b6e8465d
