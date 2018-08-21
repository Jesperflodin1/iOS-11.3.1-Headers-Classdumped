/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriClientFlow.framework/SiriClientFlow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <libobjc.A.dylib/SAAceSerializable.h>

@class NSString;

@interface CFCBNightShiftTransitionTime : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long hour; 
@property (assign,nonatomic) long long minute; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)aceObjectWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)nightShiftTransitionTime;
+(id)nightShiftTransitionTimeWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setHour:(long long)arg1 ;
-(long long)hour;
-(long long)minute;
-(void)setMinute:(long long)arg1 ;
-(id)encodedClassName;
@end

