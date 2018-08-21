/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OADColorPalette;
@class OADColorScheme, OADColorMap;

@interface OADColorContext : NSObject {

	OADColorScheme* mScheme;
	OADColorMap* mMap;
	id<OADColorPalette> mPalette;

}

@property (nonatomic,readonly) OADColorScheme * scheme; 
@property (nonatomic,readonly) OADColorMap * map; 
@property (nonatomic,retain) id<OADColorPalette> palette; 
+(id)colorContextWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(OADColorMap *)map;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(OADColorScheme *)scheme;
-(id)initWithScheme:(id)arg1 map:(id)arg2 palette:(id)arg3 ;
-(void)applyThemeOverrides:(id)arg1 colorMapOverride:(id)arg2 ;
-(void)setPalette:(id<OADColorPalette>)arg1 ;
-(id<OADColorPalette>)palette;
@end

