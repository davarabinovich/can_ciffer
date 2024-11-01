
#pragma once

#include "msg_handling/msg_handler.h"
#include "settings.h"

namespace msg_handling
{
    using namespace msgs;

    class Parser : public MsgHandler
    {
        public:
            CanMsg parse (ParsedMsg );
    };
}
