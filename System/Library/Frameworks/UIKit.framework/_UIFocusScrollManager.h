/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIScreen, _UIFocusDisplayLinkScrollAnimator, NSHashTable;

@interface _UIFocusScrollManager : NSObject {

	UIScreen* _screen;
	_UIFocusDisplayLinkScrollAnimator* _scrollViewAnimator;
	NSHashTable* _activelyScrollingScrollViews;

}

@property (nonatomic,readonly) _UIFocusDisplayLinkScrollAnimator * scrollViewAnimator;              //@synthesize scrollViewAnimator=_scrollViewAnimator - In the implementation block
@property (nonatomic,readonly) NSHashTable * activelyScrollingScrollViews;                          //@synthesize activelyScrollingScrollViews=_activelyScrollingScrollViews - In the implementation block
@property (nonatomic,__weak,readonly) UIScreen * screen;                                            //@synthesize screen=_screen - In the implementation block
-(UIScreen *)screen;
-(id)initWithScreen:(id)arg1 ;
-(CGPoint)_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2 ;
-(void)_ensureFocusItemIsOnscreen:(id)arg1 inScrollView:(id)arg2 ;
-(void)_scrollToFocusItemWithInfo:(id)arg1 offset:(CGPoint)arg2 inScrollView:(id)arg3 ;
-(void)cancelScrollingForScrollView:(id)arg1 ;
-(CGPoint)targetContentOffsetForScrollView:(id)arg1 ;
-(CGPoint)currentVelocityForScrollView:(id)arg1 ;
-(CGPoint)_contentOffsetForScrollView:(id)arg1 toShowFocusItemWithInfo:(id)arg2 itemFrame:(CGRect)arg3 targetOffset:(CGPoint)arg4 targetBounds:(CGRect)arg5 ;
-(void)performScrollingIfNeededForFocusUpdateInContext:(id)arg1 ;
-(BOOL)isScrollingScrollView:(id)arg1 ;
-(void)animateOffsetOfScrollView:(id)arg1 toShowFocusItem:(id)arg2 ;
-(CGPoint)contentOffsetForScrollView:(id)arg1 toShowFocusItem:(id)arg2 targetOffset:(CGPoint)arg3 targetBounds:(CGRect)arg4 ;
-(CGPoint)contentOffsetForScrollView:(id)arg1 toShowRect:(CGRect)arg2 targetOffset:(CGPoint)arg3 targetBounds:(CGRect)arg4 ;
-(_UIFocusDisplayLinkScrollAnimator *)scrollViewAnimator;
-(NSHashTable *)activelyScrollingScrollViews;
@end

