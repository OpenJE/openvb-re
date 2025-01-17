// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_CSOUNDGROUP_HPP_
#define OPENJE_RE_CPP_INCLUDE_CSOUNDGROUP_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/CSoundFile.hpp"

namespace F3
{
    class CSoundGroup
    {
        public:
            CSoundFile c_sound_file;
            dword mbr_0x2c;
            dword mbr_0x30;
            dword mbr_0x34;
            dword mbr_0x38;
            dword mbr_0x3c;
            dword mbr_0x40;
            dword mbr_0x44;
            dword mbr_0x48;
            dword mbr_0x4c;
            dword mbr_0x50;
            dword mbr_0x54;
            dword mbr_0x58;
            dword mbr_0x5c;

        public:
            CSoundGroup();
            ~CSoundGroup();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_CSOUNDGROUP_HPP_
