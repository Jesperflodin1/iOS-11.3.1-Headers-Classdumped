/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CdQwUTvJnDEPQgR8, NSData, PKDSPContext;

@interface PKDeviceScorer : NSObject {

	CdQwUTvJnDEPQgR8* _scorer;
	NSData* _lastDeviceScoreIdentifier;
	NSData* _lastDeviceScore;
	double _deviceScoreTimeout;
	PKDSPContext* _context;

}

@property (assign,nonatomic) double deviceScoreTimeout;                  //@synthesize deviceScoreTimeout=_deviceScoreTimeout - In the implementation block
@property (nonatomic,copy,readonly) PKDSPContext * context;              //@synthesize context=_context - In the implementation block
+(BOOL)deviceScoringSupported;
-(id)init;
-(PKDSPContext *)context;
-(id)initWithContext:(id)arg1 ;
-(id)_createScorer;
-(void)_getScoreWithNonce:(id)arg1 cryptogram:(id)arg2 challengeResponse:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)deviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 nonce:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)peerPaymentDeviceScoreWithCryptogram:(id)arg1 challengeResponse:(id)arg2 completion:(/*^block*/id)arg3 ;
-(double)deviceScoreTimeout;
-(void)setDeviceScoreTimeout:(double)arg1 ;
@end

