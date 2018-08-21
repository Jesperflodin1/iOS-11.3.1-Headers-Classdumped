/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAAlarmObject.h>
#import <SAObjects/SASyncWrap.h>

@class NSNumber, NSString, NSURL;

@interface SAAlarmAceAlarmWrap : SAAlarmObject <SASyncWrap>

@property (nonatomic,copy) NSNumber * generation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * identifier; 
+(id)aceAlarmWrap;
+(id)aceAlarmWrapWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(void)setGeneration:(NSNumber *)arg1 ;
-(NSNumber *)generation;
@end

