/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKCloudServiceSetupExtensionClientInterface <NSObject>
@required
-(void)overrideCreditCardPresentationWithCompletion:(/*^block*/id)arg1;
-(void)didFinishLoadingWithSuccess:(BOOL)arg1 error:(id)arg2;
-(void)dismissCloudServiceSetupViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)dismissSafariViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2;
-(void)presentSafariViewControllerWithURL:(id)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3;

@end

