#ifndef CADASTRO_H
#define CADASTRO_H

#include <string>

class Registro {
public:
    void cadastrarCliente();
    void cadastrarLoja();
    std::string validar_senha();
};

class Login {
public:
    bool autenticarCliente();
    bool autenticarLoja();
};

#endif