/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ModuleACM/ModuleACM-Structs.h>
@class NSMutableData;

@interface ManagedACMParameter : NSObject {

	NSMutableData* _data;
	SCD_Struct_Ma0* _acmParameter;

}

@property (nonatomic,readonly) SCD_Struct_Ma0* acmParameter;              //@synthesize acmParameter=_acmParameter - In the implementation block
-(id)initWithACMParamType:(unsigned)arg1 bytes:(void*)arg2 length:(unsigned long long)arg3 ;
-(SCD_Struct_Ma0*)acmParameter;
-(id)description;
@end

