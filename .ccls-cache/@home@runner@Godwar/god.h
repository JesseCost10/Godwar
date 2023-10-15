class Deuses {

public:
    Deuses(std::string nome = "Kratos", int vida = 100, double moedas = 0.0, int dano = 200, double poder = 500.0)
        : nome(nome), vida(vida), moedas(moedas), dano(dano), poder(poder) {}

    Deuses(std::string nome, int vida, double moedas)
        : nome(nome), vida(vida), moedas(moedas), dano(200), poder(500.0) {}

    // Getters e setters
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

class Deuses {
public:
    Deuses(std::string nome = "Kratos", int vida = 100, double moedas = 0.0, int dano = 200, double poder = 500.0)
        : nome(nome), vida(vida), moedas(moedas), dano(dano), poder(poder) {}

    Deuses(std::string nome, int vida, double moedas)
        : nome(nome), vida(vida), moedas(moedas), dano(200), poder(500.0) {}

    // Getters e setters
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
    std::string getInformacoes() const { 
        return informacoes; 
        }
   
    std::string getHistoria() const { 
        return historia; 
        }

private:
    std::string informacoes;
    std::string historia;
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

class Habilidade {
public:
    Habilidade(std::string nome, int nivel) : nome(nome), nivel(nivel) {}

    std::string getNome() const { 
        return nome; 
        }
    int getNivel() const { 
        return nivel; 
        }

private:
    std::string nome;
    int nivel;
};