/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKitDaemon/CKDDatabaseOperation.h>

@class NSMutableArray, NSArray;

@interface CKDFetchSubscriptionsOperation : CKDDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	NSMutableArray* _subscriptions;
	/*^block*/id _subscriptionFetchedProgressBlock;
	NSArray* _subscriptionIDs;

}

@property (nonatomic,retain) NSMutableArray * subscriptions;                     //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSArray * subscriptionIDs;                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;              //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) id subscriptionFetchedProgressBlock;                  //@synthesize subscriptionFetchedProgressBlock=_subscriptionFetchedProgressBlock - In the implementation block
-(void)main;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(NSMutableArray *)subscriptions;
-(id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2 ;
-(void)setSubscriptionFetchedProgressBlock:(id)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptionIDs;
-(void)setSubscriptions:(NSMutableArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(id)subscriptionFetchedProgressBlock;
-(void)_handleSubscriptionFetched:(id)arg1 withID:(id)arg2 responseCode:(id)arg3 ;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
@end

