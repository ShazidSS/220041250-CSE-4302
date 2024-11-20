#include <iostream>
using namespace std;
class BaseCharacter;
class Mage;
class Warrior;
class Archer;

class BaseCharacter
{
protected:
    string _name;
    int _health;
    int _mana;
    int _damage;
    string _type;

public:
    virtual void setHealth(int)
    {};
    virtual int getHealth()
    { return 0;};
    virtual string getType()
    {
        return " ";
    }
    ~BaseCharacter(){};

};

class BossEnemy
{
    int _health;
    int _damage;

public:
    BossEnemy(int health, int damage)
    {
        _health = health;
        _damage = damage;
    }
    void attack(BaseCharacter* c)
    {
        c->setHealth(c->getHealth()-_damage);
        cout<<"Boss attacks "<<c->getType()<<" with power "<<_damage<<endl;
        cout<<c->getType()<<" takes "<<_damage<<" damage! Health now: "<<c->getHealth()<<endl;
    }
    int getHealth()
    {
        return _health;
    }
    int getDamage()
    {
        return _damage;
    }
    void setHealth(int health)
    {
        _health = health;
    }
    void setDamage(int damage)
    {
        _damage = damage;
    }
};

class CharacterAction
{
public:
    virtual void attack(BossEnemy *boss)=0;
    virtual void defend(BossEnemy *boss) = 0;
    virtual void useSpecialAbility(BossEnemy *boss) = 0;
    virtual void displayStatus(BossEnemy *boss) = 0;
    ~CharacterAction(){};

};





class Mage : public BaseCharacter, public CharacterAction
{
    int _specialAbilityPower;

public:
    Mage(std::string name, int health, int damage)
    {
        _name = name;
        _health = health;
        _damage = damage;
        _specialAbilityPower = 30;
        _mana = 0;
        _type="Mage";
    }

    void attack(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _damage);
        increaseMana(50);
        displayStatus(boss);
    }
    void defend(BossEnemy *boss) override
    {
    }
    void useSpecialAbility(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _specialAbilityPower);
        cout << "Mage Uses Arcane Blast with power " << _specialAbilityPower << endl;
        cout<<"Boss takes "<<_specialAbilityPower<<" damage! Health now: "<<boss->getHealth()<<endl;
        increaseMana(50);
    }
    void displayStatus(BossEnemy *boss) override
    {
        cout << "Mage attacks with power " << _damage << endl;
        cout<<"Boss takes "<<_damage<<" damage! Health now: "<<boss->getHealth()<<endl;
    }
    int getHealth()
    {
        return _health;
    }
    void setHealth(int health)
    {
        _health=health;
    }
    int getDamage()
    {
        return _damage;
    }
    void setMana(int mana)
    {
        _mana=mana;
    }
    int getMana()
    {
        return _mana;
    }
    void increaseMana(int increase)
    {
        _mana+=increase;
    }
        string getType()
    {
        return _type;
    }
};

class Warrior : public BaseCharacter, public CharacterAction
{
    int _specialAbilityPower;

public:
    Warrior(string name, int health, int damage)
    {
        _name=name;
        _health=health;
        _damage=damage;
        _specialAbilityPower=35;
        _mana=0;
        _type="Warrior";
    }

    void attack(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _damage);
        increaseMana(50);
        displayStatus(boss);
    }
    void defend(BossEnemy *boss) override
    {
    }
    void useSpecialAbility(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _specialAbilityPower);
        cout << "Warrior uses Berserk Rage with power " << _specialAbilityPower << endl;
        cout<<"Boss takes "<<_specialAbilityPower<<" damage! Health now: "<<boss->getHealth()<<endl;
        setMana(0);
    }
    void displayStatus(BossEnemy *boss) override
    {
        cout << "Warrior attacks with power " << _damage << endl;
        cout<<"Boss takes "<<_damage<<" damage! Health now: "<<boss->getHealth()<<endl;
    }
    int getHealth()
    {
        return _health;
    }
    void setHealth(int health)
    {
        _health=health;
    }
    int getDamage()
    {
        return _damage;
    }
    void setMana(int mana)
    {
        _mana=mana;
    }
    int getMana()
    {
        return _mana;
    }
        void increaseMana(int increase)
    {
        _mana+=increase;
    }
        string getType()
    {
        return _type;
    }
};

class Archer : public BaseCharacter, public CharacterAction
{
    int _specialAbilityPower;

public:
    Archer(string name, int health, int damage)
    {
        _name = name;
        _health = health;
        _damage = damage;
        _specialAbilityPower = 35;
        _mana = 0;
        _type="Archer";
    }

    void attack(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _damage);
        increaseMana(50);
        displayStatus(boss);
    }
    void defend(BossEnemy *boss) override
    {
    }
    void useSpecialAbility(BossEnemy *boss) override
    {
        boss->setHealth(boss->getHealth() - _specialAbilityPower);
        cout << "Archer uses fire arrow with power " << _specialAbilityPower << endl;
        cout<<"Boss takes "<<_specialAbilityPower<<" damage! Health now: "<<boss->getHealth()<<endl;
        setMana(0);
    }
    void displayStatus(BossEnemy *boss) override
    {
        cout << "Archer attacks with power " << _damage << endl;
        cout<<"Boss takes "<<_damage<<" damage! Health now: "<<boss->getHealth()<<endl;
    }
    int getHealth()
    {
        return _health;
    }
    void setHealth(int health)
    {
        _health=health;
    }
    int getDamage()
    {
        return _damage;
    }
    void setMana(int mana)
    {
        _mana=mana;
    }
    int getMana()
    {
        return _mana;
    }
    void increaseMana(int increase)
    {
        _mana+=increase;
    }
    string getType()
    {
        return _type;
    }
};




class GameEngine
{
private:
    Warrior *warrior;
    Mage *mage;
    Archer *archer;
    BossEnemy *boss;
    bool won;

public:
    GameEngine(int a)
    {
        warrior=new Warrior("Warrior",100,25);
        mage=new Mage("Mage",120,20);
        archer=new Archer("Archer",90,20);
        boss=new BossEnemy(150,30);
        won=false;
    }
    void Start()
    {
        cout<<"\nGame begins! Player vs. Boss"<<endl;
        Update();
    }


    void Update()
    {
        while(warrior->getHealth()>0&&mage->getHealth()>0&&archer->getHealth()>0)
        {
            cout<<"\n"<<"\n";
            warrior->attack(boss);
            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }
            if(warrior->getMana()>=100)
                warrior->useSpecialAbility(boss);
            
            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }

            mage->attack(boss);
            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }
            if(mage->getMana()>=100)
                mage->useSpecialAbility(boss);

            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }

            archer->attack(boss);
            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }
            if(archer->getMana()>=100)
                archer->useSpecialAbility(boss);
            if(boss->getHealth()<=0)
            {
                won=true;
                break;
            }
            
            cout<<"\n"<<"\n";


            boss->attack(warrior);
            boss->attack(mage);
            boss->attack(archer);
               
        }
        if(won)
            cout<<"Player won"<<endl;
        else cout<<"Defeat";
    }
    ~GameEngine()
    {
        delete warrior;
        delete archer;
        delete boss;
        delete mage;
    }

};

int main()
{
    GameEngine* g=new GameEngine(10);
    g->Start();
    return 0;
}