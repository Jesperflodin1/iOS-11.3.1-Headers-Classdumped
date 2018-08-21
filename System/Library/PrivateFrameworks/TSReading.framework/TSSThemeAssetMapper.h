/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSSTheme, TSUCustomCallBackDictionary;

@interface TSSThemeAssetMapper : NSObject {

	TSSTheme* mFromTheme;
	TSSTheme* mToTheme;
	TSUCustomCallBackDictionary* mAssetMap;

}

@property (nonatomic,readonly) TSSTheme * fromTheme; 
@property (nonatomic,readonly) TSSTheme * toTheme; 
-(id)init;
-(void)dealloc;
-(id)mapStyle:(id)arg1 ;
-(BOOL)p_hasCachedMappingsForPresetsOfKind:(id)arg1 ;
-(id)mapPresetsWithKindFromPreset:(id)arg1 ;
-(void)cacheAssetMappings:(id)arg1 ;
-(void)cacheMappingFromAsset:(id)arg1 toAsset:(id)arg2 ;
-(TSSTheme *)fromTheme;
-(TSSTheme *)toTheme;
-(id)initWithFromTheme:(id)arg1 toTheme:(id)arg2 ;
-(id)mappedAssetForAsset:(id)arg1 ;
-(void)clearMappingCache;
@end
