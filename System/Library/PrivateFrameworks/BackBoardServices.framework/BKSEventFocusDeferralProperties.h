/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface BKSEventFocusDeferralProperties : NSObject <NSSecureCoding> {

	int _pid;
	unsigned _contextID;
	NSString* _clientID;
	NSString* _displayUUID;

}

@property (nonatomic,copy,readonly) NSString * clientID;                 //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,readonly) int pid;                                  //@synthesize pid=_pid - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayUUID;              //@synthesize displayUUID=_displayUUID - In the implementation block
@property (nonatomic,readonly) unsigned contextID;                       //@synthesize contextID=_contextID - In the implementation block
+(id)propertiesWithMainDisplayAndClientID:(id)arg1 pid:(int)arg2 contextID:(unsigned)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)propertiesWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(id)initWithClientID:(id)arg1 pid:(int)arg2 displayUUID:(id)arg3 contextID:(unsigned)arg4 ;
-(NSString *)displayUUID;
-(BOOL)isEqualNotIncludingClientIDAndPid:(id)arg1 ;
-(id)propertiesOneLevelMoreGeneric;
-(void)setPid:(int)arg1 ;
-(NSString *)clientID;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)contextID;
-(id)conciseDescription;
-(int)pid;
@end
