/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSString, NSURL;

@interface SAWeatherLocationAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (nonatomic,copy) NSString * error; 
@property (nonatomic,copy) NSURL * weatherLocationId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
+(id)locationAddCompleted;
+(id)locationAddCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)locationAddCompletedWithError:(id)arg1 ;
+(id)locationAddCompletedWithWeatherLocationId:(id)arg1 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(id)initWithWeatherLocationId:(id)arg1 ;
-(void)setWeatherLocationId:(NSURL *)arg1 ;
-(NSURL *)weatherLocationId;
-(void)setError:(NSString *)arg1 ;
-(NSString *)error;
-(id)initWithError:(id)arg1 ;
@end

