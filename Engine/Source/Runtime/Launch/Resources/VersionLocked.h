// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#pragma once

// To lock a build to a specific version set VERSION_LOCKED to 1, and 
// fill out the details below.

#define VERSION_LOCKED 0

#if VERSION_LOCKED

#define ENGINE_MAJOR_VERSION	4
#define ENGINE_MINOR_VERSION	12
#define ENGINE_PATCH_VERSION	0

#define ENGINE_IS_LICENSEE_VERSION 0

#define BUILT_FROM_CHANGELIST 1234567
#define BRANCH_NAME "++Game+Release-1.0"

#define ENGINE_IS_PROMOTED_BUILD (BUILT_FROM_CHANGELIST > 0)

#define EPIC_COMPANY_NAME  "Epic Games, Inc."
#define EPIC_COPYRIGHT_STRING "Copyright 1998-2015 Epic Games, Inc. All Rights Reserved."
#define EPIC_PRODUCT_NAME "Unreal Engine"
#define EPIC_PRODUCT_IDENTIFIER "UnrealEngine"

#endif
