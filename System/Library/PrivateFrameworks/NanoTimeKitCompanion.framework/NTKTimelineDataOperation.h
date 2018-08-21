/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CLKComplicationDataSource;
@class NTKComplicationDataSource, CLKComplication;

@interface NTKTimelineDataOperation : NSObject {

	NTKComplicationDataSource* _localDataSource;
	id<CLKComplicationDataSource> _remoteDataSource;
	CLKComplication* _remoteComplication;
	BOOL _started;
	BOOL _canceled;

}

@property (nonatomic,readonly) BOOL started;               //@synthesize started=_started - In the implementation block
@property (nonatomic,readonly) BOOL canceled;              //@synthesize canceled=_canceled - In the implementation block
+(id)operationWithLocalDataSource:(id)arg1 ;
+(id)operationWithRemoteDataSource:(id)arg1 complication:(id)arg2 ;
-(BOOL)canceled;
-(void)cancel;
-(void)_start;
-(void)start;
-(BOOL)started;
-(void)_cancel;
-(BOOL)_validateEntry:(id)arg1 ;
-(id)_finalizedValidEntries:(id)arg1 ;
@end

