/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString, NSDate, NSData;

@interface SALocalSearchShowLocalSearchResult : SADomainCommand

@property (nonatomic,copy) NSString * extSessionGuid; 
@property (nonatomic,copy) NSDate * extSessionGuidCreatedTimestamp; 
@property (nonatomic,copy) NSData * rawData; 
+(id)showLocalSearchResult;
+(id)showLocalSearchResultWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSData *)rawData;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)extSessionGuid;
-(void)setExtSessionGuid:(NSString *)arg1 ;
-(NSDate *)extSessionGuidCreatedTimestamp;
-(void)setExtSessionGuidCreatedTimestamp:(NSDate *)arg1 ;
-(void)setRawData:(NSData *)arg1 ;
@end

