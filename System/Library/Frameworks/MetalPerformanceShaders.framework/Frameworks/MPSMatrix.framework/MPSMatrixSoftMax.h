/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixUnaryKernel.h>

@interface MPSMatrixSoftMax : MPSMatrixUnaryKernel {

	unsigned long long _sourceColumns;
	unsigned long long _sourceRows;

}

@property (assign,nonatomic) unsigned long long sourceRows;                 //@synthesize sourceRows=_sourceRows - In the implementation block
@property (assign,nonatomic) unsigned long long sourceColumns;              //@synthesize sourceColumns=_sourceColumns - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(unsigned long long)sourceColumns;
-(void)setSourceColumns:(unsigned long long)arg1 ;
-(unsigned long long)sourceRows;
-(void)setSourceRows:(unsigned long long)arg1 ;
-(void)encodeToCommandBuffer:(id)arg1 inputMatrix:(id)arg2 resultMatrix:(id)arg3 ;
-(id)initWithCoder:(id)arg1 device:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 device:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(id)initWithDevice:(id)arg1 ;
@end
