/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/CoreServices/RawCamera.bundle/RawCamera
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct {
	unsigned char ChAber_SW_Extended;
	unsigned short CA_blu[8];
	unsigned short CA_red[8];
	short BG[8];
	short RG[8];
} SCD_Struct_De0;

typedef struct {
	unsigned char FujiCAEnable;
	int numberOfPoints;
	int maxDistance;
	float CA_LR[16];
	float CA_red[16];
	float CA_blu[16];
} SCD_Struct_De1;

typedef struct {
	unsigned char FujiLensCorrectionEnable;
	int maxDistance;
	int numberOfPoints;
	float lengthRatio[16];
	float factor[16];
} SCD_Struct_De2;

typedef struct otrc_s {
	float s0;
	float y1;
	float s1;
	float y2;
	float s2;
	float y3;
	float s3;
	float s4;
	BOOL disabled;
} otrc_s;

typedef struct signalNoiseModel_s {
	float a;
	float b;
	float c;
	float PRNU;
} signalNoiseModel_s;

typedef struct reconstructionDataV4_s {
	unsigned pattern;
	int bitmapType;
	BOOL despeckleBlackNoiseEnabled;
	BOOL blackLevelExtendEnabled;
	float blackDespeckleNoiseFactor;
	BOOL greenSplitEnabled;
	BOOL unknownDNGCamera;
	float greenSplitRed;
	float greenSplitGreen1;
	float greenSplitBlue;
	int greenBayerSplit;
	BOOL HREnabled;
	float HRGreenClip;
	BOOL SPEEnabled;
	float SPEDeadNoiseFactor;
	float SPEDeadNoticeabilityFactor;
	float SPEHotNoiseFactor;
	BOOL DESEnabled;
	float DESNoiseFactor;
	float DESSignalToNoiseThreshold;
	int DESDoEarlyOut;
	float DESEarlyOutFactor;
	int DESDoRed;
	int DESDoGreen;
	int DESDoBlue;
	int DESTaperMethod;
	int DESMethod;
	float DESCloseThreshold;
	SCD_Struct_De0 CAParameters;
	BOOL CACorrectionEnabled;
	float CACorrectionRedPower;
	float CACorrectionBluePower;
	float CACorrectionRedScale;
	float CACorrectionBlueScale;
	int fullWidth;
	int fullHeight;
	BOOL vignetteCorrectionEnabled;
	float vignetteCorrectionPower;
	float vignetteCorrectionAmount;
	SCD_Struct_De1 fujiCAParameters;
	SCD_Struct_De2 fujiLensParameters;
	float chromaBlurHighFrequencyThreshold;
	float highFrequencyNoiseFactor;
	BOOL chromaBlurEnabled;
	BOOL noAntiAliasingFilter;
	float chromaBlurRadius;
	float chromaBlurRadius2;
	float powerBlurNoiseFactor;
	float cnrNoiseFactor;
	float cnrRadius;
	float cnrAmount;
	float cnrBias;
	float chromaBlurEdgeThreshold;
	float chromaBlurEdgeThreshold2;
	BOOL onePassDemosaic;
	float adaptiveNormalizationNoiseFactor;
	BOOL adaptiveNormalizationSimple;
	int adaptiveNormalizationDirectionFindingMethod;
	BOOL fujiGreenReconstructionCopyRaw;
	BOOL fujiGreenReconstructionHighFrequency;
	float fujiDirectionsNoiseFactor;
	int fujiGreenSmoothingEnabled;
	int fujiGreenSmoothingThreshold;
	float fujiGreenSmoothingSharpeningAmount;
	float fujiGreenSmoothingCornerThreshold;
	float fujiGreenSmoothingAdjuster;
	BOOL fujiRedBluePlanarValidity;
	int redBlueDefringe;
	int redBlueRangeLimit;
	int redBlueGradientThreshold;
	int redBlueDumbOnly;
	int redBlueGreenOnly;
	int colorSmoothingEnabled;
	float colorSmoothingSharpnessAmount;
	float resampleHorizScale;
	float resampleVertScale;
	float resampleSharpness;
	float resamplePower;
	int resampleRadial;
	int sourceCropColumn;
	int sourceCropRow;
	float minimumSignalToNoiseRatio;
	float maximumSignalToNoiseRatio;
	float factors[3];
	float RVector[3];
	float GVector[3];
	float BVector[3];
	float bias[3];
	float clipLevels[3];
	int biasOff;
	BOOL boostEnabled;
	otrc_s otrc;
	float gamma;
	float shadowDesaturatePoint;
	float shadowDesaturateWidth;
	float shadowDesaturateAmount;
	float xScale;
	float yScale;
	int ISO;
	float blackLevels[4];
	float darkNoise[4];
	BOOL individualQuadratics;
	signalNoiseModel_s signalNoiseModels[4];
	BOOL moireSuppressionEnabled;
	float hueMagMR;
	float hueMagRY;
	float hueMagYG;
	float hueMagGC;
	float hueMagCB;
	float hueMagBM;
	BOOL useGPUEnabled;
} reconstructionDataV4_s;

