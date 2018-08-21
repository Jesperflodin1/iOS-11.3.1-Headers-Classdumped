/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCharacteristic;

@interface HMDCharacteristicRequest : HMFObject {

	HMDCharacteristic* _characteristic;
	id _previousValue;

}

@property (nonatomic,readonly) HMDCharacteristic * characteristic;              //@synthesize characteristic=_characteristic - In the implementation block
@property (nonatomic,readonly) id previousValue;                                //@synthesize previousValue=_previousValue - In the implementation block
+(id)requestWithCharacteristic:(id)arg1 ;
-(id)description;
-(id)previousValue;
-(HMDCharacteristic *)characteristic;
-(id)initWithCharacteristic:(id)arg1 ;
@end

