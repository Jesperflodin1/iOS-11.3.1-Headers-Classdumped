/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/SXResource.h>
#import <libobjc.A.dylib/SXFontFace.h>

@class NSString;

@interface SXFontResource : SXResource <SXFontFace>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * fontName; 
@property (nonatomic,readonly) id<SXFontAttributes> fontAttributes; 
+(id)typeString;
-(id<SXFontAttributes>)fontAttributes;
-(NSString *)fontName;
-(id)fontAttributesWithValue:(id)arg1 withType:(int)arg2 ;
@end
