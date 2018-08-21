/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:09:19 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKitUI.framework/Bundles/TwoSteps.fpenroll/TwoSteps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKitUI/BiometricKitUIEnrollViewController.h>

@protocol OS_os_log;
@class NSObject;

@interface BKUIBundleEnrollViewController : BiometricKitUIEnrollViewController {

	long long _shortScanCount;
	long long _maxShortScanCount;
	NSObject*<OS_os_log> bkui_bundle_enroll_view_controller_log;

}
-(void)afterStatusMessage:(unsigned)arg1 ;
-(id)bundleAlertView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)statusMessage:(unsigned)arg1 ;
@end