typedef struct noiseVars {
	float factor4[4];
	float ifactor4[4];
	float blacklevel4[4];
	float darknoise24[4];
	float coeffA4[4];
	float coeffB4[4];
	float coeffC4[4];
} noiseVars;

typedef struct {
	int width;
	int height;
	char* name;
	int programID;
	char* functionName;
	int workGroupSize;
	int CPUonly;
} SCD_Struct_De7;

typedef struct {
	int nBuffers;
	int width;
	int height;
	int samplesPerPixel;
	int bytesPerSample;
	unsigned long long flags;
	int inputSpecifier;
	int highWaterMark;
} SCD_Struct_De8;

typedef struct {
	int kernelID;
	int width;
	int height;
	unsigned long long event;
} SCD_Struct_De9;

typedef struct OpenCLSharedBuffer {
	unsigned long long size;
	unsigned long long width;
	unsigned long long height;
	int samplesPerPixel;
	int bytesPerSample;
	unsigned long long externalRowSamples;
	unsigned long long flags;
	unsigned long long buf;
	BOOL inUse;
	BOOL externallyProvided;
	BOOL externalInput;
	int tag;
} OpenCLSharedBuffer;

typedef struct {
	int width;
	int height;
	int samplesPerPixel;
	int bytesPerSample;
	int size;
	int factor;
	char* name;
} SCD_Struct_De11;

typedef struct {
	double start;
	double end;
	double time;
	BOOL openCL;
	int kernelID;
	char str[128];
} SCD_Struct_De12;

typedef struct tableVars {
	_OpenCLSharedBuffer redNoisePerceptualBuffer;
	_OpenCLSharedBuffer redNoiseBuffer;
	_OpenCLSharedBuffer greenNoisePerceptualBuffer;
	_OpenCLSharedBuffer greenNoiseBuffer;
	_OpenCLSharedBuffer greenNoisePlainBuffer;
	_OpenCLSharedBuffer blueNoisePerceptualBuffer;
	_OpenCLSharedBuffer blueNoiseBuffer;
	_OpenCLSharedBuffer perceptualBuffer;
	_OpenCLSharedBuffer reciprocalBuffer;
	_OpenCLSharedBuffer reciprocal2Buffer;
	_OpenCLSharedBuffer boostBuffer;
	_OpenCLSharedBuffer highFrequencyBuffer;
	_OpenCLSharedBuffer FujiEXRResampleBuffer;
	int redSN1;
	int redSN2;
	int greenSN1;
	int greenSN2;
	int blueSN1;
	int blueSN2;
	int redMaxNoise;
	int greenMaxNoise;
	int blueMaxNoise;
	int reciprocal2Table;
	unsigned short boostTable;
	float highFrequencyTable;
} tableVars;

