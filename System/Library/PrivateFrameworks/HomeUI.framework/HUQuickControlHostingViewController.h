/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveViewController.h>

@class HUQuickControlViewProfile, UIViewController, NSString;

@interface HUQuickControlHostingViewController : UIViewController <HUQuickControlInteractiveViewController> {

	HUQuickControlViewProfile* _profile;
	UIViewController* _contraption;

}

@property (nonatomic,readonly) HUQuickControlViewProfile * profile;                      //@synthesize profile=_profile - In the implementation block
@property (nonatomic,readonly) UIViewController * contraption;                           //@synthesize contraption=_contraption - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView*<HUQuickControlInteractiveView> view; 
-(void)loadView;
-(void)viewDidLoad;
-(HUQuickControlViewProfile *)profile;
-(UIViewController *)contraption;
-(id)initWithViewController:(id)arg1 profile:(id)arg2 ;
@end

