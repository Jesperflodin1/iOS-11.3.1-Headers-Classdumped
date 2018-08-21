/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/SXFontIndex.h>

@protocol SXFontIndex <NSObject>
@required
-(id)fontNameForFontAttributes:(id)arg1;
-(id)fontAttributesForFontName:(id)arg1;

@end


@class NSDictionary, NSCache, NSString;

@interface SXFontIndex : NSObject <SXFontIndex> {

	NSDictionary* _fonts;
	NSCache* _attributeToFontIndex;
	NSCache* _fontToAttributeIndex;

}

@property (nonatomic,readonly) NSDictionary * fonts;                        //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,readonly) NSCache * attributeToFontIndex;              //@synthesize attributeToFontIndex=_attributeToFontIndex - In the implementation block
@property (nonatomic,readonly) NSCache * fontToAttributeIndex;              //@synthesize fontToAttributeIndex=_fontToAttributeIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSDictionary *)fonts;
-(id)fontsForFamilyProviders:(id)arg1 ;
-(NSCache *)attributeToFontIndex;
-(NSCache *)fontToAttributeIndex;
-(id)fontNameForFontAttributes:(id)arg1 ;
-(id)fontAttributesForFontName:(id)arg1 ;
-(id)initWithFontFamilyProviders:(id)arg1 ;
@end

