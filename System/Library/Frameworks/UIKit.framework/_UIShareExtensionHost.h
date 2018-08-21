/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIShareExtensionHost <NSObject>
@required
-(void)shareExtensionServicePreferredContentSizeUpdated:(CGSize)arg1;
-(void)shareExtensionServiceChangeSheetDismissButtonTitle:(id)arg1;
-(void)shareExtensionServiceChangeSheetDismissButtonHidden:(BOOL)arg1;
-(void)shareExtensionServiceDisableSheetAvoidsKeyboardUntilContentSizeUpdate;
-(void)shareExtensionServiceWillPerformInServiceActivityWithDataRequest:(id)arg1 dismissPresentation:(BOOL)arg2 completion:(/*^block*/id)arg3;
-(void)shareExtensionServiceDidFinishPerformingInServiceActivityWithUUID:(id)arg1 responseData:(id)arg2;
-(void)shareExtensionServiceRequestPerformActivityInHostForActivityUUID:(id)arg1;
-(void)shareExtensionServiceRequestPerformActivityInHostForExtensionActivityWithBundleIdentifier:(id)arg1;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyStartTransfer;
-(void)shareExtensionServiceAirDropActivityDidSuccessfullyCompleteTransfer;

@end

