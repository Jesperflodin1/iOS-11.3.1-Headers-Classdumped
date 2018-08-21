/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsSupport.framework/DiagnosticsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <DiagnosticsSupport/DiagnosticsSupport-Structs.h>
@class NSDictionary;

@interface DSIOPSDevice : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,retain) NSDictionary * info;              //@synthesize info=_info - In the implementation block
+(id)deviceWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(NSDictionary *)info;
-(void)setInfo:(NSDictionary *)arg1 ;
-(id)initWithDeviceIdentifier:(SCD_Struct_DS2)arg1 ;
-(id)information;
-(id)serialNumber;
@end

