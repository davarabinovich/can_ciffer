
#pragma once

#include "msg_handling/composer.h"
#include "msg_handling/parser.h"
#include "configuration/configuration.h"
#include "settings.h"


namespace management
{
    using namespace msg_handling;
    class Manager
    {
    private:
        Composer & composer;
        Parser & parser;
        config::Node & self;
    };
}
