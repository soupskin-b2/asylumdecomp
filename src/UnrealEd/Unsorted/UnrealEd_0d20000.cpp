// UnrealEd_0d20000.cpp: 8 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

struct UOnlineStatsWrite_ : public UOnlineStatsWrite
{
    FORCEINLINE FSettingsData* FindStat(INT StatId)
    {
        for (INT Index = 0; Index < Properties.Num(); Index++)
        {
            FSettingsProperty& Stat = Properties(Index);
            if (Stat.PropertyId == StatId)
            {
                return &Stat.Data;
            }
        }
        return NULL;
    }
};

// @baa 0x00d26790
/* Sets an int stat, if the write object has it. */
void UOnlineStatsWrite::SetIntStat(INT StatId, INT Value)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->SetData(Value);
    }
}

// @baa 0x00d26710
/* Sets a float stat, if the write object has it. */
void UOnlineStatsWrite::SetFloatStat(INT StatId, FLOAT Value)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->SetData(Value);
    }
}

// @baa 0x00d26890
/* Adds to an int stat (only when it holds an int). */
void UOnlineStatsWrite::IncrementIntStat(INT StatId, INT IncBy)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->Increment<INT, SDT_Int32>(IncBy);
    }
}

// @baa 0x00d26990
/* Subtracts from an int stat (only when it holds an int). */
void UOnlineStatsWrite::DecrementIntStat(INT StatId, INT DecBy)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->Decrement<INT, SDT_Int32>(DecBy);
    }
}

// @baa 0x00d26810
/* Adds to a float stat (only when it holds a float). */
void UOnlineStatsWrite::IncrementFloatStat(INT StatId, FLOAT IncBy)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->Increment<FLOAT, SDT_Float>(IncBy);
    }
}

// @baa 0x00d26910
/* Subtracts from a float stat (only when it holds a float). */
void UOnlineStatsWrite::DecrementFloatStat(INT StatId, FLOAT DecBy)
{
    FSettingsData* Stat = ((UOnlineStatsWrite_*)this)->FindStat(StatId);
    if (Stat != NULL)
    {
        Stat->Decrement<FLOAT, SDT_Float>(DecBy);
    }
}

// @baa 0x00d26590
/* The name mapped to a view id, or NAME_None. */
FName UOnlineStats::GetViewName(INT ViewId)
{
    for (INT Index = 0; Index < ViewIdMappings.Num(); Index++)
    {
        const FStringIdToStringMapping& Mapping = ViewIdMappings(Index);
        if (Mapping.Id == ViewId)
        {
            return Mapping.Name;
        }
    }
    return FName(NAME_None);
}

// @baa 0x00d26690
/* The name mapped to a stat id, or NAME_None. */
FName UOnlineStatsWrite::GetStatName(INT StatId)
{
    for (INT Index = 0; Index < StatMappings.Num(); Index++)
    {
        const FStringIdToStringMapping& Mapping = StatMappings(Index);
        if (Mapping.Id == StatId)
        {
            return Mapping.Name;
        }
    }
    return FName(NAME_None);
}