typedef struct {
	int initialized;
	BOOL contextProvidedExternally;
	BOOL inputAndOutputBuffersProvidedExternally;
	BOOL GPU;
	BOOL CPU32;
	BOOL useAutoVectorizer;
	unsigned long long device_id;
	unsigned long long commands;
	int nProgramIDs;
	int nKernelIDs;
	int nSharedBufferShapes;
	int nSharedBuffers;
	char* programNames[50];
	SCD_Struct_De7 kernelInfoRecords[100];
	SCD_Struct_De8 sharedBufferShapes[20];
	unsigned long long programs[50];
	unsigned long long kernels[100];
	int nKernelInvocations;
	SCD_Struct_De9 invocations[6000];
	_OpenCLSharedBuffer inputBuffer1;
	_OpenCLSharedBuffer inputBuffer2;
	_OpenCLSharedBuffer inputBuffer3;
	OpenCLSharedBuffer sharedBuffers[64];
	SCD_Struct_De11 specs[100];
	int nSpecs;
	double timeTotals[100];
	double externalTimeTotals[9];
	int sizes[8];
	int ntasks;
	SCD_Struct_De12 tasks[200];
	char kernelDirectory[1024];
} SCD_Struct_De14;

typedef struct {
	int initialized;
	BOOL ForRAWFilter;
	int showTiming;
	tableVars T;
	noiseVars N;
	SCD_Struct_De14 C;
	unsigned short mems[13];
	char GPUDeviceName[256];
} SCD_Struct_De15;

typedef struct {
	int highFrequencyThreshold;
	int iradius;
	int maxradius;
	int noAntiAliasingFilter;
	float noiseFactor;
	BOOL pass1Enabled;
	BOOL pass2Enabled;
	BOOL pass3Enabled;
	BOOL pass4Enabled;
	int thresh1;
	int thresh2;
	int thresh3;
	int thresh4;
	int pass2Despeckle;
	int pass2DespeckleCountThreshold;
	int pass2DespeckleLuminanceThreshold;
	float pass2DespeckleDifferenceAmount;
	int pass2DespeckleAverageCloseIn;
} SCD_Struct_De16;

typedef struct {
	int minrow;
	int maxrow;
	int mincol;
	int maxcol;
} SCD_Struct_De17;

typedef struct {
	int initialized;
	int showTiming;
	int clMaxInternalTileHeight;
	int clMaxInternalTileWidth;
	int clTileBorder;
	int row;
	int col;
	tableVars T;
	noiseVars N;
	SCD_Struct_De16 V;
	const econstructionDataV4_s dataV4;
	BOOL outputHalf;
	_noiseTables nt;
	SCD_Struct_De14 C;
	int nProducts;
	int product;
	unsigned short mems[20];
	int lastAllocateBuffersWidth;
	int lastAllocateBuffersHeight;
	int lastAllocateBuffersShow;
	char GPUDeviceName[256];
	SCD_Struct_De17 destinationTileRect;
} SCD_Struct_De18;

typedef struct noiseTables {
	unsigned short tables[13];
	int redSN1;
	int redSN2;
	int greenSN1;
	int greenSN2;
	int blueSN1;
	int blueSN2;
	int redMaxNoise;
	int greenMaxNoise;
	int blueMaxNoise;
	noiseVars N;
	SCD_Struct_De16 V;
} noiseTables;

