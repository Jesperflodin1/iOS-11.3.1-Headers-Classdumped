/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _MXExtensionLookupPolicy, _MXExtensionManagerDelegate;
@class _MXExtensionProvider;

@interface _MXExtensionManager : NSObject {

	id<_MXExtensionLookupPolicy> _lookupPolicy;
	id _matchingContext;
	id<_MXExtensionManagerDelegate> _delegate;
	_MXExtensionProvider* _extensionProvider;

}

@property (nonatomic,retain) id matchingContext;                                           //@synthesize matchingContext=_matchingContext - In the implementation block
@property (assign,nonatomic,__weak) id<_MXExtensionManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) _MXExtensionProvider * extensionProvider;                     //@synthesize extensionProvider=_extensionProvider - In the implementation block
@property (nonatomic,readonly) id<_MXExtensionLookupPolicy> lookupPolicy;                  //@synthesize lookupPolicy=_lookupPolicy - In the implementation block
+(id)_queue;
+(id)lookupPolicyForRideSharingExtensions;
+(id)_maps_ridesharingOptionalIntentClassesForNonUIHandling;
+(id)_maps_ridesharingRequiredIntentClassesForNonUIHandling;
+(id)_maps_ridesharingAllIntentClassesForNonUIHandling;
+(id)_maps_ridesharingIntentClassesForUIInteraction;
+(id)_maps_lookupPolicyForEnabledRidesharingNonUIExtensions;
+(id)_maps_lookupPolicyForRidesharingNonUIExtensions;
+(void)_maps_updateRideBookingExtensions:(id)arg1 ;
+(id)lookupPolicyForRestaurantQueueingExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)lookupPolicyForRestaurantQueueingExtensions;
+(id)restaurantQueueingIntentClassNames;
+(id)restaurantReservationIntentClassNames;
+(id)lookupPolicyForRestaurantReservationExtensionWithContainingAppIdentifier:(id)arg1 ;
+(id)lookupPolicyForRestaurantReservationExtensions;
+(void)imageForKey:(id)arg1 extension:(id)arg2 completion:(/*^block*/id)arg3 ;
+(id)managerWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
+(id)managerWithExtensionLookupPolicy:(id)arg1 updateHandler:(/*^block*/id)arg2 ;
+(id)_extensionsWithLookupPolicy:(id)arg1 ;
+(id)_lookupPolicyForUIExtension;
+(id)_lookupPolicyForNonUIExtension;
+(id)_lookupPolicyForAllExtensions;
+(id)_lookupPolicyForIntentsExtensions;
+(id)_lookupPolicyWithExtensionPointNames:(id)arg1 ;
+(id)lookupPolicyForExtensionWithCapability:(id)arg1 ;
+(id)lookupPolicyForExtensionWithCapabilities:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithIdentifier:(id)arg1 ;
+(id)_lookupPolicyForExtensionSupportsIntentClassNames:(id)arg1 ;
+(id)_lookupPolicyForExtensionWithContainingAppIdentifier:(id)arg1 supportsIntentClassNames:(id)arg2 ;
+(id)_lookupPolicyWithBlock:(/*^block*/id)arg1 ;
-(void)invalidate;
-(id<_MXExtensionManagerDelegate>)delegate;
-(void)setDelegate:(id<_MXExtensionManagerDelegate>)arg1 ;
-(void)dealloc;
-(_MXExtensionProvider *)extensionProvider;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 ;
-(id)initWithLookupPolicy:(id)arg1 delegate:(id)arg2 extensionProvider:(id)arg3 ;
-(id)_applyExtensionPredicateWithExtensionsIfNeeded:(id)arg1 ;
-(id<_MXExtensionLookupPolicy>)lookupPolicy;
-(id)matchingContext;
-(void)setMatchingContext:(id)arg1 ;
-(void)setExtensionProvider:(_MXExtensionProvider *)arg1 ;
@end

