// Copyright 2024 OpenJE

#ifndef OPENJE_RE_CPP_INCLUDE_VFXEFFECTTYPE_COLLISION_STRUCT_HPP_
#define OPENJE_RE_CPP_INCLUDE_VFXEFFECTTYPE_COLLISION_STRUCT_HPP_

#include "openje-re/c++/include/openje_types.hpp"

#include "openje-re/c++/include/VFXEFFECTTYPE_BASE_Struct.hpp"

namespace F3
{
    class VFXEFFECTTYPE_COLLISION_Struct
    {
        public:
            VFXEFFECTTYPE_BASE_Struct vfx_effect_type_base_struct;

        public:
            VFXEFFECTTYPE_COLLISION_Struct();
            ~VFXEFFECTTYPE_COLLISION_Struct();
    };
} // namespace F3

#endif // OPENJE_RE_CPP_INCLUDE_VFXEFFECTTYPE_COLLISION_STRUCT_HPP_
