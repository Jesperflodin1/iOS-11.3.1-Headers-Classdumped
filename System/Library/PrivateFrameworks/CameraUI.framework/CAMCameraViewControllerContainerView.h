/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class UIView;

@interface CAMCameraViewControllerContainerView : UIView {

	UIView* _viewfinderView;
	UIView* _customOverlayView;
	UIView* _additionalContentView;

}

@property (nonatomic,retain) UIView * viewfinderView;                     //@synthesize viewfinderView=_viewfinderView - In the implementation block
@property (nonatomic,retain) UIView * customOverlayView;                  //@synthesize customOverlayView=_customOverlayView - In the implementation block
@property (nonatomic,retain) UIView * additionalContentView;              //@synthesize additionalContentView=_additionalContentView - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)systemLayoutSizeFittingSize:(CGSize)arg1 ;
-(UIView *)viewfinderView;
-(UIView *)customOverlayView;
-(void)setCustomOverlayView:(UIView *)arg1 ;
-(void)setAdditionalContentView:(UIView *)arg1 ;
-(void)_commonCAMCameraViewControllerContainerViewInitialization;
-(void)verifyViewOrdering;
-(UIView *)additionalContentView;
-(void)setViewfinderView:(UIView *)arg1 ;
@end

