/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesDataSourceDelegate;
#import <HealthUI/HealthUI-Structs.h>
@interface HKGraphSeriesDataSource : NSObject {

	id<HKGraphSeriesDataSourceDelegate> _delegate;
	long long _minimumZoom;
	long long _maximumZoom;

}

@property (assign,nonatomic,__weak) id<HKGraphSeriesDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long minimumZoom;                                            //@synthesize minimumZoom=_minimumZoom - In the implementation block
@property (assign,nonatomic) long long maximumZoom;                                            //@synthesize maximumZoom=_maximumZoom - In the implementation block
-(id)init;
-(id<HKGraphSeriesDataSourceDelegate>)delegate;
-(void)setDelegate:(id<HKGraphSeriesDataSourceDelegate>)arg1 ;
-(void)invalidateCache;
-(id)cachedBlockForPath:(SCD_Struct_HK9)arg1 context:(id)arg2 ;
-(void)blocksRequestedFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(SCD_Struct_HK9)blockPathForX:(id)arg1 zoom:(long long)arg2 ;
-(BOOL)blocksAvailableFromPath:(SCD_Struct_HK9)arg1 toPath:(SCD_Struct_HK9)arg2 ;
-(long long)minimumZoom;
-(long long)maximumZoom;
-(void)setMinimumZoom:(long long)arg1 ;
-(void)setMaximumZoom:(long long)arg1 ;
@end

