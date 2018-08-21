/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHPropertyMapsGeneratedProtocol.h>
#import <iWorkImport/TSCHStyleOwnerCollaborationSupport.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <iWorkImport/TSCHStyleOwning.h>

@protocol TSCHStyleActAlike, TSCHUnretainedParent;
@class TSCHChartModel, TSCHChartSeriesType, TSUIntegerKeyDictionary, TSCHChartGridAdapter, TSCHTrendLineData, TSCHErrorBarData, NSObject, NSString;

@interface TSCHChartSeries : NSObject <TSCHPropertyMapsGeneratedProtocol, TSCHStyleOwnerCollaborationSupport, TSCHUnretainedParent, TSCHStyleOwning> {

	TSCHChartModel* mChartModel;
	unsigned long long mSeriesIndex;
	TSCHChartSeriesType* mSeriesType;
	TSUIntegerKeyDictionary* mAxisTable;
	TSCHChartGridAdapter* mNameAdapter;
	unsigned long long mBarGapIndex;
	id<TSCHStyleActAlike> mStyle;
	id<TSCHStyleActAlike> mNonStyle;
	BOOL mStyleIsPrivate;
	TSCHTrendLineData* mTrendLineData;
	TSCHErrorBarData* mErrorBarData;
	NSObject*<TSCHUnretainedParent> mSeriesStorage;
	BOOL mIsFakeSeriesForHiddenDataExport;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL isFakeSeriesForHiddenDataExport; 
@property (nonatomic,__weak,readonly) TSCHChartModel * model; 
@property (nonatomic,readonly) unsigned long long seriesIndex; 
@property (assign,nonatomic,__weak) TSCHChartSeriesType * seriesType; 
@property (nonatomic,readonly) TSCHTrendLineData * trendLineData; 
@property (nonatomic,readonly) BOOL showTrendLineLegendText; 
@property (nonatomic,readonly) NSString * trendLineLegendText; 
@property (nonatomic,readonly) TSCHErrorBarData * errorBarData; 
@property (nonatomic,readonly) NSObject*<TSCHUnretainedParent> seriesStorage; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) unsigned long long barGapIndex; 
+(id)computedFillOrStroke:(id)arg1 forSeriesIndex:(unsigned long long)arg2 numberOfThemeSeries:(unsigned long long)arg3 ;
+(id)defaultNumberFormat;
+(id)computableProperties;
+(id)stackedPercentageNumberFormat;
+(unsigned char)styleOwnerPathType;
-(id)objectValueForProperty:(int)arg1 ;
-(void)clearParent;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(TSCHChartSeriesType *)seriesType;
-(id)chartInfo;
-(NSObject*<TSCHUnretainedParent>)seriesStorage;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(double)effectiveLabelExplosion;
-(id)g_genericToDefaultPropertyMap;
-(id)g_operationPropertyNameForGenericProperty:(int)arg1 ;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)operationPropertyNameFromGenericProperty:(int)arg1 ;
-(id)nonstyle;
-(id)swapTuplesForMutations:(id)arg1 forImport:(BOOL)arg2 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(void)setNonStyle:(id)arg1 ;
-(BOOL)isMultiData;
-(void)resetSeriesStorage;
-(id)valueForAxis:(id)arg1 index:(unsigned long long)arg2 ;
-(int)gridValueType;
-(BOOL)hasCustomFormatForGridValueType:(int)arg1 ;
-(id)customFormatForGridValueType:(int)arg1 ;
-(id)axisIDForAxisType:(int)arg1 ;
-(id)multiDataValueEnumeratorForAxisID:(id)arg1 ;
-(unsigned long long)multiDataSetIndex;
-(id)valueForAxis:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3 ;
-(id*)valuesForAxis:(id)arg1 indexes:(NSRange)arg2 ;
-(int)adjustedNumberFormatType;
-(id)axisForAxisType:(int)arg1 ;
-(id)initWithChartModel:(id)arg1 index:(unsigned long long)arg2 ;
-(void)modelSyncSetStyle:(id)arg1 ;
-(void)modelSyncSetNonStyle:(id)arg1 ;
-(void)setSeriesType:(TSCHChartSeriesType *)arg1 ;
-(void)setBarGapIndex:(unsigned long long)arg1 ;
-(void)clearAxisIDs;
-(void)setAxisID:(id)arg1 forAxisType:(int)arg2 ;
-(void)setGridAdapter:(id)arg1 forAxisType:(int)arg2 ;
-(void)setGridAdapterForName:(id)arg1 ;
-(id)axisTypesForValueLabelString;
-(void)invalidateCacheDataForSynchronization;
-(TSCHTrendLineData *)trendLineData;
-(BOOL)showTrendLineLegendText;
-(NSString *)trendLineLegendText;
-(id)p_axisStorageForType:(int)arg1 create:(BOOL)arg2 ;
-(unsigned long long)multiDataSetIndexForAxis:(id)arg1 ;
-(unsigned long long)multiDataSetIndexForAxisID:(id)arg1 ;
-(id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2 multiDataSetIndex:(unsigned long long)arg3 ;
-(id*)valuesForAxis:(id)arg1 indexes:(NSRange)arg2 multiDataSetIndex:(unsigned long long)arg3 ;
-(void)setSeriesStorage:(NSObject*<TSCHUnretainedParent>)arg1 ;
-(id)seriesNameStringForValueIndex:(unsigned long long)arg1 ;
-(id)valueLabelStringForValueIndex:(unsigned long long)arg1 ;
-(BOOL)isFakeSeriesForHiddenDataExport;
-(id)p_seriesNonStyleOrDefaultNonStyle;
-(BOOL)p_seriesIndexWithinThemeStyleCount;
-(id)p_representativeThemeSeries;
-(void)p_generateComputedProperty:(int)arg1 objectValue:(id*)arg2 intValue:(int*)arg3 floatValue:(float*)arg4 ;
-(TSCHErrorBarData *)errorBarData;
-(id)valueForAxisID:(id)arg1 index:(unsigned long long)arg2 ;
-(void)setValue:(id)arg1 forAxisID:(id)arg2 index:(unsigned long long)arg3 ;
-(BOOL)renderSeriesForClass:(Class)arg1 ;
-(id)formattedValueLabelStringForValueIndex:(unsigned long long)arg1 ;
-(unsigned)valueLabelPosition;
-(unsigned long long)barGapIndex;
-(void)setIsFakeSeriesForHiddenDataExport:(BOOL)arg1 ;
-(BOOL)floatValueForLabelExplosion:(float*)arg1 ;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)style;
-(void)setStyle:(id)arg1 ;
-(id)context;
-(TSCHChartModel *)model;
-(id)valueForProperty:(int)arg1 ;
-(unsigned long long)numberOfValues;
-(id)drawableInfo;
-(id)defaultProperties;
-(unsigned long long)seriesIndex;
@end
