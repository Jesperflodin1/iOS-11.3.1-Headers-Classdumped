/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIColor;

@interface CAMShutterButtonRingView : UIView {

	BOOL _showContrastBorder;
	UIColor* _color;
	CAMShutterButtonSpec _spec;

}

@property (assign,nonatomic) CAMShutterButtonSpec spec;              //@synthesize spec=_spec - In the implementation block
@property (assign,nonatomic) BOOL showContrastBorder;                //@synthesize showContrastBorder=_showContrastBorder - In the implementation block
@property (nonatomic,retain) UIColor * color;                        //@synthesize color=_color - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)setSpec:(CAMShutterButtonSpec)arg1 ;
-(CAMShutterButtonSpec)spec;
-(id)initWithSpec:(CAMShutterButtonSpec)arg1 ;
-(void)setShowContrastBorder:(BOOL)arg1 ;
-(BOOL)showContrastBorder;
@end
