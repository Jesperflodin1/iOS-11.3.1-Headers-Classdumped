/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider15SmallLockupView, _TtC18ASMessagesProvider17LockupScreenshots, _TtC18ASMessagesProvider16DynamicTypeLabel, NSString;

@interface ASMessagesProvider.ScreenshotsLockupView : UIView {

	 lockupView;
	 screenshots;
	 taglineLabel;

}

@property (retain,nonatomic) _TtC18ASMessagesProvider15SmallLockupView * lockupView; 
@property (retain,nonatomic) _TtC18ASMessagesProvider17LockupScreenshots * screenshots; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * taglineLabel; 
@property (copy,nonatomic) NSString * tagline; 
+(double)preferredHeightFor:(id)arg1 ;
+(CGSize)itemSizeWithTagline:(id)arg1 pageTraits:(id)arg2 fitting:(CGSize)arg3 ;
-(NSString *)tagline;
-(void)applyWithLockup:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)taglineLabel;
-(void)setTagline:(NSString *)arg1 ;
-(_TtC18ASMessagesProvider17LockupScreenshots *)screenshots;
-(void)setScreenshots:(_TtC18ASMessagesProvider17LockupScreenshots *)arg1 ;
-(_TtC18ASMessagesProvider15SmallLockupView *)lockupView;
-(void)setLockupView:(_TtC18ASMessagesProvider15SmallLockupView *)arg1 ;
@end
