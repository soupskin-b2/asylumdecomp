// UnUIDataStores.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* placement new (UnTemplate.h) */
inline void* operator new(size_t, void* Mem) { return Mem; }

inline void operator delete(void*, void*) {}

/* Kit gaps: TArray::AddItem / AddUniqueItem, FString::operator*, StaticLoadClass / LoadClass<T> / LOAD_None
 * (UnObjBas.h) and ConstructObject<T> (UnClass.h; out of line for this T at 00da4530) aren't declared. */
template<typename T> struct TArrayAddUnique_ : public TArray<T>
{
	FORCEINLINE INT AddItem(const T& Item)
	{
		const INT Index = this->Add(1);
		new(this->GetTypedData() + Index) T(Item);
		return Index;
	}
	INT AddUniqueItem(const T& Item)
	{
		for (INT Index = 0; Index < this->Num(); Index++)
		{
			if ((*this)(Index) == Item)
			{
				return Index;
			}
		}
		return AddItem(Item);
	}
};

struct FStringM : public FString
{
	FORCEINLINE const TCHAR* operator*() const
	{
		return Num() ? &(*this)(0) : TEXT("");
	}
};

#define LOAD_None 0x00000000		/* UnObjBas.h ELoadFlags */
UClass* StaticLoadClass(UClass* BaseClass, UObject* InOuter, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox);
template<class T> inline UClass* LoadClass(UObject* Outer, const TCHAR* Name, const TCHAR* Filename, DWORD LoadFlags, UPackageMap* Sandbox)
{
	return StaticLoadClass(T::StaticClass(), Outer, Name, Filename, LoadFlags, Sandbox);
}

class FObjectInstancingGraph;
struct UClass_;
template<class T>
T* ConstructObject(UClass_* Class, UObject* Outer, FName Name = NAME_None, QWORD SetFlags = 0, UObject* Template = NULL, UObject* SubobjectRoot = NULL, FObjectInstancingGraph* InstanceGraph = NULL);
// @baa 0x00da51b0
/* Loads the session settings provider classes named in the ini and creates a provider for each. */
void UUIDataStore_SessionSettings::InitializeDataStore()
{
	for (INT ClassIndex = 0; ClassIndex < SessionSettingsProviderClassNames.Num(); ClassIndex++)
	{
		const FStringM& ClassName = (const FStringM&)SessionSettingsProviderClassNames(ClassIndex);
		UClass* ProviderClass = LoadClass<USessionSettingsProvider>(NULL, *ClassName, NULL, LOAD_None, NULL);
		if (ProviderClass != NULL)
		{
			((TArrayAddUnique_<UClass*>&)SessionSettingsProviderClasses).AddUniqueItem(ProviderClass);
		}
	}

	for (INT ClassIndex = 0; ClassIndex < SessionSettingsProviderClasses.Num(); ClassIndex++)
	{
		UClass* ProviderClass = SessionSettingsProviderClasses(ClassIndex);
#line 5422 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
		check(ProviderClass);

		USessionSettingsProvider* Provider = ConstructObject<USessionSettingsProvider>((UClass_*)ProviderClass, this);
		if (Provider != NULL)
		{
			((TArrayAddUnique_<USessionSettingsProvider*>&)SessionSettings).AddItem(Provider);
		}
	}
}

#line 84 "candidate.cpp"
