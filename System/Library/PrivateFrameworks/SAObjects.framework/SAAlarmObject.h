/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSNumber, NSArray, NSString;

@interface SAAlarmObject : SADomainObject

@property (nonatomic,copy) NSNumber * enabled; 
@property (nonatomic,copy) NSNumber * firing; 
@property (nonatomic,copy) NSArray * frequency; 
@property (nonatomic,copy) NSNumber * hour; 
@property (nonatomic,copy) NSString * label; 
@property (nonatomic,copy) NSNumber * minute; 
@property (nonatomic,copy) NSNumber * relativeOffsetMinutes; 
+(id)object;
+(id)objectWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSNumber *)enabled;
-(void)setEnabled:(NSNumber *)arg1 ;
-(NSString *)label;
-(void)setLabel:(NSString *)arg1 ;
-(NSArray *)frequency;
-(void)setFrequency:(NSArray *)arg1 ;
-(void)setHour:(NSNumber *)arg1 ;
-(NSNumber *)hour;
-(NSNumber *)minute;
-(void)setMinute:(NSNumber *)arg1 ;
-(id)encodedClassName;
-(NSNumber *)firing;
-(void)setFiring:(NSNumber *)arg1 ;
-(NSNumber *)relativeOffsetMinutes;
-(void)setRelativeOffsetMinutes:(NSNumber *)arg1 ;
@end
