// UnrealEd_0470000.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
/* FaceFX Studio: what the phoneme widgets show for each phoneme. FaceFX has no headers in the
 * kit; what the function uses is declared here (FxPhonemeEnum.h, FxArray.h of the FaceFX SDK;
 * FxPhonemeInfo.h of FaceFX Studio).
 *
 * This comment stands before the include on purpose: FaceFX Studio was not built with the
 * editor's precompiled header, and wxWidgets' inline members (wxString's destructor, its
 * one-character constructor) are only expanded in place when the header is not precompiled. */
#include "ue3/Wx.h"

typedef unsigned int FxSize;

/* The phonemes FaceFX knows. */
enum FxPhoneme
{
	PHON_SIL = 0,
	PHON_P,
	PHON_B,
	PHON_T,
	PHON_D,
	PHON_K,
	PHON_G,
	PHON_M,
	PHON_N,
	PHON_NG,
	PHON_RA,
	PHON_RU,
	PHON_FLAP,
	PHON_PH,
	PHON_F,
	PHON_V,
	PHON_TH,
	PHON_DH,
	PHON_S,
	PHON_Z,
	PHON_SH,
	PHON_ZH,
	PHON_CX,
	PHON_X,
	PHON_GH,
	PHON_HH,
	PHON_R,
	PHON_Y,
	PHON_L,
	PHON_W,
	PHON_H,
	PHON_TS,
	PHON_CH,
	PHON_JH,
	PHON_IY,
	PHON_E,
	PHON_EN,
	PHON_EH,
	PHON_A,
	PHON_AA,
	PHON_AAN,
	PHON_AO,
	PHON_AON,
	PHON_O,
	PHON_ON,
	PHON_UW,
	PHON_UY,
	PHON_EU,
	PHON_OE,
	PHON_OEN,
	PHON_AH,
	PHON_IH,
	PHON_UU,
	PHON_UH,
	PHON_AX,
	PHON_UX,
	PHON_AE,
	PHON_ER,
	PHON_AXR,
	PHON_EXR,
	PHON_EY,
	PHON_AW,
	PHON_AY,
	PHON_OY,
	PHON_OW,
	NUM_PHONS
};

/* The kind of sound a phoneme is. The values are those this table stores; the names are not
 * the SDK's. */
enum FxPhonemeClassification
{
	PHONCLASS_VOWEL = 1,
	PHONCLASS_DIPHTHONG,
	PHONCLASS_FRICATIVE,
	PHONCLASS_NASAL,
	PHONCLASS_APPROXIMATE,
	PHONCLASS_STOP,
	PHONCLASS_TRILL,
	PHONCLASS_SILENCE
};

void* FxAlloc(FxSize numBytes, const char* allocDesc);
/* The memory of an array (so that a constructor that throws leaks nothing). */
template<typename FxElem>
class FxArrayBase
{
public:
	FxArrayBase(FxSize numReserved = 0)
		: _v(numReserved ? static_cast<FxElem*>(FxAlloc(numReserved * sizeof(FxElem), "FxArrayBase")) : 0)
		, _allocatedCount(numReserved)
		, _usedCount(0)
	{
	}

	FxElem* _v;
	FxSize _allocatedCount;
	FxSize _usedCount;
};

template<typename FxElem>
class FxArray
{
public:
	FxArray(FxSize numReserved = 0) : _container(numReserved) {}
	~FxArray();

	FxSize Length() const { return _container._usedCount; }
	void PushBack(const FxElem& element);
	const FxElem& operator[](FxSize index) const { return _container._v[index]; }

private:
	FxArrayBase<FxElem> _container;
};

/* A phoneme with its class and the ways it is written: FaceFX's own name, SAMPA, IPA, a word
 * it sounds in, and what it is called. */
