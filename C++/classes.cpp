#include <iostream>

using namespace std;

class Aviao {
    public:
        int vel = 0;
        int vel_max; //velocidade maxima vai ser de acordo como tipo
        string tipo;
        void ini(int tp); //declaração da função ini que recebe um tipo


    private:
};

void Aviao :: ini (int tp) {
    if(tp == 1) {
        this -> vel_max = 800;
        this -> tipo = "Jato";
    } else if(tp == 2) {
        this -> vel_max = 350;
        this -> tipo = "Monomotor";
    }
    else if (tp == 3)
    {
        this->vel_max = 180;
        this->tipo = "Planador";
    }
}

int main() {
    Aviao *av1 = new Aviao();

    av1 -> ini(2);

    cout << av1 -> vel_max << "\n";

    return 0;
}