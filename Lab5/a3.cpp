#include <iostream>

class Bill
{
    std::string code, name;
    int price, qty;
    int tot;

public:
    Bill() {}
    Bill(std::string k, std::string k1, int p, int q)
        : code(k), name(k1), price(p), qty(q), tot(p * q) {}

    void display(int &res)
    {
        std::cout << code << "\t" << name << "\t" << price << "\t" << qty << "\t" << tot;
        res += tot;
    }
};

int main(int argc, char const *argv[])
{
    int n;
    std::cout << "Enter number of items: ";
    std::cin >> n;
    Bill *bill = new Bill[n];
    for (int ii = 0; ii < n; ii++)
    {
        std::string c, i;
        std::cout << "enter code, item name, price, qty\n";
        std::cin >> c >> i;
        int p, q;
        std::cin >> p >> q;
        bill[ii] = Bill(c, i, p, q);
    }
    std::cout << "SL. No.\tcode\tname\tprice\tqty\ttotal" << std::endl;
    std::cout << "-------------------------------------------\n";
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        std::cout << (i + 1) << "\t";
        bill[i].display(res);
        printf("\n");
    }
    std::cout << "-------------------------------------------\n";

    std::cout << "\t\t\tTotal" << res << std::endl;

    remove(argv[0]);
    return 0;
}
