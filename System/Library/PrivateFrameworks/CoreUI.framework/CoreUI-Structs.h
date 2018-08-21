/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct CGImage* CGImageRef;

typedef struct __CFArray* CFArrayRef;

typedef struct CGPattern* CGPatternRef;

typedef struct CGContext* CGContextRef;

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

typedef struct {
	CGSize field1;
	CGSize field2;
	CGSize field3;
} SCD_Struct_CS7;

typedef struct _NSZone* NSZoneRef;

typedef struct psdGradientColor {
	double red;
	double green;
	double blue;
	double alpha;
} psdGradientColor;

typedef struct CGColorSpace* CGColorSpaceRef;

typedef struct CGPath* CGPathRef;

typedef struct CGColor* CGColorRef;

typedef struct NSRange {
	unsigned long long location;
	unsigned long long length;
} NSRange;

typedef struct renditionkeytoken {
	unsigned short identifier;
	unsigned short value;
} renditionkeytoken;

typedef struct CGFunction* CGFunctionRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct _BOMStorage* BOMStorageRef;

typedef struct {
	unsigned field1;
	unsigned field2;
} SCD_Struct_CU18;

typedef struct cuintproperties {
	unsigned exifOrientation : 4;
	unsigned isAlphaCropped : 1;
	unsigned isOpaque : 1;
	unsigned _reserved : 26;
} cuintproperties;

typedef struct __CFBoolean* CFBooleanRef;

typedef struct __CFData* CFDataRef;

typedef struct slice {
	unsigned x;
	unsigned y;
	unsigned width;
	unsigned height;
} slice;

typedef struct CGPDFDocument* CGPDFDocumentRef;

typedef struct rgbcolor {
	unsigned char r;
	unsigned char g;
	unsigned char b;
} rgbcolor;

typedef struct {
	unsigned effectType;
	unsigned effectParameter;
	/*function pointer*/void* effectValue;
	double floatValue;
	unsigned long long intValue;
	const gbcolor colorValue;
	short angleValue;
	I) enumValue;
} SCD_Struct_CU25;

typedef struct {
	unsigned field1;
	unsigned( field2;
	/*function pointer*/void* field3;
	= field4;
	double field5;
	unsigned long long field6;
	_ field7;
	const gbcolor field8;
	short field9;
	unsigned) field10;
} SCD_Struct_CU26;

typedef struct {
	unsigned long long field1;
	unsigned long long field2;
	unsigned long long field3;
	unsigned long long field4;
	SCD_Struct_CU26 field5[125];
} SCD_Struct_CU27;

typedef struct {
	long long field1;
	char* field2;
	char* field3;
} SCD_Struct_CU28;

typedef struct {
	char* field1;
	char* field2;
	long long field3;
	unsigned long long field4;
} SCD_Struct_CU29;

typedef struct {
	char* field1;
	char* field2;
	renditionkeytoken field3[5_];
	long long field4;
	long long field5;
	SCD_Struct_CU29 field6[12];
} SCD_Struct_CU30;

typedef struct {
	char* field1;
	char* field2;
	BOOL field3;
	long long field4;
	SCD_Struct_CU30 field5[7];
} SCD_Struct_CU31;

typedef struct cuiniproperties {
	unsigned isVectorBased : 1;
	unsigned hasSliceInformation : 1;
	unsigned hasAlignmentInformation : 1;
	unsigned resizingMode : 2;
	unsigned templateRenderingMode : 3;
	unsigned exifOrientation : 4;
	unsigned isAlphaCropped : 1;
	unsigned isFlippable : 1;
	unsigned isTintable : 1;
	unsigned preservedVectorRepresentation : 1;
	unsigned _reserved : 16;
} cuiniproperties;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	CGPoint field9;
} SCD_Struct_CU33;

typedef struct __CTFont* CTFontRef;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	BOOL field6;
} SCD_Struct_CU35;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	float field4;
	float field5;
	BOOL field6;
} SCD_Struct_CU36;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
} SCD_Struct_CU37;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
} SCD_Struct_CU38;

typedef struct {
	unsigned field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	CGPoint field9;
} SCD_Struct_CU39;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
} SCD_Struct_CU40;

typedef struct {
	float field1;
	float field2;
	float field3;
	float field4;
	float field5;
	float field6;
	float field7;
	float field8;
	float field9;
	float field10;
	float field11;
	float field12;
	unsigned field13;
} SCD_Struct_CU41;

