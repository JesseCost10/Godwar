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