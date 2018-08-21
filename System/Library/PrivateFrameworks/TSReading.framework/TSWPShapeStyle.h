/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSSPreset.h>

@class NSString;

@interface TSWPShapeStyle : <TSDShapeStyle : TSSStyle : TSPObject> = {
  516 fill
  517 stroke
  518 opacity
  519 reflection
  520 shadow
} <TSSPreset>

@property (nonatomic,readonly) NSString * presetKind; 
+(id)properties;
+(id)defaultValueForProperty:(int)arg1 ;
+(int)defaultIntValueForProperty:(int)arg1 ;
+(id)propertiesAllowingNSNull;
+(id)presetStyleDescriptor;
+(id)layoutProperties;
-(id)defaultParagraphStyle;
-(SEL)mapThemePropertyMapSelector;
-(id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(CGAffineTransform)arg3 ;
-(NSString *)presetKind;
-(void)setDefaultParagraphStyle:(id)arg1 ;
@end

