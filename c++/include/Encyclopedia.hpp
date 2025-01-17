// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ENCYCLOPEDIA_HPP_
#define OPENJE_RE_CPP_INCLUDE_ENCYCLOPEDIA_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Trigger.hpp"

namespace F3
{
    class Encyclopedia
    {
        public:
            dword mbr_0x4;
            dword mbr_0x8;
            dword mbr_0xc;

        public:
            Encyclopedia();
            ~Encyclopedia();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ENCYCLOPEDIA_HPP_
