/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSImage.framework/MPSImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSImage/MPSImage-Structs.h>
#import <MPSImage/MPSUnaryImageKernel.h>

@interface MPSImageReduceUnary : MPSUnaryImageKernel {

	SCD_Struct_MP3 _clipRectSource;
	int _reduceOp;

}

@property (assign,nonatomic) SCD_Struct_MP3 clipRectSource;              //@synthesize clipRectSource=_clipRectSource - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(id)initWithDevice:(id)arg1 reduceOperation:(int)arg2 ;
-(SCD_Struct_MP3)clipRectSource;
-(void)setClipRectSource:(SCD_Struct_MP3)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end

