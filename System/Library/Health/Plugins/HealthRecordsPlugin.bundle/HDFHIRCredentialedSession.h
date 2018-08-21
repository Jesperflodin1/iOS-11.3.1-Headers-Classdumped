/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthRecordsPlugin/HDFHIRSession.h>
#import <HealthRecordsPlugin/HDFHIRCredentialVendorDelegate.h>

@class HDFHIRCredentialVendor, NSString;

@interface HDFHIRCredentialedSession : HDFHIRSession <HDFHIRCredentialVendorDelegate> {

	HDFHIRCredentialVendor* _credentialVendor;

}

@property (nonatomic,readonly) HDFHIRCredentialVendor * credentialVendor;              //@synthesize credentialVendor=_credentialVendor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(HDFHIRCredentialVendor *)credentialVendor;
-(void)credentialVendor:(id)arg1 refreshCredential:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)initWithSpecification:(id)arg1 credentialVendor:(id)arg2 ;
@end
