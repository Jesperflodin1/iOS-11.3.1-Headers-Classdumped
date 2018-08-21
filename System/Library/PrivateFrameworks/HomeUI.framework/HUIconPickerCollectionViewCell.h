/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class HUIconButton;

@interface HUIconPickerCollectionViewCell : UICollectionViewCell {

	HUIconButton* _iconButton;

}

@property (nonatomic,retain) HUIconButton * iconButton;                        //@synthesize iconButton=_iconButton - In the implementation block
@property (nonatomic,retain) id<HFIconDescriptor> iconDescriptor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(void)setIconDescriptor:(id<HFIconDescriptor>)arg1 ;
-(id<HFIconDescriptor>)iconDescriptor;
-(void)setIconButton:(HUIconButton *)arg1 ;
-(HUIconButton *)iconButton;
@end
