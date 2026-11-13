// UnUIDataStores.cpp: 2 functions
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#define BAA_OUTLINE_ALLOC
#include "ue3/Classes.h"
#include "ue3/Array.h"

/* TArray::AddItem / AddUniqueItem (Array.h); not in the kit's TArray. */
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

/* Kit gap: UUIScene::GetSceneDataStore (00db0a70) is declared returning UINT. */
struct UUIScene_ : public UUIScene
{
	USceneDataStore* sub_00db0a70();	/* GetSceneDataStore */
};

// @baa 0x00d95840
/* Collects the data stores available to CurrentScene: the global ones, the scene owner's player data stores,
 * and the scene's own data store. */
void UDataStoreClient::GetAvailableDataStores(UUIScene* CurrentScene, TArray<UUIDataStore*>& out_DataStores) const
{
	TArrayAddUnique_<UUIDataStore*>& DataStores = (TArrayAddUnique_<UUIDataStore*>&)out_DataStores;
	DataStores.Empty();

	for (INT StoreIndex = 0; StoreIndex < GlobalDataStores.Num(); StoreIndex++)
	{
		UUIDataStore* DataStore = GlobalDataStores(StoreIndex);
		if (DataStore != NULL)
		{
			DataStores.AddUniqueItem(DataStore);
		}
	}

	if (CurrentScene != NULL)
	{
		if (CurrentScene->PlayerOwner != NULL)
		{
			INT PlayerDataStoreIndex = const_cast<UDataStoreClient*>(this)->sub_00d92fb0(CurrentScene->PlayerOwner);	/* FindPlayerDataStoreIndex (const in UE3; the kit declares it non-const) */
#line 337 "e:\\Projects\\Amadeus\\AA\\Game\\UnrealEngine3\\Development\\Src\\Engine\\Src\\UnUIDataStores.cpp"
			check(PlayerDataStoreIndex);

			const FPlayerDataStoreGroup& PlayerGroup = PlayerDataStores(PlayerDataStoreIndex);
			for (INT StoreIndex = 0; StoreIndex < PlayerGroup.DataStores.Num(); StoreIndex++)
			{
				UUIDataStore* DataStore = PlayerGroup.DataStores(StoreIndex);
				if (DataStore != NULL)
				{
					DataStores.AddItem(DataStore);
				}
			}
		}

		UUIDataStore* SceneDataStore = ((UUIScene_*)CurrentScene)->sub_00db0a70();
		if (SceneDataStore != NULL)
		{
			DataStores.AddUniqueItem(SceneDataStore);
		}
	}
}

#line 92 "candidate.cpp"

/* TArray::AddItem / AddUniqueItem (Array.h); not in the kit's TArray. */
template<typename T> struct TArrayAddUnique__00d91ae0 : public TArray<T>
{
	INT AddItem(const T& Item)
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

// @baa 0x00d91ae0
/* the out-of-line TArray<UUIDataStore*>::AddUniqueItem instantiation (UDataStoreClient::GetAvailableDataStores) */
template INT TArrayAddUnique__00d91ae0<UUIDataStore*>::AddUniqueItem(UUIDataStore* const& Item);
