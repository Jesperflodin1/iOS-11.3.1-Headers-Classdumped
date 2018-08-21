/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainObject.h>

@class NSString, NSDictionary;

@interface SAGlance : SADomainObject

@property (nonatomic,copy) NSString * appId; 
@property (nonatomic,copy) NSString * glanceDisplayName; 
@property (nonatomic,copy) NSString * glanceId; 
@property (nonatomic,copy) NSDictionary * localizedGlanceDisplayNameMap; 
+(id)glance;
+(id)glanceWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setAppId:(NSString *)arg1 ;
-(id)groupIdentifier;
-(NSString *)appId;
-(id)encodedClassName;
-(NSString *)glanceDisplayName;
-(void)setGlanceDisplayName:(NSString *)arg1 ;
-(NSString *)glanceId;
-(void)setGlanceId:(NSString *)arg1 ;
-(NSDictionary *)localizedGlanceDisplayNameMap;
-(void)setLocalizedGlanceDisplayNameMap:(NSDictionary *)arg1 ;
@end

