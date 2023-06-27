#include "cadastro.hpp"
#include <iostream>
#include <fstream>

void Registro::cadastrarCliente() {
    std::string senha, email, cnpj, nome;
    std::cout << "Digite o nome: ";
    std::cin >> nome;
    senha = validar_senha();
    
            std::cout << "Digite o email: ";
            std::cin >> email;
            std::cout << "Digite o cnpj: ";
            std::cin >> cnpj;
        
}


std::string Registro::validar_senha() {
    std::string senha;
    int contnumber;
    std::cout << "Digite Senha: ";

    while (true) {
     std::cin >> senha;
     contnumber = 0;
        for (char c : senha)    {
            if (std::isdigit (c)) contnumber++;
        }

        if (contnumber >= 2) {
            for (char c : senha){
                 if (isupper(c)) {
                  std::cout << "Senha Validada" << std::endl;
                  return senha;
                  break;
                }
            }
    }    else {
        std::cout << "Senha inválida, digite ao menos uma letra maiúscula e dois dígitos" << std::endl;
    }
    }
}


