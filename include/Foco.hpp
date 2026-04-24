#pragma once
#include <EstadoFoco.hpp>
#include <Usuario.hpp>

class Foco
{
    private:
    EstadoFoco estado;
    public:
    Foco() {}
    ~Foco() {}
    void Encender() {}
    void Apagar() {}
};