/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleAccountUI.framework/AppleAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIImageView, UIButton, UIImage;

@interface AAUIProfilePhotoView : UIView {

	UIImageView* _photoView;
	UIButton* _editButton;
	BOOL _isEditing;

}

@property (nonatomic,retain) UIImage * photo; 
@property (assign,setter=setEditing:,nonatomic) BOOL isEditing;              //@synthesize isEditing=_isEditing - In the implementation block
-(UIImage *)photo;
-(void)setPhoto:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(BOOL)isEditing;
-(void)setEditing:(BOOL)arg1 ;
-(double)desiredHeightForWidth:(double)arg1 ;
-(id)initWithPhoto:(id)arg1 target:(id)arg2 action:(SEL)arg3 ;
@end
