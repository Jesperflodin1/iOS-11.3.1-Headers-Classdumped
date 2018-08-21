/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <Preferences/PSListController.h>

@class NSArray;

@interface MCCertificateDetailsController : PSListController {

	NSArray* _properties;

}
+(id)_dateFormatter;
-(id)specifiers;
-(id)valueForSpecifier:(id)arg1 ;
-(id)specifiersFromCertificateProperties:(id)arg1 ;
-(id)_propertiesFromTrust:(SecTrustRef)arg1 ;
-(id)specifiersFromTrust:(SecTrustRef)arg1 ;
@end

