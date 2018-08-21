/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData, NSString;

@interface CTBinarySMS : NSObject {

	int _portAddressingScheme;
	int _srcPort;
	int _dstPort;
	NSData* _payload;
	NSString* _destinationAddress;
	NSString* _smscAddress;

}

@property (assign,nonatomic) int portAddressingScheme;                 //@synthesize portAddressingScheme=_portAddressingScheme - In the implementation block
@property (assign,nonatomic) int srcPort;                              //@synthesize srcPort=_srcPort - In the implementation block
@property (assign,nonatomic) int dstPort;                              //@synthesize dstPort=_dstPort - In the implementation block
@property (nonatomic,copy) NSData * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,copy) NSString * destinationAddress;              //@synthesize destinationAddress=_destinationAddress - In the implementation block
@property (nonatomic,copy) NSString * smscAddress;                     //@synthesize smscAddress=_smscAddress - In the implementation block
-(int)srcPort;
-(int)dstPort;
-(int)portAddressingScheme;
-(NSString *)smscAddress;
-(void)setPortAddressingScheme:(int)arg1 ;
-(void)setSrcPort:(int)arg1 ;
-(void)setDstPort:(int)arg1 ;
-(void)setDestinationAddress:(NSString *)arg1 ;
-(void)setSmscAddress:(NSString *)arg1 ;
-(id)init;
-(BOOL)isValid;
-(NSData *)payload;
-(void)setPayload:(NSData *)arg1 ;
-(NSString *)destinationAddress;
@end

