#include <iostream>

using namespace std;

enum Element
{
    Fuego,
    Agua,
    Planta,
    Electrico
};

struct Statistics
{
    int hp;
    int atk;
    int def;
    int sp_atk;
    int sp_def;
};

class Pokemon
{
protected:
    static int DexNum;
    string name;
    Element type;

    int HP;
    int PP;

public:
    Pokemon();  //Constructor
    ~Pokemon(); //Destructor

    Statistics stats;

    void Attack();  //Debe recibir el ataque que se va a usar
    void Evolve();  //Debe recibir algun tipo de referencia para saber en que evolucionar
    void LevelUp(); //Suma a los stats
    void SetBaseStats(int hp, int atk, int def, int sp_atk, int sp_def);
};

int Pokemon::DexNum;

Pokemon::Pokemon()
{
    DexNum += 1;
}

Pokemon::~Pokemon()
{
}

void Pokemon::Attack()
{
    cout << "Este pokemon ataca" << endl;
}

void Pokemon::Evolve()
{
}

void Pokemon::LevelUp()
{
}

void Pokemon::SetBaseStats(int hp, int atk, int def, int sp_atk, int sp_def)
{
    this->stats.hp = hp;
    this->stats.atk = atk;
    this->stats.def = def;
    this->stats.sp_atk = sp_atk;
    this->stats.sp_def = sp_def;
}

class Pikachu : public Pokemon
{
private:
public:
    Pikachu() : Pokemon()
    {
        this->SetBaseStats(10, 10, 10, 10, 10);
    }

    ~Pikachu()
    {
    }
};

// MAIN CLASS
/**
 * Deberia haber un header y source para Pokemon y uno para pikachu
*/

int main(int argc, char const *argv[])
{
    Pokemon *poke = new Pokemon();
    Pikachu *pika = new Pikachu();
    
    //pika->Attack();
    
    cout << poke->stats.atk << endl;
    cout << pika->stats.atk << endl;
    cout << poke->stats.atk << endl;

    return 0;
}