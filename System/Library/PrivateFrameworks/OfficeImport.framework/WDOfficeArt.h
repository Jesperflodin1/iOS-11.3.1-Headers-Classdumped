/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/WDRun.h>

@class WDCharacterProperties, OADDrawable;

@interface WDOfficeArt : WDRun {

	WDCharacterProperties* mProperties;
	OADDrawable* mDrawable;
	BOOL mFloating;

}
+(int)textBoxTextTypeForRegularTextType:(int)arg1 ;
-(void)dealloc;
-(id)description;
-(void)setFloating:(BOOL)arg1 ;
-(BOOL)isFloating;
-(void)setProperties:(id)arg1 ;
-(id)imageName;
-(id)properties;
-(id)imageData;
-(id)drawable;
-(BOOL)isDrawableOverridden;
-(int)runType;
-(void)setDrawable:(id)arg1 ;
-(id)initWithParagraph:(id)arg1 ;
-(void)setTextType:(int)arg1 recursivelyToDrawable:(id)arg2 ;
-(id)overrideDrawable;
-(void)clearDrawable;
-(id)imageBlipRef;
-(void)setImageBlipRef:(id)arg1 ;
-(void)propagateTextTypeToDrawables;
-(void)checkForFloating:(id)arg1 ;
-(void)clearProperties;
@end
