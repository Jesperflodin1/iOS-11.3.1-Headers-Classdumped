/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/PrimaryCloudCallingSettingsBundle.bundle/PrimaryCloudCallingSettingsBundle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PHSettingsCloudCallingURLControllerDelegate;
@class NSString, PHSettingsWebViewController, TUCTCapabilityInfo;

@interface PHSettingsCloudCallingURLController : NSObject {

	NSString* _bundleDescriptor;
	id<PHSettingsCloudCallingURLControllerDelegate> _delegate;
	PHSettingsWebViewController* _webViewController;

}

@property (nonatomic,retain) NSString * bundleDescriptor;                                         //@synthesize bundleDescriptor=_bundleDescriptor - In the implementation block
@property (assign,nonatomic,__weak) PHSettingsWebViewController * webViewController;              //@synthesize webViewController=_webViewController - In the implementation block
@property (__weak) id<PHSettingsCloudCallingURLControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) TUCTCapabilityInfo * callingCapabilityInfo; 
@property (nonatomic,readonly) BOOL shouldEnableCapability; 
@property (nonatomic,readonly) BOOL shouldShowEmergencyAddress; 
-(BOOL)shouldEnableCapability;
-(void)enableCapability;
-(id)provisionCapabilityController;
-(void)loadWebViewController;
-(TUCTCapabilityInfo *)callingCapabilityInfo;
-(id)genericErrorAlertController;
-(void)webSheetCompletion;
-(id)_webViewControllerWithType:(long long)arg1 ;
-(void)reloadWebViewController;
-(BOOL)shouldShowEmergencyAddress;
-(NSString *)bundleDescriptor;
-(void)setBundleDescriptor:(NSString *)arg1 ;
-(id)updateEmergencyAddressController;
-(id<PHSettingsCloudCallingURLControllerDelegate>)delegate;
-(void)setDelegate:(id<PHSettingsCloudCallingURLControllerDelegate>)arg1 ;
-(PHSettingsWebViewController *)webViewController;
-(void)setWebViewController:(PHSettingsWebViewController *)arg1 ;
@end
