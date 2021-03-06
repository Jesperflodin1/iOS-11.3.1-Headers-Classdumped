/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ApplePushService/APSMessage.h>

@class NSDate, NSData;

@interface APSIncomingMessage : APSMessage

@property (nonatomic,copy) NSDate * timestamp; 
@property (nonatomic,copy) NSData * token; 
@property (assign,getter=wasFromStorage,nonatomic) BOOL fromStorage; 
@property (assign,getter=wasLastMessageFromStorage,nonatomic) BOOL lastMessageFromStorage; 
@property (assign,nonatomic) long long priority; 
-(void)setFromStorage:(BOOL)arg1 ;
-(NSDate *)timestamp;
-(void)setTimestamp:(NSDate *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(NSData *)token;
-(void)setToken:(NSData *)arg1 ;
-(BOOL)wasLastMessageFromStorage;
-(void)setLastMessageFromStorage:(BOOL)arg1 ;
-(BOOL)wasFromStorage;
@end

