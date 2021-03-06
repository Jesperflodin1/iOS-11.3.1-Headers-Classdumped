/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoEditSupport/PhotoEditSupport-Structs.h>
#import <CoreImage/CIFilter.h>

@class CIFilter;

@interface BLEdgeAwareMaskFilter : CIFilter {

	float* _cubeData;
	SCD_Struct_BL9 _currentInputColor;
	CIFilter* _ciColorCubeFilter;
	SCD_Struct_BL9 _inputColor;

}

@property (assign) SCD_Struct_BL9 inputColor;              //@synthesize inputColor=_inputColor - In the implementation block
-(id)init;
-(void)dealloc;
-(id)outputImage;
-(void)setInputColor:(SCD_Struct_BL9)arg1 ;
-(SCD_Struct_BL9)inputColor;
-(void)setInputImage:(id)arg1 ;
-(BOOL)isDataUpToDate;
-(void)labFromRed:(float)arg1 green:(float)arg2 blue:(float)arg3 lunminance:(float*)arg4 a:(float*)arg5 b:(float*)arg6 ;
-(unsigned long long)dataLength;
-(id)cubeData;
@end

