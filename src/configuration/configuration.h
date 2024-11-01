
#pragma once

#include "msgs/can_msg.h"
#include "msgs/parsed_msg.h"
#include "settings.h"

namespace config
{
    using namespace msgs;

    using MsgTypePtrsVector = vector<unique_ptr<MsgType>>;
    struct Node
    {
        string name;
        UniqueId uniqueId;
        MsgTypePtrsVector incomingTypes;
        MsgTypePtrsVector outgoingTypes;
    };

    using MsgPresentationAlg = void*;
    struct MsgWidgetDescription
    {
        string name;
        CanMsg rawMsg;
        ParsedMsg msg;
        MsgPresentationAlg presentationAlg;
    };

    struct Configuration
    {
        MsgTypePtrsVector types;
        unique_ptr<Node> nodes;
        unique_ptr<MsgWidgetDescription> widgets;
    };
}
