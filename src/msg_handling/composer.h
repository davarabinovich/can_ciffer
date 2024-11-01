
#pragma once

#include "msg_handling/msg_handler.h"
#include "settings.h"

namespace msg_handling
{
    class Composer : public MsgHandler
    {
        public:
            ParsedMsg compose (CanMsg );
    };
}
