/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CDPDAuthListener.h>
#import <libobjc.A.dylib/CDPDCircleListener.h>

@protocol CDPDCircleProxy, CDPDAuthProviderInternal;
@class NSString;

@interface CDPDManateeStateController : NSObject <CDPDAuthListener, CDPDCircleListener> {

	id<CDPDCircleProxy> _circleProxy;
	id<CDPDAuthProviderInternal> _authProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)circleViewStatusChanged;
-(void)circleStatusChanged;
-(BOOL)isPrimaryAccountHSA2;
-(BOOL)_checkSecurityEligibility:(id*)arg1 ;
-(void)reportManateeAvailable;
-(void)reportManateeUnavailable;
-(void)_sendNotification:(const char*)arg1 withValue:(unsigned long long)arg2 ;
-(void)securityLevelChanged:(BOOL)arg1 ;
-(id)initWithCircleProxy:(id)arg1 authProvider:(id)arg2 ;
-(void)fetchManateeAvailabilityWithCompletion:(/*^block*/id)arg1 ;
@end

