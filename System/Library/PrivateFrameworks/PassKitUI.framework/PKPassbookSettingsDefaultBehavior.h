/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PKPassbookSettingsDataSource.h>

@class PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults, PKPassbookPeerPaymentSettingsDefaultBehavior, NSString;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource> {

	PKPassLibraryDefaultDataProvider* _passLibraryDataProvider;
	PKPaymentDefaultDataProvider* _paymentDataProvider;
	PKPaymentOptionsDefaults* _options;
	PKPassbookPeerPaymentSettingsDefaultBehavior* _peerPaymentDefaultBehavior;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id)setupDelegate;
-(BOOL)supportsCredentialType:(long long)arg1 ;
-(id)passLibraryDataProvider;
-(id)paymentDataProvider;
-(id)peerPaymentDelegate;
-(id)peerPaymentDataSource;
-(id)optionsDelegate;
-(id)setupFeaturedNetworksForDevice;
-(id)setupBrowsableProductTypesForDevice;
-(BOOL)hasFelicaSecureElement;
-(BOOL)secureElementIsProductionSigned;
-(BOOL)canRegisterForPeerPayment;
-(BOOL)deviceInRestrictedMode;
-(BOOL)deviceSupportsInAppPayments;
-(id)secureElementID;
-(id)deviceName;
@end