class FxPhonExtendedInfo
{
public:
	FxPhonExtendedInfo(FxPhoneme iPhoneme, FxPhonemeClassification iClassification, wxString iTalkback,
		wxString iSampa, wxString iIpa, wxString iSampleWords, wxString iDescription)
		: phoneme(iPhoneme)
		, classification(iClassification)
		, talkback(iTalkback)
		, sampa(iSampa)
		, ipa(iIpa)
		, sampleWords(iSampleWords)
		, description(iDescription)
	{
	}

	FxPhoneme phoneme;
	FxPhonemeClassification classification;
	wxString talkback;
	wxString sampa;
	wxString ipa;
	wxString sampleWords;
	wxString description;
};

// @baa 0x00479580
const FxPhonExtendedInfo& sub_00479580(const FxPhoneme& phon)
{
	static FxArray<FxPhonExtendedInfo> phonInfo;
	if (phonInfo.Length() == 0)
	{
		FxPhonExtendedInfo infoSIL(PHON_SIL, PHONCLASS_SILENCE, wxT("SIL"), wxT("sil"), wxT("sil"), wxT("(silence)"), wxT("silence"));
		phonInfo.PushBack(infoSIL);
		FxPhonExtendedInfo infoP(PHON_P, PHONCLASS_STOP, wxT("P"), wxT("p"), wxT("p"), wxT("/p/ay"), wxT("voiceless bilabial plosive"));
		phonInfo.PushBack(infoP);
		FxPhonExtendedInfo infoB(PHON_B, PHONCLASS_STOP, wxT("B"), wxT("b"), wxT("b"), wxT("/b/it"), wxT("voiced bilabial plosive"));
		phonInfo.PushBack(infoB);
		FxPhonExtendedInfo infoT(PHON_T, PHONCLASS_STOP, wxT("T"), wxT("t"), wxT("t"), wxT("/t/ie"), wxT("voiceless alveolar plosive"));
		phonInfo.PushBack(infoT);
		FxPhonExtendedInfo infoD(PHON_D, PHONCLASS_STOP, wxT("D"), wxT("d"), wxT("d"), wxT("/d/og"), wxT("voiced alveolar plosive"));
		phonInfo.PushBack(infoD);
		FxPhonExtendedInfo infoK(PHON_K, PHONCLASS_STOP, wxT("K"), wxT("k"), wxT("k"), wxT("/c/at"), wxT("voiceless velar plosive"));
		phonInfo.PushBack(infoK);
		FxPhonExtendedInfo infoG(PHON_G, PHONCLASS_STOP, wxT("G"), wxT("g"), wxString((wxChar)0x0261), wxT("/g/um"), wxT("voiced velar plosive"));
		phonInfo.PushBack(infoG);
		FxPhonExtendedInfo infoM(PHON_M, PHONCLASS_NASAL, wxT("M"), wxT("m"), wxT("m"), wxT("/m/an"), wxT("bilabial nasal"));
		phonInfo.PushBack(infoM);
		FxPhonExtendedInfo infoN(PHON_N, PHONCLASS_NASAL, wxT("N"), wxT("n"), wxT("n"), wxT("/n/o"), wxT("alveolar nasal"));
		phonInfo.PushBack(infoN);
		FxPhonExtendedInfo infoNG(PHON_NG, PHONCLASS_NASAL, wxT("NG"), wxT("N"), wxString((wxChar)0x014b), wxT("si/ng/"), wxT("velar nasal"));
		phonInfo.PushBack(infoNG);
		FxPhonExtendedInfo infoRA(PHON_RA, PHONCLASS_TRILL, wxT("RA"), wxT("r"), wxT("r"), wxT("Spanish pe/rr/o"), wxT("alveolar trill"));
		phonInfo.PushBack(infoRA);
		FxPhonExtendedInfo infoRU(PHON_RU, PHONCLASS_TRILL, wxT("RU"), wxT("R\\"), wxString((wxChar)0x0280), wxT("French /r/ue"), wxT("uvular trill"));
		phonInfo.PushBack(infoRU);
		FxPhonExtendedInfo infoFLAP(PHON_FLAP, PHONCLASS_STOP, wxT("FLAP"), wxT("4"), wxString((wxChar)0x027e), wxT("wa/t/er"), wxT("alveolar flap"));
		phonInfo.PushBack(infoFLAP);
		FxPhonExtendedInfo infoPH(PHON_PH, PHONCLASS_FRICATIVE, wxT("PH"), wxT("p\\"), wxString((wxChar)0x0278), wxT("Japanese /f/uhai"), wxT("voiceless bilabial fricative"));
		phonInfo.PushBack(infoPH);
		FxPhonExtendedInfo infoF(PHON_F, PHONCLASS_FRICATIVE, wxT("F"), wxT("f"), wxT("f"), wxT("/f/un"), wxT("voiceless labiodental fricative"));
		phonInfo.PushBack(infoF);
		FxPhonExtendedInfo infoV(PHON_V, PHONCLASS_FRICATIVE, wxT("V"), wxT("v"), wxT("v"), wxT("/v/an"), wxT("voiced labiodental fricative"));
		phonInfo.PushBack(infoV);
		FxPhonExtendedInfo infoTH(PHON_TH, PHONCLASS_FRICATIVE, wxT("TH"), wxT("T"), wxString((wxChar)0x03b8), wxT("/th/ing"), wxT("voiceless dental fricative"));
		phonInfo.PushBack(infoTH);
		FxPhonExtendedInfo infoDH(PHON_DH, PHONCLASS_FRICATIVE, wxT("DH"), wxT("D"), wxString((wxChar)0x00f0), wxT("/th/is"), wxT("voiced dental fricative"));
		phonInfo.PushBack(infoDH);
		FxPhonExtendedInfo infoS(PHON_S, PHONCLASS_FRICATIVE, wxT("S"), wxT("s"), wxT("s"), wxT("/s/it"), wxT("voiceless alveolar fricative"));
		phonInfo.PushBack(infoS);
		FxPhonExtendedInfo infoZ(PHON_Z, PHONCLASS_FRICATIVE, wxT("Z"), wxT("z"), wxT("z"), wxT("/z/oo"), wxT("voiced alveolar fricative"));
		phonInfo.PushBack(infoZ);
		FxPhonExtendedInfo infoSH(PHON_SH, PHONCLASS_FRICATIVE, wxT("SH"), wxT("S"), wxString((wxChar)0x0283), wxT("/sh/oe"), wxT("voiceless postalveolar fricative"));
		phonInfo.PushBack(infoSH);
		FxPhonExtendedInfo infoZH(PHON_ZH, PHONCLASS_FRICATIVE, wxT("ZH"), wxT("Z"), wxString((wxChar)0x0292), wxT("trea/s/ure"), wxT("voiced postalveolar fricative"));
		phonInfo.PushBack(infoZH);
		FxPhonExtendedInfo infoCX(PHON_CX, PHONCLASS_FRICATIVE, wxT("CX"), wxT("C"), wxString((wxChar)0x00e7), wxT("German di/ch/t"), wxT("voiceless palatal fricative"));
		phonInfo.PushBack(infoCX);
		FxPhonExtendedInfo infoX(PHON_X, PHONCLASS_FRICATIVE, wxT("X"), wxT("x"), wxT("x"), wxT("German da/ch/"), wxT("voiceless velar fricative"));
		phonInfo.PushBack(infoX);
		FxPhonExtendedInfo infoGH(PHON_GH, PHONCLASS_FRICATIVE, wxT("GH"), wxT("G"), wxString((wxChar)0x0263), wxT("Japanese ha/g/e"), wxT("voiced velar fricative"));
		phonInfo.PushBack(infoGH);
		FxPhonExtendedInfo infoHH(PHON_HH, PHONCLASS_FRICATIVE, wxT("HH"), wxT("h"), wxT("h"), wxT("/h/appy"), wxT("voiceless glottal fricative"));
		phonInfo.PushBack(infoHH);
		FxPhonExtendedInfo infoR(PHON_R, PHONCLASS_APPROXIMATE, wxT("R"), wxT("r\\"), wxString((wxChar)0x0279), wxT("/r/ed"), wxT("alveolar approximate"));
		phonInfo.PushBack(infoR);
		FxPhonExtendedInfo infoY(PHON_Y, PHONCLASS_APPROXIMATE, wxT("Y"), wxT("j"), wxT("j"), wxT("/y/es"), wxT("palatal approximate"));
		phonInfo.PushBack(infoY);
		FxPhonExtendedInfo infoL(PHON_L, PHONCLASS_APPROXIMATE, wxT("L"), wxT("l"), wxT("l"), wxT("/l/ap"), wxT("alveolar lateral approximate"));
		phonInfo.PushBack(infoL);
		FxPhonExtendedInfo infoW(PHON_W, PHONCLASS_APPROXIMATE, wxT("W"), wxT("w"), wxT("w"), wxT("/w/in"), wxT("labial-velar approximate"));
		phonInfo.PushBack(infoW);
		FxPhonExtendedInfo infoH(PHON_H, PHONCLASS_APPROXIMATE, wxT("H"), wxT("H"), wxString((wxChar)0x0265), wxT("French /hu/it"), wxT("labial-palatal approximate"));
		phonInfo.PushBack(infoH);
		FxPhonExtendedInfo infoTS(PHON_TS, PHONCLASS_FRICATIVE, wxT("TS"), wxT("ts"), wxString((wxChar)0x02a6), wxT("pi/zz/a"), wxT("voiceless alveolar affricate"));
		phonInfo.PushBack(infoTS);
		FxPhonExtendedInfo infoCH(PHON_CH, PHONCLASS_FRICATIVE, wxT("CH"), wxT("tS"), wxString((wxChar)0x02a7), wxT("/ch/ip"), wxT("voiceless postalveolar affricate"));
		phonInfo.PushBack(infoCH);
		FxPhonExtendedInfo infoJH(PHON_JH, PHONCLASS_FRICATIVE, wxT("JH"), wxT("dZ"), wxString((wxChar)0x02a4), wxT("/j/ump"), wxT("voiced postalveolar affricate"));
		phonInfo.PushBack(infoJH);
		FxPhonExtendedInfo infoIY(PHON_IY, PHONCLASS_VOWEL, wxT("IY"), wxT("i"), wxT("i"), wxT("b/ee/t"), wxT("close front unrounded"));
		phonInfo.PushBack(infoIY);
		FxPhonExtendedInfo infoE(PHON_E, PHONCLASS_VOWEL, wxT("E"), wxT("e"), wxT("e"), wxT("pl/ay/ (non-diphthong)"), wxT("close-mid front unrounded"));
		phonInfo.PushBack(infoE);
		FxPhonExtendedInfo infoEN(PHON_EN, PHONCLASS_VOWEL, wxT("EN"), wxT("e~"), wxString((wxChar)0x0065) + wxString((wxChar)0x0303), wxT("French /ain/si"), wxT("nasalized close-mid front unrounded"));
		phonInfo.PushBack(infoEN);
		FxPhonExtendedInfo infoEH(PHON_EH, PHONCLASS_VOWEL, wxT("EH"), wxT("E"), wxString((wxChar)0x025b), wxT("b/e/d"), wxT("open-mid front unrounded"));
		phonInfo.PushBack(infoEH);
		FxPhonExtendedInfo infoA(PHON_A, PHONCLASS_VOWEL, wxT("A"), wxT("a"), wxT("a"), wxT("German r/a/tte"), wxT("open front unrounded"));
		phonInfo.PushBack(infoA);
		FxPhonExtendedInfo infoAA(PHON_AA, PHONCLASS_VOWEL, wxT("AA"), wxT("A"), wxString((wxChar)0x0251), wxT("h/o/t"), wxT("open back unrounded"));
		phonInfo.PushBack(infoAA);
		FxPhonExtendedInfo infoAAN(PHON_AAN, PHONCLASS_VOWEL, wxT("AAN"), wxT("A~"), wxString((wxChar)0x0251) + wxString((wxChar)0x0303), wxT("French /un/"), wxT("nasalized open back unrounded"));
		phonInfo.PushBack(infoAAN);
		FxPhonExtendedInfo infoAO(PHON_AO, PHONCLASS_VOWEL, wxT("AO"), wxT("O"), wxString((wxChar)0x0254), wxT("French s/o/rt"), wxT("open-mid back rounded"));
		phonInfo.PushBack(infoAO);
		FxPhonExtendedInfo infoAON(PHON_AON, PHONCLASS_VOWEL, wxT("AON"), wxT("O~"), wxString((wxChar)0x0254) + wxString((wxChar)0x0303), wxT("French s/on/"), wxT("nasalized open-mid back rounded"));
		phonInfo.PushBack(infoAON);
		FxPhonExtendedInfo infoO(PHON_O, PHONCLASS_VOWEL, wxT("O"), wxT("o"), wxT("o"), wxT("r/ow/ (non-diphthong)"), wxT("close-mid back rounded"));
		phonInfo.PushBack(infoO);
		FxPhonExtendedInfo infoON(PHON_ON, PHONCLASS_VOWEL, wxT("ON"), wxT("o~"), wxString((wxChar)0x006f) + wxString((wxChar)0x0303), wxT("French m/an/teau"), wxT("nasalized close-mid back rounded"));
		phonInfo.PushBack(infoON);
		FxPhonExtendedInfo infoUW(PHON_UW, PHONCLASS_VOWEL, wxT("UW"), wxT("u"), wxT("u"), wxT("s/oo/n"), wxT("close back rounded"));
		phonInfo.PushBack(infoUW);
		FxPhonExtendedInfo infoUY(PHON_UY, PHONCLASS_VOWEL, wxT("UY"), wxT("y"), wxT("y"), wxT("French ch/u/te"), wxT("close front rounded"));
		phonInfo.PushBack(infoUY);
		FxPhonExtendedInfo infoEU(PHON_EU, PHONCLASS_VOWEL, wxT("EU"), wxT("2"), wxString((wxChar)0x00f8), wxT("French p/eu/"), wxT("close-mid front rounded"));
		phonInfo.PushBack(infoEU);
		FxPhonExtendedInfo infoOE(PHON_OE, PHONCLASS_VOWEL, wxT("OE"), wxT("9"), wxString((wxChar)0x0153), wxT("French j/eu/ne"), wxT("open-mid front rounded"));
		phonInfo.PushBack(infoOE);
		FxPhonExtendedInfo infoOEN(PHON_OEN, PHONCLASS_VOWEL, wxT("OEN"), wxT("9~"), wxString((wxChar)0x0153) + wxString((wxChar)0x0303), wxT("French br/un/"), wxT("nasalized open-mid front rounded"));
		phonInfo.PushBack(infoOEN);
		FxPhonExtendedInfo infoAH(PHON_AH, PHONCLASS_VOWEL, wxT("AH"), wxT("V"), wxString((wxChar)0x028c), wxT("r/u/n"), wxT("open-mid back unrounded"));
		phonInfo.PushBack(infoAH);
		FxPhonExtendedInfo infoIH(PHON_IH, PHONCLASS_VOWEL, wxT("IH"), wxT("I"), wxString((wxChar)0x026a), wxT("b/i/t"), wxT("near-close near-front unrounded"));
		phonInfo.PushBack(infoIH);
		FxPhonExtendedInfo infoUU(PHON_UU, PHONCLASS_VOWEL, wxT("UU"), wxT("Y"), wxString((wxChar)0x028f), wxT("German sch/\xfc" L"/tzen"), wxT("near-close near-front rounded"));
		phonInfo.PushBack(infoUU);
		FxPhonExtendedInfo infoUH(PHON_UH, PHONCLASS_VOWEL, wxT("UH"), wxT("U"), wxString((wxChar)0x028a), wxT("h/oo/k"), wxT("near-close near-back rounded"));
		phonInfo.PushBack(infoUH);
		FxPhonExtendedInfo infoAX(PHON_AX, PHONCLASS_VOWEL, wxT("AX"), wxT("@"), wxString((wxChar)0x0259), wxT("/a/bout"), wxT("mid central"));
		phonInfo.PushBack(infoAX);
		FxPhonExtendedInfo infoUX(PHON_UX, PHONCLASS_VOWEL, wxT("UX"), wxT("6"), wxString((wxChar)0x0250), wxT("German de/r/"), wxT("near-open central"));
		phonInfo.PushBack(infoUX);
		FxPhonExtendedInfo infoAE(PHON_AE, PHONCLASS_VOWEL, wxT("AE"), wxT("{"), wxString((wxChar)0x00e6), wxT("f/a/t"), wxT("near-open front unrounded"));
		phonInfo.PushBack(infoAE);
		FxPhonExtendedInfo infoER(PHON_ER, PHONCLASS_VOWEL, wxT("ER"), wxT("3"), wxString((wxChar)0x025c), wxT("p/er/fect"), wxT("open-mid central unrounded"));
		phonInfo.PushBack(infoER);
		FxPhonExtendedInfo infoAXR(PHON_AXR, PHONCLASS_VOWEL, wxT("AXR"), wxT("@`"), wxString((wxChar)0x025a), wxT("butt/er/"), wxT("rhotacized mid central"));
		phonInfo.PushBack(infoAXR);
		FxPhonExtendedInfo infoEXR(PHON_EXR, PHONCLASS_VOWEL, wxT("EXR"), wxT("3`"), wxString((wxChar)0x025d), wxT("f/ur/"), wxT("rhotacized open-mid central"));
		phonInfo.PushBack(infoEXR);
		FxPhonExtendedInfo infoEY(PHON_EY, PHONCLASS_DIPHTHONG, wxT("EY"), wxT("EI"), wxString((wxChar)0x025b) + wxString((wxChar)0x026a), wxT("pl/ay/"), wxT("diphthong @todo"));
		phonInfo.PushBack(infoEY);
		FxPhonExtendedInfo infoAW(PHON_AW, PHONCLASS_DIPHTHONG, wxT("AW"), wxT("aU"), wxString((wxChar)0x0061) + wxString((wxChar)0x028a), wxT("ab/ou/t"), wxT("diphthong @todo"));
		phonInfo.PushBack(infoAW);
		FxPhonExtendedInfo infoAY(PHON_AY, PHONCLASS_DIPHTHONG, wxT("AY"), wxT("aI"), wxString((wxChar)0x0061) + wxString((wxChar)0x026a), wxT("b/i/te"), wxT("diphthong @todo"));
		phonInfo.PushBack(infoAY);
		FxPhonExtendedInfo infoOY(PHON_OY, PHONCLASS_DIPHTHONG, wxT("OY"), wxT("OI"), wxString((wxChar)0x0254) + wxString((wxChar)0x026a), wxT("b/oy/"), wxT("diphthong @todo"));
		phonInfo.PushBack(infoOY);
		FxPhonExtendedInfo infoOW(PHON_OW, PHONCLASS_DIPHTHONG, wxT("OW"), wxT("@U"), wxString((wxChar)0x0259) + wxString((wxChar)0x028a), wxT("b/oa/t"), wxT("diphthong @todo"));
		phonInfo.PushBack(infoOW);
	}
	return phonInfo[phon];
}
