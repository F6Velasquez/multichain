// Copyright (c) 2014-2017 Coin Sciences Ltd
// MultiChain code distributed under the GPLv3 license, see COPYING file.

#include "multichain/multichain.h"


#include "version/version.h"

const char* mc_State::GetVersion()
{
    return MULTICHAIN_BUILD_DESC;
}

const char* mc_State::GetFullVersion()
{
    return MULTICHAIN_FULL_VERSION;
}

int mc_State::GetProtocolVersion()
{
    return MULTICHAIN_PROTOCOL_VERSION;
}
