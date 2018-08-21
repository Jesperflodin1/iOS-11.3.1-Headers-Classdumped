/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/UserFS.framework/UserFS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface UserFSVolume : NSObject {

	BOOL _isLocked;
	NSString* _deviceName;
	NSObject*<OS_xpc_object> _connection;

}

@property (nonatomic,retain) NSObject*<OS_xpc_object> connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSString * deviceName;                     //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) BOOL isLocked;                                  //@synthesize isLocked=_isLocked - In the implementation block
+(id)volumeWithDeviceName:(id)arg1 error:(id*)arg2 ;
+(BOOL)prepareToAccessDeviceName:(id)arg1 error:(id*)arg2 ;
-(BOOL)flushAndReturnError:(id*)arg1 ;
-(BOOL)deleteFiles:(id)arg1 error:(id*)arg2 ;
-(id)itemAtPath:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(BOOL)isLocked;
-(NSObject*<OS_xpc_object>)connection;
-(void)setConnection:(NSObject*<OS_xpc_object>)arg1 ;
-(BOOL)closeAndReturnError:(id*)arg1 ;
-(id)initWithDeviceName:(id)arg1 error:(id*)arg2 ;
-(id)rootDirectoryAndReturnError:(id*)arg1 ;
-(NSString *)deviceName;
@end

