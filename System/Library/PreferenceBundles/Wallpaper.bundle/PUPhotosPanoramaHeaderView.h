/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/Wallpaper.bundle/Wallpaper
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Wallpaper/Wallpaper-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UILabel;

@interface PUPhotosPanoramaHeaderView : UICollectionReusableView {

	UILabel* _titleLabel;

}

@property (nonatomic,retain) UILabel * titleLabel;              //@synthesize titleLabel=_titleLabel - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
@end

