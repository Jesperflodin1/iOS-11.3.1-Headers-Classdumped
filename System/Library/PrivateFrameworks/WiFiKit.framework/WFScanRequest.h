/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface WFScanRequest : NSObject {

	BOOL _applyRssiThresholdFilter;
	NSString* _ssid;
	unsigned long long _dwellTime;
	NSArray* _channels;
	long long _rssiThreshold;

}

@property (nonatomic,copy) NSString * ssid;                        //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,retain) NSArray * channels;                   //@synthesize channels=_channels - In the implementation block
@property (assign,nonatomic) long long rssiThreshold;              //@synthesize rssiThreshold=_rssiThreshold - In the implementation block
@property (assign) BOOL applyRssiThresholdFilter;                  //@synthesize applyRssiThresholdFilter=_applyRssiThresholdFilter - In the implementation block
@property (assign) unsigned long long dwellTime;                   //@synthesize dwellTime=_dwellTime - In the implementation block
+(id)scanRequestForSSID:(id)arg1 channels:(id)arg2 ;
+(id)scanRequestForChannels:(id)arg1 ;
-(void)setDwellTime:(unsigned long long)arg1 ;
-(unsigned long long)dwellTime;
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(id)init;
-(id)description;
-(NSArray *)channels;
-(void)setChannels:(NSArray *)arg1 ;
-(void)setRssiThreshold:(long long)arg1 ;
-(long long)rssiThreshold;
-(id)scanParameters;
-(void)setApplyRssiThresholdFilter:(BOOL)arg1 ;
-(id)initWithSSID:(id)arg1 channels:(id)arg2 ;
-(id)_defaultScanDictionary;
-(BOOL)applyRssiThresholdFilter;
-(id)_channelListFromArrayOfChannels:(id)arg1 ;
@end

