#ifndef FINANCIALDOCUMENT_HPP
#define FINANCIALDOCUMENT_HPP

#include <iostream>
#include <string>

//Базовый класс FinancialDocument
class FinancialDocument
{
protected:
    int id;
    std::string documentNumber;

public:
    FinancialDocument(int id, const std::string& number) ;
    virtual ~FinancialDocument() = default;

    virtual bool validate() const = 0;
    virtual std::string
serializeToString() const = 0;
    virtual void printDetails() const = 0;

    int getId() const;
    const std::string& getDocumentNumber() const;
    
    //Шаблонный метод для форматировыанного вывода
    template <typename T>
    void printFormatted (const T& document) const 
{
    std::cout << "----------------\n";
    std::cout << "Document Id: " << document.id << \n;
    std::cout << "Number: " << document.documentNumber << \n;
    std::cout << document.printDetails();
    std::cout << "Valid: " << (document.validate() ? "Yes" : "No") << "\n";
    std::cout << "----------------\n";
    } 
};

#endif //FINANCIALDOCUMENT_HPP




