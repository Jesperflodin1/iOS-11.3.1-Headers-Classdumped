/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDURLRequest.h>

@class NSMutableArray, NSArray, NSMutableDictionary;

@interface CKDGetSubscriptionsURLRequest : CKDURLRequest {

	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedBlock;
	NSArray* _subscriptionIDs;
	NSMutableDictionary* _subscriptionIDByRequestID;

}

@property (nonatomic,retain) NSArray * subscriptionIDs;                                    //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * subscriptions;                               //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionIDByRequestID;              //@synthesize subscriptionIDByRequestID=_subscriptionIDByRequestID - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedBlock;                                    //@synthesize subscriptionFetchedBlock=_subscriptionFetchedBlock - In the implementation block
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(NSMutableArray *)subscriptions;
-(id)generateRequestOperations;
-(id)requestDidParseProtobufObject:(id)arg1 ;
-(void)requestDidParseNodeFailure:(id)arg1 ;
-(id)requestOperationClasses;
-(NSMutableDictionary *)subscriptionIDByRequestID;
-(void)setSubscriptionIDByRequestID:(NSMutableDictionary *)arg1 ;
-(NSArray *)subscriptionIDs;
-(id)subscriptionFetchedBlock;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(void)setSubscriptionFetchedBlock:(id)arg1 ;
-(int)operationType;
@end

