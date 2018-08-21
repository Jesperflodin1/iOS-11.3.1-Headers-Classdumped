/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIViewController, NSUUID;

@interface QLServiceViewController : UIViewController {

	BOOL _isAccessoryView;
	UIViewController* _mainViewController;
	NSUUID* _uuid;

}

@property (readonly) NSUUID * uuid;                                             //@synthesize uuid=_uuid - In the implementation block
@property (__weak,readonly) UIViewController * mainViewController;              //@synthesize mainViewController=_mainViewController - In the implementation block
+(id)_getServiceWithUUID:(id)arg1 ;
+(id)_serviceViewControllers;
-(id)init;
-(UIViewController *)mainViewController;
-(NSUUID *)uuid;
-(void)invalidatePreviewCollection;
-(void)configureAsAccessoryViewContainerForPreviewCollection:(id)arg1 ;
-(void)_registerServiceViewController;
@end

