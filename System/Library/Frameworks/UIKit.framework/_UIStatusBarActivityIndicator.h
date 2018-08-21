/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIActivityIndicatorView.h>
#import <UIKit/_UIStatusBarDisplayable.h>

@class NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarActivityIndicator : UIActivityIndicatorView <_UIStatusBarDisplayable> {

	UIEdgeInsets _alignmentRectInsets;

}

@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
-(UIEdgeInsets)alignmentRectInsets;
-(void)applyStyleAttributes:(id)arg1 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(BOOL)wantsCrossfade;
@end

