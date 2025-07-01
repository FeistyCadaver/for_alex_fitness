#ifndef INVOICE_HPP
#define INVOICE_HPP

#include "FinancialDocument.hpp"

class Invoice : public FinancialDocument
{
    private:
     double amount;
     std::string requisites;

     public:
     Invoice(int id, const std::string& number, double amt, const, std::string& req);

     bool validate() const override;
     std::string serializeToString()
     const override;
     void printDetails() const override;

     static Invoice*
     parseFromString(const std::string& str);
};

#endif //INVOICE_HPP