/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CKDatabaseOperation.h>

@class NSArray, NSMutableDictionary;

@interface CKFetchSubscriptionsOperation : CKDatabaseOperation {

	BOOL _isFetchAllSubscriptionsOperation;
	/*^block*/id _fetchSubscriptionCompletionBlock;
	NSArray* _subscriptionIDs;
	NSArray* _subscriptions;
	NSMutableDictionary* _subscriptionsBySubscriptionID;
	NSMutableDictionary* _subscriptionErrors;

}

@property (nonatomic,retain) NSArray * subscriptions;                                          //@synthesize subscriptions=_subscriptions - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionsBySubscriptionID;              //@synthesize subscriptionsBySubscriptionID=_subscriptionsBySubscriptionID - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * subscriptionErrors;                         //@synthesize subscriptionErrors=_subscriptionErrors - In the implementation block
@property (assign,nonatomic) BOOL isFetchAllSubscriptionsOperation;                            //@synthesize isFetchAllSubscriptionsOperation=_isFetchAllSubscriptionsOperation - In the implementation block
@property (nonatomic,copy) NSArray * subscriptionIDs;                                          //@synthesize subscriptionIDs=_subscriptionIDs - In the implementation block
@property (nonatomic,copy) id fetchSubscriptionCompletionBlock;                                //@synthesize fetchSubscriptionCompletionBlock=_fetchSubscriptionCompletionBlock - In the implementation block
+(id)fetchAllSubscriptionsOperation;
-(id)init;
-(void)fillOutOperationInfo:(id)arg1 ;
-(void)fillFromOperationInfo:(id)arg1 ;
-(BOOL)hasCKOperationCallbacksSet;
-(BOOL)CKOperationShouldRun:(id*)arg1 ;
-(void)performCKOperation;
-(void)_handleProgressCallback:(id)arg1 ;
-(NSMutableDictionary *)subscriptionErrors;
-(void)setSubscriptionErrors:(NSMutableDictionary *)arg1 ;
-(void)setSubscriptionIDs:(NSArray *)arg1 ;
-(void)setFetchSubscriptionCompletionBlock:(id)arg1 ;
-(NSMutableDictionary *)subscriptionsBySubscriptionID;
-(NSArray *)subscriptions;
-(id)fetchSubscriptionCompletionBlock;
-(void)setSubscriptionsBySubscriptionID:(NSMutableDictionary *)arg1 ;
-(id)activityCreate;
-(void)_finishOnCallbackQueueWithError:(id)arg1 ;
-(NSArray *)subscriptionIDs;
-(id)initWithSubscriptionIDs:(id)arg1 ;
-(void)setSubscriptions:(NSArray *)arg1 ;
-(BOOL)isFetchAllSubscriptionsOperation;
-(void)setIsFetchAllSubscriptionsOperation:(BOOL)arg1 ;
@end

