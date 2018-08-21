/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface PTPInitCommandRequestPacket : NSObject {

	unsigned char _initiatorGUID[16];
	NSString* _initiatorFriendlyName;

}
-(void)dealloc;
-(id)description;
-(id)initWithInitiatorGUID:(char*)arg1 initiatorFriendlyName:(id)arg2 ;
-(id)contentForTCP;
-(id)initWithTCPBuffer:(void*)arg1 ;
-(const char*)initiatorGUID;
-(void)setInitiatorGUID:(char*)arg1 ;
-(id)initiatorFriendlyName;
-(void)setInitiatorFriendlyName:(id)arg1 ;
@end

