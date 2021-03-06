/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SADomainCommand.h>

@class NSURL, NSString;

@interface SAWeatherLocationSearch : SADomainCommand

@property (nonatomic,copy) NSURL * identifier; 
@property (nonatomic,copy) NSString * locationId; 
+(id)locationSearch;
+(id)locationSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSURL *)identifier;
-(void)setIdentifier:(NSURL *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)locationId;
-(void)setLocationId:(NSString *)arg1 ;
@end

