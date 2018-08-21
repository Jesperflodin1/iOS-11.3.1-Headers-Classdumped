/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontFace.h>

@protocol SXFontAttributes;
@class NSString;

@interface SXSystemFontFace : NSObject <SXFontFace> {

	NSString* _fontName;
	id<SXFontAttributes> _fontAttributes;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName;                              //@synthesize fontName=_fontName - In the implementation block
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes;              //@synthesize fontAttributes=_fontAttributes - In the implementation block
-(NSString *)description;
-(NSString *)fontName;
-(id<SXFontAttributes>)fontAttributes;
-(id)initWithMetadata:(id)arg1 ;
-(id)fontAttributesForMetadata:(id)arg1 ;
-(long long)fontWeightForValue:(id)arg1 ;
-(long long)fontWidthForValue:(id)arg1 ;
-(long long)fontStyleForValue:(id)arg1 ;
@end
