#include <iostream>
#include <string>

class Habilidade {
public:
    Habilidade(std::string nome, int nivel) : nome(nome), nivel(nivel) {}

    std::string getNome() const { return nome; }
    int getNivel() const { return nivel; }

private:
    std::string nome;
    int nivel;
};

class Personagem {
public:
    Personagem(std::string nome, int nivel) : nome(nome), nivel(nivel) {}

    // Construtor de cópia
    Personagem(const Personagem& outro) : nome(outro.nome), nivel(outro.nivel) {}

    // Getter e Setter para o nome
    std::string getNome() const { return nome; }
    void setNome(const std::string& novoNome) {
        nome = novoNome.substr(0, 20); // Limita o tamanho do nome a 20 caracteres
    }

    // Getter e Setter para o nível
    int getNivel() const { return nivel; }
    void setNivel(int novoNivel) { nivel = novoNivel; }

    // Método const que não é um getter
    void mostrarStatus() const {
        std::cout << "Nome: " << nome << ", Nível: " << nivel << std::endl;
    }

    // Método que recebe um objeto constante de Habilidade
    void adquirirHabilidade(const Habilidade& habilidade) {
        std::cout << nome << " adquiriu a habilidade " << habilidade.getNome() << " (Nível " << habilidade.getNivel() << ")." << std::endl;
    }

private:
    std::string nome;
    int nivel;
};

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
