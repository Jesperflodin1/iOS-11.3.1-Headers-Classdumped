/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary, UIColor;

@interface SUToolbarAppearance : NSObject <NSCopying> {

	NSMutableDictionary* _backgroundImages;
	NSMutableDictionary* _shadowImages;
	UIColor* _tintColor;

}

@property (nonatomic,retain) UIColor * tintColor;              //@synthesize tintColor=_tintColor - In the implementation block
+(id)defaultToolbarAppearance;
-(void)dealloc;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)styleToolbar:(id)arg1 ;
-(void)setBackgroundImage:(id)arg1 forPosition:(long long)arg2 barMetrics:(long long)arg3 ;
-(void)enumerateBackgroundImagesUsingBlock:(/*^block*/id)arg1 ;
-(void)enumerateShadowImagesUsingBlock:(/*^block*/id)arg1 ;
-(id)backgroundImageForPosition:(long long)arg1 barMetrics:(long long)arg2 ;
-(void)setShadowImage:(id)arg1 forPosition:(long long)arg2 ;
-(id)shadowImageForPosition:(long long)arg1 ;
@end
