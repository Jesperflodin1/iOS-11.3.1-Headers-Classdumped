/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CoreImage/CoreImage-Structs.h>
@interface CPUFaceMask : NSObject {

	CPUColorCube _colorCube;
	CPUColorCube _tempColorCube;
	MetalFaceMaskCubeInputScaling_t _inputScalingForCube;
	int _dilateRadius;
	int _erodeRadius;

}

@property (assign,nonatomic) int dilateRadius;              //@synthesize dilateRadius=_dilateRadius - In the implementation block
@property (assign,nonatomic) int erodeRadius;               //@synthesize erodeRadius=_erodeRadius - In the implementation block
-(int)clearOutputMask:(char*)arg1 WithBytesPerRow:(unsigned long long)arg2 OutputRegion:(CGRect)arg3 ;
-(int)trainSkinMaskUsingInputImage:(const char*)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(CGRect)arg3 QuadRegion:(CGPoint)arg4 ;
-(int)findSkinMaskUsingInputImage:(const char*)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(CGRect)arg3 OutputMask:(char*)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(CGRect)arg6 FaceBounds:(CGRect)arg7 SeedPoints:(CGPoint*)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10 ;
-(int)findToothMaskUsingInputImage:(const char*)arg1 InputBytesPerRow:(unsigned long long)arg2 InputRegion:(CGRect)arg3 OutputMask:(char*)arg4 OutputBytesPerRow:(unsigned long long)arg5 OutputRegion:(CGRect)arg6 TeethBounds:(CGRect)arg7 SeedPoints:(CGPoint*)arg8 NumberOfSeedPoints:(unsigned long long)arg9 FillValue:(unsigned char)arg10 ;
-(int)drawEyeMaskUsingQuads:(MetalFaceMaskEyeQuads_t=IIC[16MetalFaceMaskQuad_t]}Ref)arg1 OutputMask:(char*)arg2 OutputBytesPerRow:(unsigned long long)arg3 OutputRegion:(CGRect)arg4 ;
-(int)dilateRadius;
-(void)setDilateRadius:(int)arg1 ;
-(int)erodeRadius;
-(void)setErodeRadius:(int)arg1 ;
-(id)init;
@end

