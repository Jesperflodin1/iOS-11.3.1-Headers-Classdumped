/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/OSXServerSettings.bundle/OSXServerSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface SVDiscoveredServer : NSObject {

	NSString* _computerName;
	NSString* _hostName;
	NSString* _modelName;
	NSString* _address;
	NSString* _hardwareAddress;
	NSString* _operatingSystemVersion;

}

@property (nonatomic,retain) NSString * computerName;                        //@synthesize computerName=_computerName - In the implementation block
@property (nonatomic,retain) NSString * hostName;                            //@synthesize hostName=_hostName - In the implementation block
@property (nonatomic,retain) NSString * modelName;                           //@synthesize modelName=_modelName - In the implementation block
@property (nonatomic,retain) NSString * address;                             //@synthesize address=_address - In the implementation block
@property (nonatomic,retain) NSString * hardwareAddress;                     //@synthesize hardwareAddress=_hardwareAddress - In the implementation block
@property (nonatomic,retain) NSString * operatingSystemVersion;              //@synthesize operatingSystemVersion=_operatingSystemVersion - In the implementation block
+(id)discoveredServerWithNetService:(id)arg1 ;
-(NSString *)hardwareAddress;
-(void)setHardwareAddress:(NSString *)arg1 ;
-(NSString *)hostName;
-(void)setAddress:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithNetService:(id)arg1 ;
-(NSString *)computerName;
-(void)setComputerName:(NSString *)arg1 ;
-(NSString *)address;
-(void)setModelName:(NSString *)arg1 ;
-(NSString *)operatingSystemVersion;
-(void)setOperatingSystemVersion:(NSString *)arg1 ;
-(NSString *)modelName;
-(void)setHostName:(NSString *)arg1 ;
@end

