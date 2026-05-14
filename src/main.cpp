#include <iostream>
#include <Foco.hpp>
#include <SerieFocos.hpp>

int main(int argc, char const *argv[])
{
    SerieFocos serie;
    serie.EncenderFocos();
    serie.MostrarFocos();
    serie.ApagarFocos();
    serie.MostrarFocos();

    return 0;
}
//int*dir;
//cout<<malloc(4)<<endl;