/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/HearingAidsModule.bundle/HearingAidsModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ControlCenterUIKit/CCUIButtonModuleViewController.h>

@protocol HACCIconViewControllerDelegate;
@interface HACCIconViewController : CCUIButtonModuleViewController {

	id<HACCIconViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<HACCIconViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<HACCIconViewControllerDelegate>)delegate;
-(void)setDelegate:(id<HACCIconViewControllerDelegate>)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(void)loadView;
-(void)buttonTapped:(id)arg1 forEvent:(id)arg2 ;
@end
