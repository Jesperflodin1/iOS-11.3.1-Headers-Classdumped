/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ScreenshotServices.framework/ScreenshotServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SSRemoteViewControllerServiceToHostInterface.h>

@protocol SSDittoHostViewControllerDelegate;
@interface SSDittoHostViewController : _UIRemoteViewController <SSRemoteViewControllerServiceToHostInterface> {

	id<SSDittoHostViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SSDittoHostViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(id<SSDittoHostViewControllerDelegate>)delegate;
-(void)setDelegate:(id<SSDittoHostViewControllerDelegate>)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)becomeFirstResponder;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismiss;
-(id)_serviceProxy;
-(void)screenshotExperienceHasDismissed;
-(void)dismissScreenshotExperience;
@end
