/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface ATGrappaSession : NSObject {

	unsigned _sessionId;
	unsigned long long _sessionType;
	NSData* _sessionResponseData;
	NSData* _sessionRequestData;

}
-(id)initWithType:(unsigned long long)arg1 ;
-(id)establishHostSessionWithDeviceInfo:(id)arg1 clientRequestData:(id*)arg2 ;
-(id)establishDeviceSessionWithRequestData:(id)arg1 responseData:(id*)arg2 ;
-(id)beginHostSessionWithDeviceResponseData:(id)arg1 ;
-(id)_deviceCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_hostCreateSignature:(id*)arg1 forData:(id)arg2 ;
-(id)_deviceVerifySignature:(id)arg1 forData:(id)arg2 ;
-(id)_hostVerifySignature:(id)arg1 forData:(id)arg2 ;
-(id)createSignature:(id*)arg1 forData:(id)arg2 ;
-(id)verifySignature:(id)arg1 forData:(id)arg2 ;
-(id)deviceInfo;
@end

