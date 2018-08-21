/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SAUIButton.h>

@class NSString, NSArray;

@interface SAVCSContentButton : SAUIButton

@property (nonatomic,copy) NSString * canonicalId; 
@property (nonatomic,copy) NSString * contentType; 
@property (nonatomic,copy) NSArray * togglePlayPauseCommands; 
+(id)contentButton;
+(id)contentButtonWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(NSString *)canonicalId;
-(void)setCanonicalId:(NSString *)arg1 ;
-(NSArray *)togglePlayPauseCommands;
-(void)setTogglePlayPauseCommands:(NSArray *)arg1 ;
-(NSString *)contentType;
-(void)setContentType:(NSString *)arg1 ;
@end
