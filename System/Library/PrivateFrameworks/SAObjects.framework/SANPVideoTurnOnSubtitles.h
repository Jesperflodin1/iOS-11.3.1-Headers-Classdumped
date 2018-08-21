/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSString;

@interface SANPVideoTurnOnSubtitles : SABaseClientBoundCommand

@property (nonatomic,copy) NSString * desiredOptionId; 
@property (nonatomic,copy) NSString * languageOptionChangeUserSetting; 
+(id)turnOnSubtitles;
+(id)turnOnSubtitlesWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)desiredOptionId;
-(void)setDesiredOptionId:(NSString *)arg1 ;
-(NSString *)languageOptionChangeUserSetting;
-(void)setLanguageOptionChangeUserSetting:(NSString *)arg1 ;
@end

