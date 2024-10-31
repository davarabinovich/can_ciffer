
#pragma once

#include <msgs/can_msg.h>
#include <msgs/parsed_msg.h>
#include "settings.h"

namespace msg_handling
{
    using namespace msgs;

    using MsgTypesVector = vector<MsgType>;
    class MsgHandler
    {
        public:
            MsgHandler () = delete;
            void addMsgType (vector<MsgType> );
            unique_ptr<MsgTypesVector> getMsgTypes ();

        private:
            MsgTypesVector types;
    };
}
