#ifndef CLOTHNG_H
#define CLOTHING_H
#include <string>
#include <set>
#include <iostream>
#include <vector>
#include <algorithm>
#include "product.h"

class Clothing : public Product{
public:
    Clothing(const std::string category, const std::string name, double price, int qty, const std::string size, const std::string brand);
    ~Clothing();
    std::set<std::string> keywords() const;
    std::string displayString() const;
    void dump(std::ostream& os) const;
    //bool isMatch(std::vector<std::string>& searchTerms) const;
private:
    std::string size_;
    std::string brand_;

};

#endif