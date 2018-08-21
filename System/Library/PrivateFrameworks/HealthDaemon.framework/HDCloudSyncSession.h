/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDSyncSession.h>

@class NSSet, NSDictionary;

@interface HDCloudSyncSession : HDSyncSession {

	NSSet* _excludedSyncStores;
	NSDictionary* _anchorClockForExcludedStores;

}

@property (nonatomic,readonly) NSDictionary * anchorClockForExcludedStores;              //@synthesize anchorClockForExcludedStores=_anchorClockForExcludedStores - In the implementation block
-(id)excludedSyncStores;
-(id)newChangeWithSyncEntityClass:(Class)arg1 ;
-(id)predicateForSyncEntityClass:(Class)arg1 ;
-(long long)maxEncodedBytesPerMessageForSyncEntityClass:(Class)arg1 ;
-(void)setExcludedSyncStores:(id)arg1 ;
-(NSDictionary *)anchorClockForExcludedStores;
@end

