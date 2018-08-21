/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIControl.h>

@class MPRouteLabel, UIImageView, UIFont, MPAVRoute, NSString, UIColor, UIImage;

@interface MPRouteButton : UIControl {

	MPRouteLabel* _routeLabel;
	UIImageView* _accessoryImageView;
	double _alphaOverride;
	BOOL _routeLabelHidden;
	BOOL _forcesUppercaseText;
	double _accessoryImageSpacing;
	UIFont* _font;
	MPAVRoute* _route;
	NSString* _routeTitle;
	UIColor* _overrideColor;
	UIEdgeInsets _hitRectInsets;

}

@property (nonatomic,retain) UIImage * accessoryImage; 
@property (assign,nonatomic) double accessoryImageSpacing;                                 //@synthesize accessoryImageSpacing=_accessoryImageSpacing - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitRectInsets;                                   //@synthesize hitRectInsets=_hitRectInsets - In the implementation block
@property (nonatomic,retain) MPAVRoute * route;                                            //@synthesize route=_route - In the implementation block
@property (nonatomic,copy,readonly) NSString * routeTitle;                                 //@synthesize routeTitle=_routeTitle - In the implementation block
@property (assign,getter=isRouteLabelHidden,nonatomic) BOOL routeLabelHidden;              //@synthesize routeLabelHidden=_routeLabelHidden - In the implementation block
@property (assign,nonatomic) BOOL forcesUppercaseText;                                     //@synthesize forcesUppercaseText=_forcesUppercaseText - In the implementation block
@property (nonatomic,retain) UIColor * overrideColor;                                      //@synthesize overrideColor=_overrideColor - In the implementation block
-(MPAVRoute *)route;
-(NSString *)routeTitle;
-(void)setRoute:(MPAVRoute *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setAlpha:(double)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setFont:(UIFont *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(UIFont *)font;
-(double)accessoryImageSpacing;
-(BOOL)isRouteLabelHidden;
-(void)setForcesUppercaseText:(BOOL)arg1 ;
-(UIImage *)accessoryImage;
-(void)setAccessoryImage:(UIImage *)arg1 ;
-(void)setAccessoryImageSpacing:(double)arg1 ;
-(void)setRouteLabelHidden:(BOOL)arg1 ;
-(BOOL)forcesUppercaseText;
-(UIColor *)overrideColor;
-(void)setOverrideColor:(UIColor *)arg1 ;
-(void)setHitRectInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)hitRectInsets;
@end

