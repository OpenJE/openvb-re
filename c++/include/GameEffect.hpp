// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_GAMEEFFECT_HPP_
#define OPENJE_RE_CPP_INCLUDE_GAMEEFFECT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Effect.hpp"

namespace F3
{
    class GameEffect
    {
        public:
            Effect effect;
            dword mbr_0x48;
            dword mbr_0x4c;
            dword mbr_0x50;
            dword mbr_0x54;
            dword mbr_0x58;
            dword mbr_0x5c;
            dword mbr_0x60;
            dword mbr_0x64;
            dword mbr_0x68;
            dword mbr_0x6c;
            dword mbr_0x70;
            dword mbr_0x74;
            dword mbr_0x78;
            dword mbr_0x7c;
            dword mbr_0x80;
            dword mbr_0x84;
            dword mbr_0x88;
            dword mbr_0x8c;
            dword mbr_0x90;
            dword mbr_0x94;
            dword mbr_0x98;

        public:
            GameEffect();
            ~GameEffect();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_GAMEEFFECT_HPP_
