/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, CUBonjourDevice, CUNANEndpoint;

@interface CUNetServiceEndpoint : NSObject {

	NSString* _identifier;
	NSString* _name;
	NSDictionary* _serviceInfo;
	NSString* _serviceType;
	CUBonjourDevice* _bonjourDevice;
	CUNANEndpoint* _nanEndpoint;

}

@property (nonatomic,retain) CUBonjourDevice * bonjourDevice;                //@synthesize bonjourDevice=_bonjourDevice - In the implementation block
@property (nonatomic,retain) CUNANEndpoint * nanEndpoint;                    //@synthesize nanEndpoint=_nanEndpoint - In the implementation block
@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * serviceInfo;              //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,copy) NSString * serviceType;                           //@synthesize serviceType=_serviceType - In the implementation block
-(NSString *)serviceType;
-(void)setServiceType:(NSString *)arg1 ;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)descriptionWithLevel:(int)arg1 ;
-(NSDictionary *)serviceInfo;
-(unsigned)updateWithBonjourDevice:(id)arg1 ;
-(unsigned)updateWithNANEndpoint:(id)arg1 ;
-(CUBonjourDevice *)bonjourDevice;
-(void)setBonjourDevice:(CUBonjourDevice *)arg1 ;
-(CUNANEndpoint *)nanEndpoint;
-(void)setNanEndpoint:(CUNANEndpoint *)arg1 ;
@end

