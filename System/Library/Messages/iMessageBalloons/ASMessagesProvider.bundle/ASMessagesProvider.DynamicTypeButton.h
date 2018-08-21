/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIButton.h>

@interface ASMessagesProvider.DynamicTypeButton : UIButton {

	 fontUseCaseContentSizeCategory;
	 fontUseCase;
	 titleColorFollowsTintColor;
	 touchOutsideMargin;

}

@property (assign,nonatomic) BOOL titleColorFollowsTintColor; 
@property (assign,nonatomic) UIEdgeInsets touchOutsideMargin; 
+(id)adTransparencyButtonIn:(id)arg1 ;
+(id)moreButtonWithBackgroundColor:(id)arg1 ;
-(UIEdgeInsets)touchOutsideMargin;
-(void)setTouchOutsideMargin:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)tintColorDidChange;
-(void)setTitleColorFollowsTintColor:(BOOL)arg1 ;
-(BOOL)titleColorFollowsTintColor;
@end

