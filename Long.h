//
// Created by Алиса Ли on 28/10/2019.
//

#ifndef LABA2_LONG_H
#define LABA2_LONG_H

#include <cstdint>
#include <iostream>

class Long {

public:
    uint32_t first, second;
    void split(uint64_t n);
    uint64_t glue() const;

    friend std::istream& operator>> (std::istream& is, Long& o);
    friend std::ostream& operator<< (std::ostream& os, const Long& o);

    Long operator+ (const Long& o) const;
    Long operator- (const Long& o) const;
    Long operator* (const Long& o) const;
    Long operator/ (const Long& o) const;

    bool operator== (const Long& o) const;
    bool operator>> (const Long& o) const;
    bool operator<< (const Long& o) const;
};

Long operator ""_l(const char* str, size_t size);

#endif //LABA2_LONG_H
