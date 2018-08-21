/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BRCNotificationPipe, NSMutableArray, NSString, BRCAccountSession, BRCItemGlobalID;

@interface BRCDataOrDocsScopeGatherer : NSObject {

	BRCNotificationPipe* _pipe;
	/*^block*/id _gatherReply;
	NSMutableArray* _gatheringAppLibraries;
	unsigned long long _gatheringRankCur;
	unsigned long long _gatheringRankMax;
	NSString* _gatheringNamePrefix;
	BRCAccountSession* _session;
	BRCItemGlobalID* _gatheredChildrenItemGlobalID;

}

@property (nonatomic,retain) BRCItemGlobalID * gatheredChildrenItemGlobalID;              //@synthesize gatheredChildrenItemGlobalID=_gatheredChildrenItemGlobalID - In the implementation block
-(void)invalidate;
-(void)done;
-(void)gatherWithBatchSize:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(/*^block*/id)_popGatherReply;
-(id)initWithNotificationPipe:(id)arg1 appLibraries:(id)arg2 startingRank:(unsigned long long)arg3 maxRank:(unsigned long long)arg4 gatherReply:(/*^block*/id)arg5 ;
-(BRCItemGlobalID *)gatheredChildrenItemGlobalID;
-(void)setGatheredChildrenItemGlobalID:(BRCItemGlobalID *)arg1 ;
@end

