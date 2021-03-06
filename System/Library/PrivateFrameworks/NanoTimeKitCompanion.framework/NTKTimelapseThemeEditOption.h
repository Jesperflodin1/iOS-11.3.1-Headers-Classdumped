/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NTKEnumeratedEditOption.h>

@class NSString;

@interface NTKTimelapseThemeEditOption : NTKEnumeratedEditOption

@property (nonatomic,readonly) unsigned long long timelapseTheme; 
@property (nonatomic,readonly) NSString * resourceBaseName; 
@property (nonatomic,readonly) NSString * resourceName; 
+(id)optionsDescription;
+(id)optionWithTimelapseTheme:(unsigned long long)arg1 ;
+(id)_nameLocalizationKeyForValue:(unsigned long long)arg1 ;
+(id)_orderedValues;
+(id)_snapshotKeyForValue:(unsigned long long)arg1 ;
+(id)_resourceBaseNameForTheme:(unsigned long long)arg1 ;
+(id)_resourceNameForTheme:(unsigned long long)arg1 videoIndex:(long long)arg2 ;
-(NSString *)resourceName;
-(long long)swatchStyle;
-(NSString *)resourceBaseName;
-(unsigned long long)timelapseTheme;
-(id)resourceNameWithVideoIndex:(long long)arg1 ;
-(id)_valueToFaceBundleStringDict;
@end

