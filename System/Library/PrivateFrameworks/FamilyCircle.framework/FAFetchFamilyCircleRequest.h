/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircle.framework/FamilyCircle
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FamilyCircle/FAFamilyCircleRequest.h>

@class NSArray, NSDictionary;

@interface FAFetchFamilyCircleRequest : FAFamilyCircleRequest {

	BOOL _signedInAccountShouldBeApprover;
	BOOL _forceServerFetch;
	BOOL _doNotFetchFromServer;
	BOOL _promptUserToResolveAuthenticatonFailure;
	NSArray* _expectedDSIDs;
	NSDictionary* _serverResponse;

}

@property (retain,readonly) NSDictionary * serverResponse;                    //@synthesize serverResponse=_serverResponse - In the implementation block
@property (copy) NSArray * expectedDSIDs;                                     //@synthesize expectedDSIDs=_expectedDSIDs - In the implementation block
@property (assign) BOOL signedInAccountShouldBeApprover;                      //@synthesize signedInAccountShouldBeApprover=_signedInAccountShouldBeApprover - In the implementation block
@property (assign) BOOL forceServerFetch;                                     //@synthesize forceServerFetch=_forceServerFetch - In the implementation block
@property (assign) BOOL doNotFetchFromServer;                                 //@synthesize doNotFetchFromServer=_doNotFetchFromServer - In the implementation block
@property (assign) BOOL promptUserToResolveAuthenticatonFailure;              //@synthesize promptUserToResolveAuthenticatonFailure=_promptUserToResolveAuthenticatonFailure - In the implementation block
-(id)requestOptions;
-(void)startRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setDoNotFetchFromServer:(BOOL)arg1 ;
-(NSArray *)expectedDSIDs;
-(BOOL)signedInAccountShouldBeApprover;
-(BOOL)forceServerFetch;
-(BOOL)doNotFetchFromServer;
-(BOOL)promptUserToResolveAuthenticatonFailure;
-(void)setExpectedDSIDs:(NSArray *)arg1 ;
-(void)setSignedInAccountShouldBeApprover:(BOOL)arg1 ;
-(void)setPromptUserToResolveAuthenticatonFailure:(BOOL)arg1 ;
-(NSDictionary *)serverResponse;
-(void)setForceServerFetch:(BOOL)arg1 ;
@end

