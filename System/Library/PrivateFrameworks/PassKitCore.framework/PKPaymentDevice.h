/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_source, OS_dispatch_queue;
@class CLLocationManager, NSTimer, NSObject, PKSecureElement, PKPaymentDeviceProvisioningData, PKPaymentDeviceConfigurationData, NSMutableArray, NSString;

@interface PKPaymentDevice : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSTimer* _timer;
	NSObject*<OS_dispatch_source> _locationFixTimeout;
	PKSecureElement* _secureElement;
	PKPaymentDeviceProvisioningData* _provisioningData;
	PKPaymentDeviceConfigurationData* _configurationData;
	NSMutableArray* _provisioningCompletions;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	NSObject*<OS_dispatch_queue> _internalQueue;
	BOOL _skipLocationCheck;

}

@property (assign,nonatomic) BOOL skipLocationCheck;                //@synthesize skipLocationCheck=_skipLocationCheck - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)clientInfoHTTPHeader;
+(id)clientHardwarePlatformInfoHTTPHeader;
-(id)init;
-(void)dealloc;
-(void)queueConnectionToTrustedServiceManagerForPushTopic:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)deleteApplicationWithAID:(id)arg1 ;
-(id)initWithCallbackQueue:(id)arg1 ;
-(id)primarySecureElementIdentifier;
-(BOOL)skipLocationCheck;
-(void)_finishLocationFixWithLocation:(id)arg1 ;
-(void)_executeProvisioningCompletionHandlers;
-(void)registrationDataWithAuthToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)signData:(id)arg1 signatureEntanglementMode:(unsigned long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)rewrapDataWithDeviceIdentifier:(id)arg1 certificates:(id)arg2 ;
-(id)trustedDeviceEnrollmentInfo;
-(void)provisioningDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)hasRegistrationRegionMap;
-(void)setRegistrationRegionMap:(id)arg1 primaryRegionTopic:(id)arg2 ;
-(void)SEPParingInformationWithCompletion:(/*^block*/id)arg1 ;
-(void)queueConnectionToTrustedServiceManagerWithCompletion:(/*^block*/id)arg1 ;
-(void)configurationDataWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setSkipLocationCheck:(BOOL)arg1 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(id)configurationData;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end

