/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXHearingSupport-Structs.h>
#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>
#import <libobjc.A.dylib/CCUIContentModuleContentViewController.h>

@class UILabel, UIView, UIScrollView, UIStackView, NSMutableArray, NSString;

@interface HACCListViewController : CCUIButtonModuleViewController <CCUIContentModuleContentViewController> {

	UILabel* _titleLabel;
	UIView* _headerSeparatorView;
	CGSize _previousSize;
	UIScrollView* _scrollView;
	UIStackView* _menuItemsContainer;
	NSMutableArray* _menuItemsViews;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double preferredExpandedContentHeight; 
@property (nonatomic,readonly) double preferredExpandedContentWidth; 
@property (nonatomic,readonly) BOOL providesOwnPlatter; 
-(void)setTitle:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)removeAllActions;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(void)selectItemWithTitle:(id)arg1 ;
-(double)preferredExpandedContentHeight;
-(void)addActionWithTitle:(id)arg1 glyph:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)willTransitionToExpandedContentMode:(BOOL)arg1 ;
-(void)_layoutMenuItemsForSize:(CGSize)arg1 ;
-(double)_menuItemsContainerHeight;
@end

