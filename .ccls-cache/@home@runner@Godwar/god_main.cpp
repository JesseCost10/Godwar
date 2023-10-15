#include <iostream>
#include <string>
#include "god.h"

int main() {
    // Criando objetos não-const de Personagem e Habilidade
    Personagem kratos("Kratos", 10);
    Habilidade espadaDeFogo("Espada de Fogo", 5);

    // Usando métodos e setters
    kratos.setNome("Kratos, o Deus da Guerra");
    kratos.setNivel(20);

    kratos.mostrarStatus();
    kratos.adquirirHabilidade(espadaDeFogo);

    // Criando objetos const de Personagem e Habilidade
    const Personagem atreus("Atreus", 8);
    const Habilidade arco("Arco de Ébano", 3);

    // Tentativa de usar métodos setters em objetos const
    // Isso gerará um erro de compilação
    // atreus.setNome("Atreus, o Arqueiro");
    // atreus.setNivel(12);

    atreus.mostrarStatus();
    atreus.adquirirHabilidade(arco);

    return 0;
}

int main() {
    Deuses kratos;

    Utensilios machado("Machado Leviatã ", 50, 100.0, 5);

    Jornada jornada("Kratos e atreus vão realizar o ultimo desejo de Freya: Jogar as sua cinzas do ponto mais Alto de todos os reinos","Machado Leviatã , Laminas do caos, runas de vida, anões, entre outros itens irão ajudar Kratos e Atreus a Cumprir a Jonada.");

    kratos.setMoedas(50.0);

    std::cout << "Nome do Deus: " << kratos.getNome() << std::endl;
    std::cout << "Vida do Deus: " << kratos.getVida() << std::endl;
    std::cout << "Moedas do Deus: " << kratos.getMoedas() << std::endl;
    std::cout << "Dano do Deus: " << kratos.getDano() << std::endl;
    std::cout << "Poder do Deus: " << kratos.getPoder() << std::endl;

    std::cout << "Nome do Utensílio/Arma: " << machado.getNome() << std::endl;
    std::cout << "Dano do Utensílio/Arma: " << machado.getDano() << std::endl;
    std::cout << "Preço do Utensílio/Arma: " << machado.getPreco() << std::endl;
    std::cout << "Nível do Jogo necessário: " << machado.getNivelJogo() << std::endl;

    jornada.imprimirInformacoes();

    return 0;
}