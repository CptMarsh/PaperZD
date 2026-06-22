// Copyright 2017 ~ 2022 Critical Failure Studio Ltd. All rights reserved.

#pragma once

#include "Runtime/Launch/Resources/Version.h"

#define PAPERZD_ENGINE_VERSION_AT_LEAST(Major, Minor) ((ENGINE_MAJOR_VERSION > (Major)) || (ENGINE_MAJOR_VERSION == (Major) && ENGINE_MINOR_VERSION >= (Minor)))
#define PAPERZD_UE_5_8_OR_LATER PAPERZD_ENGINE_VERSION_AT_LEAST(5, 8)
