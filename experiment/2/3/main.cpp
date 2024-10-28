#include <iostream>
#include <vector>

class Bank {
public:
    Bank();
    Bank(const double balance);

    friend double total_balance(const std::vector<Bank> &banks);

protected:
    double balance;
};

class CBank : public Bank {
public:
    CBank();
    CBank(const double balance);
};

class BBank : public Bank {
public:
    BBank();
    BBank(const double balance);
};

class GBank : public Bank {
public:
    GBank();
    GBank(const double balance);
};

Bank::Bank() : balance(0) {}

Bank::Bank(const double balance) : balance(balance) {}

CBank::CBank() : Bank() {}

CBank::CBank(const double balance) : Bank(balance) {}

BBank::BBank() : Bank() {}

BBank::BBank(const double balance) : Bank(balance) {}

GBank::GBank() : Bank() {}

GBank::GBank(const double balance) : Bank(balance) {}

double total_balance(const std::vector<Bank> &banks) {
    double total = 0.0;

    for (const auto &bank : banks) {
        total += bank.balance;
    }

    return total;
}

int main() {
    std::vector<Bank> banks;
    banks.push_back(CBank(1111.11));
    banks.push_back(BBank(2222.22));
    banks.push_back(GBank(3333.33));

    std::cout << "Total balance: " << total_balance(banks) << std::endl;

    return 0;
}