/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSDFill.h>

@class TSCH3DLightingModel, TSCH3DFillSetIdentifier, TSDFill, NSNumber;

@interface TSCH3DFill : TSDFill {

	TSCH3DLightingModel* _lightingModel;
	TSCH3DFillSetIdentifier* _identifier;
	TSDFill* _fallbackFill;
	NSNumber* _percentage;
	TSDFill* _cachedImageFill;
	CGSize _cachedImageFillSize;
	TSDFill* _swatchFill;

}

@property (nonatomic,retain) NSNumber * percentage;                             //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) float percentageValue; 
@property (readonly) TSCH3DLightingModel * lightingModel; 
@property (nonatomic,retain) TSCH3DFillSetIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (readonly) TSDFill * swatchFill;                                      //@synthesize swatchFill=_swatchFill - In the implementation block
+(id)instanceWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
+(id)fillWithIdentifier:(id)arg1 ;
+(id)fillWithSageFillData:(id)arg1 ;
+(id)lightingModelWithSageFillData:(id)arg1 ;
+(id)fillWithLightingModel:(id)arg1 identifier:(id)arg2 ;
+(id)fill;
-(void)saveToArchive:(FillArchive*)arg1 archiver:(id)arg2 ;
-(void)didInitFromSOS;
-(id)initWithArchive:(const FillArchive*)arg1 unarchiver:(id)arg2 ;
-(TSCH3DLightingModel *)lightingModel;
-(BOOL)hasCompleteData;
-(id)convertForChartSeriesType:(id)arg1 context:(id)arg2 ;
-(TSDFill *)swatchFill;
-(id)convertToSimpleTSDFillWithSize:(unsigned long long)arg1 context:(id)arg2 ;
-(id)initWithLightingModel:(id)arg1 identifier:(id)arg2 ;
-(float)percentageValue;
-(void)nonatomicallySetLightingModel:(id)arg1 ;
-(void)assignQuicklookColorToMaterialDiffuseColorForLightingModel:(id)arg1 ;
-(id)p_lazyLightingModel;
-(id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 context:(id)arg3 ;
-(id)p_imageFillForSize:(CGSize)arg1 context:(id)arg2 ;
-(id)p_imageFillForRect:(CGRect)arg1 context:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 offset:(CGPoint)arg3 ;
-(id)p_iconFill;
-(id)lightenByPercent:(float)arg1 ;
-(void)nonatomicallyClearLightingModel;
-(BOOL)identifierReferencesUnavailableLocalBundle;
-(id)renderingLightingModelWithLightings:(id)arg1 ;
-(id)p_convertToTSDFillWithSize:(unsigned long long)arg1 technique:(int)arg2 ;
-(void)setFallbackFill:(id)arg1 ;
-(id)sageFillData;
-(id)representativeDiffuseColor;
-(BOOL)tsch_hasAllResources;
-(void)setPercentage:(NSNumber *)arg1 ;
-(NSNumber *)percentage;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(TSCH3DFillSetIdentifier *)identifier;
-(void)setIdentifier:(TSCH3DFillSetIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isOpaque;
-(id)referenceColor;
-(void)drawSwatchInRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintPath:(CGPathRef)arg1 inContext:(CGContextRef)arg2 ;
-(void)paintRect:(CGRect)arg1 inContext:(CGContextRef)arg2 ;
-(int)fillType;
-(void)paintPath:(CGPathRef)arg1 naturalBounds:(CGRect)arg2 inContext:(CGContextRef)arg3 isPDF:(BOOL)arg4 ;
@end

