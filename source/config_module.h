#ifndef CONFIG_RECASTNAVIGATION_H
#define CONFIG_RECASTNAVIGATION_H

#pragma once

#include "pandabase.h"
#include "notifyCategoryProxy.h"
#include "configVariableDouble.h"
#include "configVariableString.h"
#include "configVariableInt.h"


NotifyCategoryDecl(recastnavigation, EXPORT_CLASS, EXPORT_TEMPL);

extern void init_librecastnavigation();

#endif
