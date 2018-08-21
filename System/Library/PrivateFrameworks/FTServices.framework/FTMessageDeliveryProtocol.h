/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, IDSBaseMessage, NSArray;


@protocol FTMessageDeliveryProtocol <NSObject>
@property (nonatomic,copy) NSString * userAgent; 
@property (readonly) BOOL hasQueuedItems; 
@property (readonly) BOOL busy; 
@property (assign) BOOL retryInAirplaneMode; 
@property (assign) BOOL logToRegistration; 
@property (readonly) IDSBaseMessage * currentMessage; 
@property (readonly) NSArray * queuedMessages; 
@property (readonly) NSArray * allMessages; 
@property (readonly) long long maxMessageSize; 
@property (readonly) long long maxLargeMessageSize; 
@property (assign) unsigned long long maxConcurrentMessages; 
@optional
-(void)invalidate;
-(void)networkStateChanged;
-(NSArray *)queuedMessages;
-(BOOL)logToRegistration;
-(long long)maxMessageSize;
-(BOOL)hasQueuedItems;
-(long long)maxLargeMessageSize;
-(void)setLogToRegistration:(BOOL)arg1;
-(BOOL)retryInAirplaneMode;
-(void)setRetryInAirplaneMode:(BOOL)arg1;
-(unsigned long long)maxConcurrentMessages;
-(void)setMaxConcurrentMessages:(unsigned long long)arg1;
-(void)cancelMessage:(id)arg1;
-(BOOL)sendMessage:(id)arg1;
-(BOOL)busy;
-(void)setUserAgent:(id)arg1;
-(NSString *)userAgent;
-(NSArray *)allMessages;
-(IDSBaseMessage *)currentMessage;

@end

