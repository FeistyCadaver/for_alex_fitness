#include "Invoice.hpp"
#include <cstdlib>

Invoice::Invoice(int id, const std::string& number, double amt, const, std::string& req) : FinancialDocument(id, number), amount(amt), requisites(req)
{
}
bool Invoice::validate() const
{
    return id > 0 && ! documentNumber.empty() && amount > 0 && !requisites.empty();
} 

std::string Invoice::serializeToString() const
{
    return "INVOICE|" + std::to_string(id) + "|" + documentNumber + "|" + std::to_string(amount) + "|" + requisites
}

