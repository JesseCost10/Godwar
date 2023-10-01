#include <iostream>
#include <string>
#include "god.h"

using namespace std;

std::string getNome() const { 
        return nome; }
    
    int getVida() const { return vida; }
    
    void setVida(int novaVida) { 
        vida = novaVida; }
    
    double getMoedas() const {
         return moedas; }
    
    void setMoedas(double novasMoedas) { 
        moedas = novasMoedas; }
   
    int getDano() const { 
        return dano; }
    
    double getPoder() const { 
        return poder; }

    // Classe utensilios

    std::string getNome() const { 
        return nome; 
        }
    
    int getDano() const { 
        return dano; 
        }
    
    double getPreco() const { 
        return preco; 
        }
    
    int getNivelJogo() const { 
        return nivelJogo; 
        }

    // Classe Jornada

     void imprimirInformacoes() const {
        std::cout << informacoes << std::endl;
    }

    // Classe Deuses (2)

    std::string getNome() const { 
        return nome; }
    
    int getVida() const { 
        return vida; }
    
    void setVida(int novaVida) { 
        vida = novaVida; }
    
    double getMoedas() const { 
        return moedas; }
    
    void setMoedas(double novasMoedas) { 
        moedas = novasMoedas; }
    
    int getDano() const { 
        return dano; }
    
    double getPoder() const { 
        return poder; }

     // Classe utensilios (2)

     std::string getNome() const { 
        return nome; 
        }
    
    int getDano() const { 
        return dano; 
        }
    
    double getPreco() const { 
        return preco; 
        }
    
    int getNivelJogo() const { 
        return nivelJogo; 
        } 
        
          