/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssertionServices.framework/AssertionServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol BKSAssertionClientMultiplexerListening <NSObject>
@property (nonatomic,readonly) NSString * supportedAssertionType; 
@required
-(NSString *)supportedAssertionType;
-(void)assertionQueue_handleMessage:(id)arg1;
-(void)assertionQueue_handleEvent:(id)arg1 ofType:(unsigned long long)arg2;
-(void)assertionQueue_handleDestroyEvent:(id)arg1;
-(void)connectionWasDestroyed;

@end

