/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BridgePreferences/BridgePreferences-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView;

@interface BPSCheckMarkView : UIView {

	BOOL _isChecked;
	UIImageView* _imageView;

}

@property (assign,nonatomic) BOOL isChecked;                       //@synthesize isChecked=_isChecked - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;              //@synthesize imageView=_imageView - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)imageView;
-(void)setImageView:(UIImageView *)arg1 ;
-(BOOL)isChecked;
-(id)uncheckedImage;
-(id)checkedImage;
-(void)setIsChecked:(BOOL)arg1 ;
@end

