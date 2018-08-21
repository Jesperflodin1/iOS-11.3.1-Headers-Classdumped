/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIInterfaceActionGroupView.h>

@class UIAlertController;

@interface _UIAlertControllerInterfaceActionGroupView : UIInterfaceActionGroupView {

	BOOL _scrollableHeaderViewHasRealContent;
	UIAlertController* _alertController;

}

@property (assign,nonatomic,__weak) UIAlertController * alertController;              //@synthesize alertController=_alertController - In the implementation block
@property (assign,nonatomic) BOOL scrollableHeaderViewHasRealContent;                 //@synthesize scrollableHeaderViewHasRealContent=_scrollableHeaderViewHasRealContent - In the implementation block
-(void)setAlertController:(UIAlertController *)arg1 ;
-(id)_alertController;
-(id)defaultVisualStyleForTraitCollection:(id)arg1 presentationStyle:(long long)arg2 ;
-(BOOL)_shouldShowSeparatorAboveActionsSequenceView;
-(BOOL)scrollableHeaderViewHasRealContent;
-(id)initWithAlertController:(id)arg1 actionGroup:(id)arg2 actionHandlerInvocationDelegate:(id)arg3 ;
-(BOOL)_shouldInstallContentGuideConstraints;
-(UIAlertController *)alertController;
-(void)setScrollableHeaderViewHasRealContent:(BOOL)arg1 ;
@end
