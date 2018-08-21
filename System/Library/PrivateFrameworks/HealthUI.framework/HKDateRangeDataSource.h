/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesDataSource.h>
#import <libobjc.A.dylib/HKDateRangeDataUpdateDelegate.h>

@protocol HKDateRangeDataSourceDelegate;
@class NSMutableDictionary;

@interface HKDateRangeDataSource : HKGraphSeriesDataSource <HKDateRangeDataUpdateDelegate> {

	id<HKDateRangeDataSourceDelegate> _sourceDelegate;
	NSMutableDictionary* _pathToDataBlock;

}

@property (nonatomic,readonly) id<HKDateRangeDataSourceDelegate> sourceDelegate;              //@synthesize sourceDelegate=_sourceDelegate - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pathToDataBlock;                           //@synthesize pathToDataBlock=_pathToDataBlock - In the implementation block
-(void)invalidateCache;
-(id)_fetchAndCacheDataForPath:(SCD_Struct_HK0)arg1 ;
-(id)cachedBlockForPath:(SCD_Struct_HK0)arg1 context:(id)arg2 ;
-(void)dateRangeDataUpdated;
-(id)initWithSourceDelegate:(id)arg1 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK0)arg1 toPath:(SCD_Struct_HK0)arg2 ;
-(id<HKDateRangeDataSourceDelegate>)sourceDelegate;
-(NSMutableDictionary *)pathToDataBlock;
-(void)setPathToDataBlock:(NSMutableDictionary *)arg1 ;
@end

