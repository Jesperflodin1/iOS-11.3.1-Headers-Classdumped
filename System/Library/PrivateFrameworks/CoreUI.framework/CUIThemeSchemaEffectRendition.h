/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreUI/CoreUI-Structs.h>
#import <CoreUI/CUIThemeRendition.h>

@class NSDictionary, CUIShapeEffectPreset, CUIImage;

@interface CUIThemeSchemaEffectRendition : CUIThemeRendition {

	NSDictionary* _cuiInfo;
	CUIShapeEffectPreset* _effectPreset;
	CUIImage* _referenceImage;

}
-(id)effectPreset;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 artworkStatus:(long long)arg3 ;
-(void)_initializeCoreUIOptions:(id)arg1 ;
-(id)referenceImage;
-(id)initWithCoreUIOptions:(id)arg1 forKey:(const renditionkeytoken*)arg2 ;
-(id)coreUIOptions;
-(BOOL)_generateReferenceImage;
-(id)_rendererInitializationDictionary;
-(void)dealloc;
@end

