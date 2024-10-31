
#pragma once

#include "settings.h"

namespace msgs
{
    enum class CanIfKind {CAN, CAN_FD};
    struct CanId
    {

    };

    struct CanMsg
    {
        CanIfKind kind;
        CanId id;
        shared_ptr<vector<uint8_t>> data = nullptr;
    };
}
