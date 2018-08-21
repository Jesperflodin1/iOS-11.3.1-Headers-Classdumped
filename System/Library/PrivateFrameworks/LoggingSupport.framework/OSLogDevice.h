/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class SimDevice, NSString;

@interface OSLogDevice : NSObject {

	long long _devType;
	void* _mobDev;
	SimDevice* _simDev;
	NSString* _uid;

}

@property (assign,nonatomic) long long devType;               //@synthesize devType=_devType - In the implementation block
@property (assign,nonatomic) void* mobDev;                    //@synthesize mobDev=_mobDev - In the implementation block
@property (nonatomic,retain) SimDevice * simDev;              //@synthesize simDev=_simDev - In the implementation block
@property (nonatomic,retain) NSString * uid;                  //@synthesize uid=_uid - In the implementation block
-(void)setUid:(NSString *)arg1 ;
-(id)init;
-(id)description;
-(NSString *)uid;
-(id)initWithMobileDevice:(void*)arg1 andID:(id)arg2 ;
-(id)initWithSimualatedDevice:(id)arg1 ;
-(long long)devType;
-(void)setDevType:(long long)arg1 ;
-(void*)mobDev;
-(void)setMobDev:(void*)arg1 ;
-(SimDevice *)simDev;
-(void)setSimDev:(SimDevice *)arg1 ;
@end

