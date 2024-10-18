#include <iostream>
#include <string>

class Animal {
public:
    virtual std::string sound() = 0;
};

class Cat : public Animal {
public:
    std::string sound() override;
};

class Leopard : public Animal {
public:
    std::string sound() override;
};

std::string Cat::sound() {
    return "Meow";
}

std::string Leopard::sound() {
    return "Roar";
}

int main() {
    Animal *animals[] = { new Cat(), new Leopard() };
    for (Animal *animal : animals) {
        std::cout << animal->sound() << std::endl;
    }
    for (Animal *animal : animals) {
        delete animal;
    }
    return 0;
}