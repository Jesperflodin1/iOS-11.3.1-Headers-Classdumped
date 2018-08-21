/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSDictionary;

@interface HMDHAPMetadataAssistantCharacteristic : HMFObject {

	BOOL _supportsLocalization;
	NSString* _name;
	NSString* _readHAPCharacteristicName;
	NSString* _writeHAPCharacteristicName;
	NSString* _format;
	NSDictionary* _values;
	NSDictionary* _outValues;

}

@property (nonatomic,retain) NSString * name;                                    //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * readHAPCharacteristicName;               //@synthesize readHAPCharacteristicName=_readHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * writeHAPCharacteristicName;              //@synthesize writeHAPCharacteristicName=_writeHAPCharacteristicName - In the implementation block
@property (nonatomic,retain) NSString * format;                                  //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) BOOL supportsLocalization;                          //@synthesize supportsLocalization=_supportsLocalization - In the implementation block
@property (nonatomic,retain) NSDictionary * values;                              //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSDictionary * outValues;                           //@synthesize outValues=_outValues - In the implementation block
-(id)init;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)format;
-(NSDictionary *)values;
-(void)setValues:(NSDictionary *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(BOOL)supportsLocalization;
-(NSString *)readHAPCharacteristicName;
-(NSString *)writeHAPCharacteristicName;
-(id)initWithName:(id)arg1 readHAPCharacteristic:(id)arg2 writeHAPCharacteristic:(id)arg3 format:(id)arg4 ;
-(void)setReadHAPCharacteristicName:(NSString *)arg1 ;
-(void)setWriteHAPCharacteristicName:(NSString *)arg1 ;
-(void)setSupportsLocalization:(BOOL)arg1 ;
-(NSDictionary *)outValues;
-(void)setOutValues:(NSDictionary *)arg1 ;
@end
