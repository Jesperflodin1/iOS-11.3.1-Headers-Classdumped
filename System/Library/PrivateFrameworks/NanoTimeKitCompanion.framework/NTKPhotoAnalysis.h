/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface NTKPhotoAnalysis : NSObject <NSCopying, NSSecureCoding> {

	SCD_Struct_NT18 _data;
	unsigned _version;

}

@property (getter=isComplexBackground,nonatomic,readonly) BOOL complexBackground; 
@property (getter=isColoredText,nonatomic,readonly) BOOL coloredText; 
@property (nonatomic,readonly) float textHue; 
@property (nonatomic,readonly) float textSaturation; 
@property (nonatomic,readonly) float textBrightness; 
@property (nonatomic,readonly) float bgHue; 
@property (nonatomic,readonly) float bgSaturation; 
@property (nonatomic,readonly) float bgBrightness; 
@property (nonatomic,readonly) float shadowHue; 
@property (nonatomic,readonly) float shadowSaturation; 
@property (nonatomic,readonly) float shadowBrightness; 
@property (nonatomic,readonly) SCD_Struct_NT18 structure; 
@property (nonatomic,readonly) unsigned version;                                               //@synthesize version=_version - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)analysisWithImage:(id)arg1 alignment:(id)arg2 ;
+(id)defaultAnalysis;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)version;
-(id)initFromDictionary:(id)arg1 ;
-(id)encodeAsDictionary;
-(BOOL)isComplexBackground;
-(BOOL)isColoredText;
-(float)textHue;
-(float)textSaturation;
-(float)textBrightness;
-(float)bgHue;
-(float)bgSaturation;
-(float)bgBrightness;
-(float)shadowHue;
-(float)shadowSaturation;
-(float)shadowBrightness;
-(SCD_Struct_NT18)structure;
-(id)initWithStructure:(SCD_Struct_NT18)arg1 ;
@end
