/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class WFNetworkProfile, NSArray, NSString;

@interface WFANQPQueryResponse : NSObject {

	WFNetworkProfile* _profile;
	NSArray* _cellNetworkInfo;
	NSArray* _roamingConsortium;
	NSArray* _domains;
	NSString* _ssid;
	NSString* _bssid;
	NSString* _operatorName;
	long long _channel;

}

@property (nonatomic,copy) NSArray * cellNetworkInfo;                  //@synthesize cellNetworkInfo=_cellNetworkInfo - In the implementation block
@property (nonatomic,retain) NSArray * roamingConsortium;              //@synthesize roamingConsortium=_roamingConsortium - In the implementation block
@property (nonatomic,retain) NSArray * domains;                        //@synthesize domains=_domains - In the implementation block
@property (nonatomic,copy) WFNetworkProfile * profile;                 //@synthesize profile=_profile - In the implementation block
@property (nonatomic,copy) NSString * ssid;                            //@synthesize ssid=_ssid - In the implementation block
@property (nonatomic,copy) NSString * bssid;                           //@synthesize bssid=_bssid - In the implementation block
@property (nonatomic,copy) NSString * operatorName;                    //@synthesize operatorName=_operatorName - In the implementation block
@property (assign) long long channel;                                  //@synthesize channel=_channel - In the implementation block
-(void)setSsid:(NSString *)arg1 ;
-(NSString *)ssid;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setChannel:(long long)arg1 ;
-(long long)channel;
-(void)setBssid:(NSString *)arg1 ;
-(NSString *)operatorName;
-(void)setDomains:(NSArray *)arg1 ;
-(NSArray *)domains;
-(NSString *)bssid;
-(WFNetworkProfile *)profile;
-(void)setProfile:(WFNetworkProfile *)arg1 ;
-(void)setOperatorName:(NSString *)arg1 ;
-(id)initWithProfile:(id)arg1 ANQPResponse:(id)arg2 ;
-(BOOL)isEqualToWFANQPResponse:(id)arg1 ;
-(NSArray *)cellNetworkInfo;
-(void)setCellNetworkInfo:(NSArray *)arg1 ;
-(NSArray *)roamingConsortium;
-(void)setRoamingConsortium:(NSArray *)arg1 ;
@end
