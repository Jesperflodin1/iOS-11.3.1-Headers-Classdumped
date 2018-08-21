/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ModelIO.framework/ModelIO
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModelIO/ModelIO-Structs.h>
#import <ModelIO/MDLAnimatedValue.h>

@interface MDLAnimatedQuaternionArray : MDLAnimatedValue {

	unsigned long long _elementCount;

}

@property (assign,nonatomic) unsigned long long elementCount;              //@synthesize elementCount=_elementCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithElementCount:(unsigned long long)arg1 ;
-(void)resetWithUsdAttribute:(const UsdAttribute*)arg1 timeScale:(double)arg2 ;
-(VtValue=aligned_storage_imp<8, 8>=(data_t=[8c]a8)}TfPointerAndBits<const VtValue::_TypeInfo>=_TypeInfo}}}Ref)defaultVtValue;
-(void)setFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)setDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 atTime:(double)arg3 ;
-(void)resetWithFloatQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(void)resetWithDoubleQuaternionArray:(const SCD_Struct_MD20*)arg1 count:(unsigned long long)arg2 atTimes:(const double*)arg3 count:(unsigned long long)arg4 ;
-(unsigned long long)getFloatQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(unsigned long long)getDoubleQuaternionArray:(SCD_Struct_MD20*)arg1 maxCount:(unsigned long long)arg2 ;
-(void)setElementCount:(unsigned long long)arg1 ;
-(unsigned long long)elementCount;
-(unsigned long long)precision;
@end
