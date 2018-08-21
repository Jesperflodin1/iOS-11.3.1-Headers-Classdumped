/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfiguration/MCAggregateLogKey.h>

@class NSString;

@interface MCAggregateLogProfilePayloadKey : MCAggregateLogKey {

	Class _payloadClass;
	NSString* _nameSuffix;

}

@property (assign,nonatomic,__weak) Class payloadClass;              //@synthesize payloadClass=_payloadClass - In the implementation block
@property (nonatomic,retain) NSString * nameSuffix;                  //@synthesize nameSuffix=_nameSuffix - In the implementation block
+(id)payloadClass:(Class)arg1 name:(id)arg2 ;
-(void)setPayloadClass:(Class)arg1 ;
-(Class)payloadClass;
-(id)name;
-(unsigned long long)value;
-(void)setNameSuffix:(NSString *)arg1 ;
-(NSString *)nameSuffix;
@end
