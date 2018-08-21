/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CarKit.framework/CarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CARSessionStatus, CRCarPlayAppBlacklist, NSSet;

@interface CRCarPlayAppPolicyEvaluator : NSObject {

	CARSessionStatus* _sessionStatus;
	BOOL _geoSupported;
	CRCarPlayAppBlacklist* _blacklist;
	NSSet* __simulatedAccessoryProtocols;

}

@property (nonatomic,retain) CRCarPlayAppBlacklist * blacklist;                    //@synthesize blacklist=_blacklist - In the implementation block
@property (nonatomic,retain) NSSet * _simulatedAccessoryProtocols;                 //@synthesize _simulatedAccessoryProtocols=__simulatedAccessoryProtocols - In the implementation block
@property (assign,getter=isGeoSupported,nonatomic) BOOL geoSupported;              //@synthesize geoSupported=_geoSupported - In the implementation block
+(id)_carIntentIdentifiers;
-(id)init;
-(void)setBlacklist:(CRCarPlayAppBlacklist *)arg1 ;
-(id)_sessionStatus;
-(BOOL)isGeoSupported;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAllIntents:(id)arg2 ;
-(BOOL)_connectedProtocolsIntersectsAppProtocols:(id)arg1 ;
-(BOOL)_appWithDeclaration:(id)arg1 supportsAnyIntents:(id)arg2 ;
-(void)setGeoSupported:(BOOL)arg1 ;
-(NSSet *)_simulatedAccessoryProtocols;
-(void)set_simulatedAccessoryProtocols:(NSSet *)arg1 ;
-(CRCarPlayAppBlacklist *)blacklist;
-(id)effectivePolicyForAppDeclaration:(id)arg1 ;
-(void)fetchApplicationBundleIdentifiersForCarIntents:(/*^block*/id)arg1 ;
@end

