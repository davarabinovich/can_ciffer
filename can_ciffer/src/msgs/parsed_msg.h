
#pragma once

#include "settings.h"

namespace msgs
{
    using FieldRecalcAlg = void *;
    using MsgIdCompositionAlg = void *;
    enum class SenderType {MASTER, SLAVE, PEER};

    struct Field
    {
        string name;
        FieldRecalcAlg recalcAlg;
        string unitSign;
    };

    using FieldsCollection = vector<Field>;
    struct MsgType
    {
        string name;
        FieldsCollection fields;
        MsgIdCompositionAlg idCompositionAlg;
        SenderType senderType;
    };

    using FieldValuesCollection = vector<string>;
    struct UniqueId
    {

    };
    struct ParsedMsg
    {
        MsgType & type;
        FieldValuesCollection values;
        UniqueId senderId;
        UniqueId recipientId;
    };
}
