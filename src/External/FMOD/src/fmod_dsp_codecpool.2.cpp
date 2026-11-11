// fmod_dsp_codecpool.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).

// FMOD Ex, fmod_dsp_codecpool.cpp: DSPCodecPool. FMOD's headers aren't available to sources,
// so the parts used here are declared as FMOD names them (field names inferred from use).
typedef enum
{
    FMOD_OK = 0,
    FMOD_ERR_CHANNEL_ALLOC = 10
} FMOD_RESULT;

// @baa 0x0177fd03
namespace FMOD
{
    class DSPCodec
    {
    public:
        FMOD_RESULT getFinished(bool* finished);
    };

    class DSPCodecPool
    {
    public:
        void*      mSystem;          /* 0x0 */
        int        mMaxDSPCodecs;    /* 0x4 */
        int        mNumDSPCodecs;    /* 0x8 */
        DSPCodec** mPool;            /* 0xc */
        bool       mAllocated[1];    /* 0x10: one per codec */

        FMOD_RESULT areAnyFree();
    };

    FMOD_RESULT DSPCodecPool::areAnyFree()
    {
        for (int count = 0; count < mNumDSPCodecs; count++)
        {
            bool finished;

            mPool[count]->getFinished(&finished);

            if (!mAllocated[count] && finished)
            {
                return FMOD_OK;
            }
        }

        return FMOD_ERR_CHANNEL_ALLOC;
    }
}
