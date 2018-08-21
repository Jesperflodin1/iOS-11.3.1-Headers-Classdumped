/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NSObject.h>

@protocol OS_dispatch_source;
@class NSString, NSMutableArray, NSArray, NSObject;

@interface NEIKEv2Server : NSObject <NSObject> {

	unsigned _redirects;
	NSString* _serverAddress;
	NSMutableArray* _resolvedAddresses;
	NSString* _redirectedAddress;
	NSMutableArray* _resolvedRedirectedAddresses;
	NSString* _redirectedFromAddress;
	NSArray* _additionalIPv4ServerAddresses;
	NSArray* _additionalIPv6ServerAddresses;
	NSObject*<OS_dispatch_source> _redirectTimer;
	unsigned long long _nextCount;

}

@property (assign) unsigned redirects;                                        //@synthesize redirects=_redirects - In the implementation block
@property (retain) NSObject*<OS_dispatch_source> redirectTimer;               //@synthesize redirectTimer=_redirectTimer - In the implementation block
@property (assign) unsigned long long nextCount;                              //@synthesize nextCount=_nextCount - In the implementation block
@property (retain) NSString * serverAddress;                                  //@synthesize serverAddress=_serverAddress - In the implementation block
@property (retain) NSMutableArray * resolvedAddresses;                        //@synthesize resolvedAddresses=_resolvedAddresses - In the implementation block
@property (retain) NSString * redirectedAddress;                              //@synthesize redirectedAddress=_redirectedAddress - In the implementation block
@property (retain) NSMutableArray * resolvedRedirectedAddresses;              //@synthesize resolvedRedirectedAddresses=_resolvedRedirectedAddresses - In the implementation block
@property (retain) NSString * redirectedFromAddress;                          //@synthesize redirectedFromAddress=_redirectedFromAddress - In the implementation block
@property (retain) NSArray * additionalIPv4ServerAddresses;                   //@synthesize additionalIPv4ServerAddresses=_additionalIPv4ServerAddresses - In the implementation block
@property (retain) NSArray * additionalIPv6ServerAddresses;                   //@synthesize additionalIPv6ServerAddresses=_additionalIPv6ServerAddresses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getSynthesizedIPv6Address:(id)arg1 outgoingIf:(unsigned long long)arg2 nat64Prefixes:(SCD_Struct_NE28*)arg3 numNat64Prefixes:(int)arg4 ;
-(void)dealloc;
-(void)setServerAddress:(NSString *)arg1 ;
-(id)getViableServerAddressForPath:(id)arg1 ;
-(id)getServerOrRedirectedAddress;
-(void)setServerOrRedirectedResolvedAddress:(id)arg1 ;
-(BOOL)startRedirectTimer;
-(BOOL)checkRedirectCount;
-(void)setRedirectedFromAddress:(NSString *)arg1 ;
-(void)setRedirectedAddress:(NSString *)arg1 ;
-(NSString *)redirectedAddress;
-(void)setAdditionalIPv4ServerAddresses:(NSArray *)arg1 ;
-(void)setAdditionalIPv6ServerAddresses:(NSArray *)arg1 ;
-(BOOL)chooseNextServerOrRedirectedResolvedAddress;
-(void)stopRedirectTimer;
-(void)setRedirects:(unsigned)arg1 ;
-(NSMutableArray *)resolvedAddresses;
-(void)setResolvedAddresses:(NSMutableArray *)arg1 ;
-(NSMutableArray *)resolvedRedirectedAddresses;
-(void)setResolvedRedirectedAddresses:(NSMutableArray *)arg1 ;
-(NSString *)redirectedFromAddress;
-(NSArray *)additionalIPv4ServerAddresses;
-(NSArray *)additionalIPv6ServerAddresses;
-(unsigned)redirects;
-(NSObject*<OS_dispatch_source>)redirectTimer;
-(void)setRedirectTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)nextCount;
-(void)setNextCount:(unsigned long long)arg1 ;
-(NSString *)serverAddress;
@end

