/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:32:08 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/DisplayFilterUIServer.axuiservice/DisplayFilterUIServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DisplayFilterUIServer/DisplayFilterUIServer-Structs.h>
#import <UIKit/UIView.h>

@class NSArray, UIView, CAReplicatorLayer, CABackdropLayer;

@interface AXDisplayFilterOverlayView : UIView {

	NSArray* _filters;
	UIView* _effectView;
	CAReplicatorLayer* _effectReplicatorLayer;
	CABackdropLayer* _effectBackdropLayer;

}

@property (nonatomic,retain) UIView * effectView;                                    //@synthesize effectView=_effectView - In the implementation block
@property (nonatomic,retain) CAReplicatorLayer * effectReplicatorLayer;              //@synthesize effectReplicatorLayer=_effectReplicatorLayer - In the implementation block
@property (nonatomic,retain) CABackdropLayer * effectBackdropLayer;                  //@synthesize effectBackdropLayer=_effectBackdropLayer - In the implementation block
@property (nonatomic,retain) NSArray * filters;                                      //@synthesize filters=_filters - In the implementation block
-(void)setEffectReplicatorLayer:(CAReplicatorLayer *)arg1 ;
-(void)setEffectBackdropLayer:(CABackdropLayer *)arg1 ;
-(CAReplicatorLayer *)effectReplicatorLayer;
-(CABackdropLayer *)effectBackdropLayer;
-(void)_updateLensEffect;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setFilters:(NSArray *)arg1 ;
-(NSArray *)filters;
-(UIView *)effectView;
-(void)setEffectView:(UIView *)arg1 ;
-(void)_setupLayers;
@end
