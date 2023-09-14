#include <iostream>
#include <string>

class Deuses {
public:
    Deuses(std::string nome = "Kratos", int vida = 100, double moedas = 0.0, int dano = 200, double poder = 500.0)
        : nome(nome), vida(vida), moedas(moedas), dano(dano), poder(poder) {}

    Deuses(std::string nome, int vida, double moedas)
        : nome(nome), vida(vida), moedas(moedas), dano(200), poder(500.0) {}

    // Getters e setters
    std::string getNome() const { return nome; }
    int getVida() const { return vida; }
    void setVida(int novaVida) { vida = novaVida; }
    double getMoedas() const { return moedas; }
    void setMoedas(double novasMoedas) { moedas = novasMoedas; }
    int getDano() const { return dano; }
    double getPoder() const { return poder; }

private:
    std::string nome;
    int vida;
    double moedas;
    int dano;
    double poder;
};

class Utensilios {
public:
    Utensilios(std::string nome, int dano, double preco, int nivelJogo)
        : nome(nome), dano(dano), preco(preco), nivelJogo(nivelJogo) {}

    // Getters
    std::string getNome() const { return nome; }
    int getDano() const { return dano; }
    double getPreco() const { return preco; }
    int getNivelJogo() const { return nivelJogo; }

private:
    std::string nome;
    int dano;
    double preco;
    int nivelJogo;
};

class Jornada {
public:
    Jornada(std::string informacoes, std::string historia)
        : informacoes(informacoes), historia(historia) {}

    // Método constante
    void imprimirInformacoes() const {
        std::cout << informacoes << std::endl;
    }

    // Getters
    std::string getInformacoes() const { return informacoes; }
    std::string getHistoria() const { return historia; }

private:
    std::string informacoes;
    std::string historia;
};

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
