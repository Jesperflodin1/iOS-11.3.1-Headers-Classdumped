/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSString, NSArray;

@interface SASPronunciationData : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSString * apgId; 
@property (nonatomic,copy) NSString * language; 
@property (nonatomic,copy) NSString * orthography; 
@property (assign,nonatomic) long long tokenOffset; 
@property (nonatomic,copy) NSArray * ttsPronunciations; 
@property (nonatomic,copy) NSString * ttsVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)pronunciationData;
+(id)pronunciationDataWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)orthography;
-(id)groupIdentifier;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)apgId;
-(void)setApgId:(NSString *)arg1 ;
-(void)setOrthography:(NSString *)arg1 ;
-(long long)tokenOffset;
-(void)setTokenOffset:(long long)arg1 ;
-(NSArray *)ttsPronunciations;
-(void)setTtsPronunciations:(NSArray *)arg1 ;
-(NSString *)ttsVersion;
-(void)setTtsVersion:(NSString *)arg1 ;
@end

