/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface RTWiFiAccessPoint : NSObject <NSSecureCoding> {

	BOOL _adHoc;
	BOOL _captiveNetwork;
	BOOL _applePersonalHotspot;
	BOOL _carPlay;
	NSString* _mac;
	NSString* _ssid;
	long long _rssi;
	long long _mode;
	long long _channel;
	double _age;
	NSDate* _date;

}

@property (nonatomic,readonly) NSString * mac;                         //@synthesize mac=_mac - In the implementation block
@property (nonatomic,readonly) NSString * ssid;                        //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,readonly) long long rssi;                         //@synthesize rssi=_rssi - In the implementation block
@property (nonatomic,readonly) long long mode;                         //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) long long channel;                      //@synthesize channel=_channel - In the implementation block
@property (nonatomic,readonly) BOOL adHoc;                             //@synthesize adHoc=_adHoc - In the implementation block
@property (nonatomic,readonly) BOOL captiveNetwork;                    //@synthesize captiveNetwork=_captiveNetwork - In the implementation block
@property (nonatomic,readonly) BOOL applePersonalHotspot;              //@synthesize applePersonalHotspot=_applePersonalHotspot - In the implementation block
@property (nonatomic,readonly) BOOL carPlay;                           //@synthesize carPlay=_carPlay - In the implementation block
@property (nonatomic,readonly) double age;                             //@synthesize age=_age - In the implementation block
@property (nonatomic,readonly) NSDate * date;                          //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)ssid;
-(BOOL)captiveNetwork;
-(BOOL)carPlay;
-(long long)rssi;
-(double)age;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(long long)channel;
-(long long)mode;
-(BOOL)applePersonalHotspot;
-(BOOL)adHoc;
-(NSString *)mac;
-(id)initWithMac:(id)arg1 ssid:(id)arg2 rssi:(long long)arg3 mode:(long long)arg4 channel:(long long)arg5 adHoc:(BOOL)arg6 captiveNetwork:(BOOL)arg7 applePersonalHotspot:(BOOL)arg8 carPlay:(BOOL)arg9 age:(double)arg10 date:(id)arg11 ;
@end

