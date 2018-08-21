/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIImageView, UIColor, UIImage;

@interface _UISiriTrackingItem : NSObject {

	BOOL _deleted;
	BOOL _isABigReplacement;
	BOOL _isASmallReplacement;
	BOOL _isAnIntroduction;
	UIImageView* _animatedView;
	UIColor* _textColor;
	double _offscreenXLocation;
	UIImage* _capturedGlyphImage;
	NSRange _textRange;
	NSRange _glyphRange;
	CGRect _targetFrame;

}

@property (nonatomic,retain) UIImageView * animatedView;                //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                       //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) NSRange textRange;                         //@synthesize textRange=_textRange - In the implementation block
@property (assign,nonatomic) NSRange glyphRange;                        //@synthesize glyphRange=_glyphRange - In the implementation block
@property (assign,nonatomic) double offscreenXLocation;                 //@synthesize offscreenXLocation=_offscreenXLocation - In the implementation block
@property (assign,nonatomic) CGRect targetFrame;                        //@synthesize targetFrame=_targetFrame - In the implementation block
@property (assign,nonatomic) BOOL isABigReplacement;                    //@synthesize isABigReplacement=_isABigReplacement - In the implementation block
@property (assign,nonatomic) BOOL isASmallReplacement;                  //@synthesize isASmallReplacement=_isASmallReplacement - In the implementation block
@property (assign,nonatomic) BOOL isAnIntroduction;                     //@synthesize isAnIntroduction=_isAnIntroduction - In the implementation block
@property (nonatomic,retain) UIImage * capturedGlyphImage;              //@synthesize capturedGlyphImage=_capturedGlyphImage - In the implementation block
-(id)init;
-(void)dealloc;
-(id)description;
-(void)setTextColor:(UIColor *)arg1 ;
-(UIColor *)textColor;
-(CGRect)targetFrame;
-(void)setTargetFrame:(CGRect)arg1 ;
-(void)setCapturedGlyphImage:(UIImage *)arg1 ;
-(void)animateOut;
-(void)captureGlyphsInRect:(CGRect)arg1 containerOrigin:(CGPoint)arg2 fromLayoutManager:(id)arg3 ;
-(UIImageView *)animatedView;
-(void)setAnimatedView:(UIImageView *)arg1 ;
-(NSRange)textRange;
-(void)setTextRange:(NSRange)arg1 ;
-(NSRange)glyphRange;
-(void)setGlyphRange:(NSRange)arg1 ;
-(double)offscreenXLocation;
-(void)setOffscreenXLocation:(double)arg1 ;
-(BOOL)isABigReplacement;
-(void)setIsABigReplacement:(BOOL)arg1 ;
-(BOOL)isASmallReplacement;
-(void)setIsASmallReplacement:(BOOL)arg1 ;
-(BOOL)isAnIntroduction;
-(void)setIsAnIntroduction:(BOOL)arg1 ;
-(UIImage *)capturedGlyphImage;
@end

