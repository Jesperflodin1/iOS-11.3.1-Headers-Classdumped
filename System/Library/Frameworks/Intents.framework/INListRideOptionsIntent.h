/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/INIntent.h>
#import <libobjc.A.dylib/INListRideOptionsIntentExport.h>

@class CLPlacemark, NSString;

@interface INListRideOptionsIntent : INIntent <INListRideOptionsIntentExport>

@property (nonatomic,copy,readonly) CLPlacemark * pickupLocation; 
@property (nonatomic,copy,readonly) CLPlacemark * dropOffLocation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_dictionaryRepresentation;
-(id)domain;
-(id)_typedBackingStore;
-(void)_redactForMissingPrivacyEntitlementOptions:(unsigned long long)arg1 containingAppBundleId:(id)arg2 ;
-(id)parametersByName;
-(void)setParametersByName:(id)arg1 ;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)pickupLocation;
-(CLPlacemark *)dropOffLocation;
-(void)setVerb:(id)arg1 ;
-(id)initWithPickupLocation:(id)arg1 dropOffLocation:(id)arg2 ;
-(id)verb;
-(id)_metadata;
-(void)setDomain:(id)arg1 ;
@end

