/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FMF.framework/FMF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FMF/FMF-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FMFDevice : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isActiveDevice;
	BOOL _isThisDevice;
	BOOL _isAutoMeCapable;
	NSString* _deviceId;
	NSString* _deviceName;
	NSString* _idsDeviceId;

}

@property (nonatomic,copy) NSString * deviceId;                 //@synthesize deviceId=_deviceId - In the implementation block
@property (nonatomic,copy) NSString * deviceName;               //@synthesize deviceName=_deviceName - In the implementation block
@property (assign,nonatomic) BOOL isActiveDevice;               //@synthesize isActiveDevice=_isActiveDevice - In the implementation block
@property (assign,nonatomic) BOOL isThisDevice;                 //@synthesize isThisDevice=_isThisDevice - In the implementation block
@property (assign,nonatomic) BOOL isAutoMeCapable;              //@synthesize isAutoMeCapable=_isAutoMeCapable - In the implementation block
@property (nonatomic,copy) NSString * idsDeviceId;              //@synthesize idsDeviceId=_idsDeviceId - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)deviceWithId:(id)arg1 name:(id)arg2 idsDeviceId:(id)arg3 isActive:(BOOL)arg4 isThisDevice:(BOOL)arg5 isAutoMeCapable:(BOOL)arg6 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)idsDeviceId;
-(void)setDeviceName:(NSString *)arg1 ;
-(BOOL)isThisDevice;
-(void)setDeviceId:(NSString *)arg1 ;
-(void)setIsActiveDevice:(BOOL)arg1 ;
-(void)setIsThisDevice:(BOOL)arg1 ;
-(void)setIsAutoMeCapable:(BOOL)arg1 ;
-(void)setIdsDeviceId:(NSString *)arg1 ;
-(void)updateIsActive:(BOOL)arg1 isThisDevice:(BOOL)arg2 ;
-(BOOL)isAutoMeCapable;
-(NSString *)deviceName;
-(BOOL)isActiveDevice;
-(NSString *)deviceId;
@end

