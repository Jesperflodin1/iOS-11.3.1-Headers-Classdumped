/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewLayoutAttributes.h>

@class HFWallpaperSlice;

@interface HUGridFlowLayoutCellAttributes : UICollectionViewLayoutAttributes {

	HFWallpaperSlice* _blurredWallpaperSlice;
	CGRect _normalizedWallpaperRect;

}

@property (assign,nonatomic) CGRect normalizedWallpaperRect;                        //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;              //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
@end

