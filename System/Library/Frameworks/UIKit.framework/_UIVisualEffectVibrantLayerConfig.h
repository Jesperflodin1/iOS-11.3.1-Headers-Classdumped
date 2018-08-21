/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIVisualEffectLayerConfig.h>

@class UIColor, NSDictionary;

@interface _UIVisualEffectVibrantLayerConfig : _UIVisualEffectLayerConfig {

	UIColor* _vibrantColor;
	UIColor* _tintColor;
	NSDictionary* _filterAttributes;

}

@property (nonatomic,readonly) UIColor * vibrantColor;                            //@synthesize vibrantColor=_vibrantColor - In the implementation block
@property (nonatomic,readonly) UIColor * tintColor;                               //@synthesize tintColor=_tintColor - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * filterAttributes;              //@synthesize filterAttributes=_filterAttributes - In the implementation block
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 filterAttributes:(id)arg4 ;
+(id)layerWithVibrantColor:(id)arg1 tintColor:(id)arg2 filterType:(id)arg3 ;
-(id)description;
-(UIColor *)tintColor;
-(void)configureLayerView:(id)arg1 ;
-(void)deconfigureLayerView:(id)arg1 ;
-(NSDictionary *)filterAttributes;
-(UIColor *)vibrantColor;
@end

