/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXJSONObject.h>
#import <libobjc.A.dylib/SXCollectionContentDisplay.h>

@class NSString;

@interface SXJSONCollectionContentDisplay : SXJSONObject <SXCollectionContentDisplay>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SXConvertibleValue minimumWidth; 
@property (nonatomic,readonly) SXConvertibleValue maximumWidth; 
@property (nonatomic,readonly) SXConvertibleValue gutter; 
@property (nonatomic,readonly) SXConvertibleValue rowSpacing; 
@property (nonatomic,readonly) unsigned long long alignment; 
@property (nonatomic,readonly) unsigned long long distribution; 
@property (nonatomic,readonly) unsigned long long widows; 
@property (nonatomic,readonly) BOOL variableSizing; 
+(id)typeString;
-(BOOL)variableSizing;
-(unsigned long long)widows;
-(unsigned long long)distribution;
-(unsigned long long)alignment;
-(SXConvertibleValue)rowSpacing;
-(SXConvertibleValue)gutter;
-(SXConvertibleValue)maximumWidth;
-(SXConvertibleValue)minimumWidth;
-(unsigned long long)widowsWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)alignmentWithValue:(id)arg1 withType:(int)arg2 ;
-(unsigned long long)distributionWithValue:(id)arg1 withType:(int)arg2 ;
@end

