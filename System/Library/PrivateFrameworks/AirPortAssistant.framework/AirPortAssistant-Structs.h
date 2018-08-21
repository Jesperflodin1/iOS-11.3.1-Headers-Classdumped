/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct ACPBrowserSession* ACPBrowserSessionRef;

typedef struct AutoGuessContext* AutoGuessContextRef;

typedef struct {
	unsigned long long field1;
	unsigned field2;
	unsigned field3;
	unsigned field4;
	int field5;
} SCD_Struct_In2;

typedef struct CGImage* CGImageRef;

typedef struct _BaseStation* BaseStationRef;

typedef struct WiFiShimContext* WiFiShimContextRef;

typedef struct BSConfigurationContext* BSConfigurationContextRef;

typedef struct StepByStepContext* StepByStepContextRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

typedef struct __CTFont* CTFontRef;

typedef struct __CTLine* CTLineRef;

typedef struct CGColor* CGColorRef;

typedef struct CGContext* CGContextRef;

typedef struct {
	CGPoint field1;
	CGPoint field2;
	CGPoint field3;
	CGPoint field4;
} SCD_Struct_Ne15;

typedef struct CGPath* CGPathRef;

typedef struct {
	double startTime;
	unsigned char userChangedFriendlyName;
	unsigned char playPasswordSet;
	unsigned char adminPasswordSet;
	unsigned char destinationNetworkRecommendationUsed;
	double secondsToGetLinkUpOnSWAP;
	int wifiJoinSWAPError;
	unsigned char hitJoiningTargetSWAPTimeout;
	int rssiOfSWAP;
	unsigned snrOfSWAP;
	unsigned channelOfSWAP;
} SCD_Struct_AU17;

typedef struct {
	double secondsToGetLinkUpOnDestination;
	int wifiJoinDestinationAPError;
	unsigned char destinationNetworkPSKInKeychain;
	unsigned char hitJoiningDestinationAPTimeout;
	int rssiOfDestinationAP;
	unsigned snrOfDestinationAP;
	unsigned channelOfDestinationAP;
} SCD_Struct_AU18;

