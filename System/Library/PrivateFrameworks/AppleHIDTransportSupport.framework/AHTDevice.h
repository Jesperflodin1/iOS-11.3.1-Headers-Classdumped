/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleHIDTransportSupport.framework/AppleHIDTransportSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AHTDevice : NSObject {

	unsigned _service;
	unsigned _connect;
	NSString* _name;

}

@property (assign,nonatomic) unsigned service;               //@synthesize service=_service - In the implementation block
@property (assign,nonatomic) unsigned connect;               //@synthesize connect=_connect - In the implementation block
@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)allDevices;
+(id)withService:(unsigned)arg1 ;
+(id)withName:(id)arg1 ;
+(id)deviceWithParentRegistryId:(unsigned long long)arg1 ;
-(unsigned)service;
-(void)setService:(unsigned)arg1 ;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(BOOL)reset;
-(void)close;
-(BOOL)open;
-(unsigned)connect;
-(id)initWithService:(unsigned)arg1 ;
-(id)getInterfaces;
-(id)getBootLoader;
-(id)getInterface:(unsigned char)arg1 ;
-(BOOL)getPower:(long long*)arg1 ;
-(id)reporterResults;
-(void)setConnect:(unsigned)arg1 ;
-(BOOL)setPower:(long long)arg1 ;
@end

