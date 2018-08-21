/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSArray, NSString;

@interface SANPVideoLanguageOption : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSArray * characteristics; 
@property (nonatomic,copy) NSString * displayName; 
@property (nonatomic,copy) NSString * identifier; 
@property (nonatomic,copy) NSString * languageTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)languageOptionWithDictionary:(id)arg1 context:(id)arg2 ;
+(id)languageOption;
-(id)groupIdentifier;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSArray *)characteristics;
-(void)setCharacteristics:(NSArray *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)displayName;
-(id)encodedClassName;
-(NSString *)languageTag;
-(void)setLanguageTag:(NSString *)arg1 ;
@end
