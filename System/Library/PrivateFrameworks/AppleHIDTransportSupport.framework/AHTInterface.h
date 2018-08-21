/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AHTInterface : NSObject {

	unsigned char _interfaceID;
	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;                         //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;                         //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) unsigned char interfaceID;              //@synthesize interfaceID=_interfaceID - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
+(id)withService:(unsigned)arg1 ;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)reset;
-(void)close;
-(BOOL)open;
-(unsigned)connect;
-(unsigned char)interfaceID;
-(id)initWithService:(unsigned)arg1 ;
-(BOOL)setReport:(unsigned char)arg1 withData:(id)arg2 ;
-(BOOL)getReport:(unsigned char)arg1 withData:(id)arg2 ;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)setPower:(BOOL)arg1 ;
@end

