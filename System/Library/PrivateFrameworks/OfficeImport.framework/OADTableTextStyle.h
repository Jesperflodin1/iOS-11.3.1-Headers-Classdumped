/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OADFontReference, OADColor;

@interface OADTableTextStyle : NSObject {

	OADFontReference* mFontReference;
	OADColor* mColor;
	int mBold;
	int mItalic;

}
+(id)defaultStyle;
+(id)defaultColor;
+(id)defaultFontReference;
+(int)defaultBold;
+(int)defaultItalic;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)color;
-(void)setColor:(id)arg1 ;
-(id)shallowCopy;
-(int)bold;
-(int)italic;
-(void)setFontReference:(id)arg1 ;
-(void)setBold:(int)arg1 ;
-(void)setItalic:(int)arg1 ;
-(void)applyOverridesFrom:(id)arg1 ;
-(id)fontReference;
@end