typedef struct reconstructionDataV2_s {
	unsigned pattern;
	int bitmapType;
	BOOL despeckleBlackNoiseEnabled;
	BOOL blackLevelExtendEnabled;
	float blackDespeckleNoiseFactor;
	float noiseEstimate;
	BOOL greenSplitEnabled;
	BOOL unknownDNGCamera;
	float greenSplitRed;
	float greenSplitGreen1;
	float greenSplitBlue;
	int greenBayerSplit;
	float extendHighlightsThreshold;
	BOOL HREnabled;
	float HRGreenClip;
	BOOL SPEEnabled;
	BOOL SPERobust;
	float SPENoiseFactor1;
	float SPENoiseFactor2;
	BOOL NREnabled;
	float NRNoiseFactor;
	BOOL CACorrectionEnabled;
	float CACorrectionRedPower;
	float CACorrectionBluePower;
	float CACorrectionRedScale;
	float CACorrectionBlueScale;
	int fullWidth;
	int fullHeight;
	BOOL vignetteCorrectionEnabled;
	float vignetteCorrectionPower;
	float vignetteCorrectionAmount;
	float chromaBlurHighFrequencyThreshold;
	float highFrequencyNoiseFactor;
	int highFrequencySignalType;
	int gradientSignalType;
	int halfSizeMethod;
	float halfSizeImageGreenFraction;
	BOOL halfSizeHack;
	int fringeProcessingEnabled;
	int fringeProcessingMethod;
	float fringeProcessingThreshold1;
	float fringeProcessingThreshold2;
	float fringeProcessingNoiseFactor;
	BOOL chromaBlurEnabled;
	BOOL noAntiAliasingFilter;
	BOOL powerBlurThreePass;
	BOOL gradientProcessing;
	float chromaBlurRadius;
	float chromaBlurRadius2;
	float powerBlurNoiseFactor;
	float chromaBlurEdgeThreshold;
	float chromaBlurEdgeThreshold2;
	float gradientThreshold;
	int adaptiveNormalizationMethod;
	int adaptiveNormalizationHard;
	float adaptiveNormalizationNoiseFactor;
	float normalizeOffsetFraction;
	float directionNoiseFactor;
	float directionLowThreshold;
	BOOL verticalCorrelationEnabled;
	float verticalCorrelationThreshold;
	float verticalEdgeThreshold;
	float verticalFlatnessThreshold;
	BOOL horizontalCorrelationEnabled;
	float horizontalCorrelationThreshold;
	float horizontalEdgeThreshold;
	BOOL diagonalCorrelationEnabled;
	float diagonalCorrelationThreshold;
	int correlationOldStyle;
	BOOL correlationHack;
	BOOL greenDespeckleEnabled;
	float greenDespeckleThreshold;
	int greenDespeckleDiagonalImprovement;
	int interpolationType;
	int extendedHighlightSmoothingType;
	BOOL sharpenEdgesEnabled;
	float sharpenRadius;
	float sharpenIntensity;
	float sharpenAbsoluteLimit;
	float sharpenEdgeIntensity;
	float sharpenEdgeMaskSoftness;
	float sharpenNoiseFactor;
	BOOL redBlueNoiseReductionEnabled;
	BOOL redBlueHack;
	int chromaScaleMethod;
	BOOL chromaScaleHard;
	float chromaScaleDetailFactor;
	float minimumSignalToNoiseRatio;
	float maximumSignalToNoiseRatio;
	float maximumDetailDifference;
	float factors[3];
	float RVector[3];
	float GVector[3];
	float BVector[3];
	float bias[3];
	float blacks[4];
	float clipLevels[3];
	int biasOff;
	BOOL boostEnabled;
	otrc_s otrc;
	float gamma;
	float hueMagMR;
	float hueMagRY;
	float hueMagYG;
	float hueMagGC;
	float hueMagCB;
	float hueMagBM;
	float shadowDesaturatePoint;
	float shadowDesaturateWidth;
	float shadowDesaturateAmount;
	float xScale;
	float yScale;
	int noiseARegressionType;
	float noiseACCoefficient;
	float noiseADCoefficient;
	float noiseAECoefficient;
	int noiseBRegressionType;
	float noiseBCCoefficient;
	float noiseBDCoefficient;
	float noiseBECoefficient;
	int noiseISOPin;
	int ISO;
	BOOL cameraV2PlusHighlightNoiseCharacterized;
	float breakpointFraction;
	int noiseAHRegressionType;
	float noiseAHCCoefficient;
	float noiseAHDCoefficient;
	float noiseAHECoefficient;
	int noiseBHRegressionType;
	float noiseBHCCoefficient;
	float noiseBHDCoefficient;
	float noiseBHECoefficient;
	int noiseAH2RegressionType;
	float noiseAH2CCoefficient;
	float noiseAH2DCoefficient;
	float noiseAH2ECoefficient;
	int noiseBH2RegressionType;
	float noiseBH2CCoefficient;
	float noiseBH2DCoefficient;
	float noiseBH2ECoefficient;
	float fujiHigh;
	float hilitefactors[3];
	BOOL cameraV2PlusByTable;
	float isoab[50][3];
} reconstructionDataV2_s;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct _NSZone* NSZoneRef;

