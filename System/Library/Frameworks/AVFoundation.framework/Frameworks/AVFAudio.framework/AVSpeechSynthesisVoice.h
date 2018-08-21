/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>

@property (nonatomic,copy) NSString * language; 
@property (nonatomic,retain) NSString * identifier; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) long long quality; 
+(id)speechVoices;
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)currentLanguageCode;
+(id)test_speechVoices;
+(void)test_setSpeechVoices:(id)arg1 ;
+(id)speechVoices;
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)voiceWithIdentifier:(id)arg1 ;
+(id)voiceWithLanguage:(id)arg1 ;
+(id)currentLanguageCode;
-(void)setIsDefault:(BOOL)arg1 ;
-(BOOL)isDefault;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
-(BOOL)isInstalled;
-(void)setQuality:(long long)arg1 ;
-(id)nonCombinedVoiceId;
-(void)setNonCombinedVoiceId:(id)arg1 ;
-(BOOL)canBeDownloaded;
-(void)setCanBeDownloaded:(BOOL)arg1 ;
-(void)setAssetSize:(long long)arg1 ;
-(void)setIsCombinedVoice:(BOOL)arg1 ;
-(id)nameWithoutQuality;
-(void)setGender:(long long)arg1 ;
-(long long)gender;
-(BOOL)isCombinedVoice;
-(void)setIsInstalled:(BOOL)arg1 ;
-(long long)quality;
-(long long)assetSize;
-(id)_localizedNameFormat;
-(id)initWithLanguage:(id)arg1 ;
-(id)debugDescription;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

