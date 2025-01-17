// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_ACTIONDIE_HPP_
#define OPENJE_RE_CPP_INCLUDE_ACTIONDIE_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/Action.hpp"
#include "openje-re/c++/include/Entity.hpp"

namespace F3
{
    class ActionDie : public Action
    {
        public:
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            undefined None;
            byte mbr_0x10;
            undefined None;
            undefined None;
            undefined None;
            Entity * entity;
            byte mbr_0x18;

        public:
            ActionDie();

        public:
            virtual ~ActionDie();
            byte vf_a() override;
            void vf_b() override;
            void vf_d( dword param ) override;
            void vf_e() override;
            void vf_f() override;
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_ACTIONDIE_HPP_
