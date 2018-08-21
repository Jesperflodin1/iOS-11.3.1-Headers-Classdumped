/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MetalPerformanceShaders.framework/Frameworks/MPSMatrix.framework/MPSMatrix
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MPSMatrix/MPSMatrix-Structs.h>
#import <MPSMatrix/MPSMatrixBinaryKernel.h>

@class MPSMatrixSolveTriangular;

@interface MPSMatrixSolveCholesky : MPSMatrixBinaryKernel {

	MPSMatrixSolveTriangular* _trsmT;
	MPSMatrixSolveTriangular* _trsmN;
	BOOL _upper;
	unsigned long long _order;
	unsigned long long _numberOfRightHandSides;

}

@property (nonatomic,readonly) BOOL upper;                                           //@synthesize upper=_upper - In the implementation block
@property (assign,nonatomic) unsigned long long order;                               //@synthesize order=_order - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfRightHandSides;              //@synthesize numberOfRightHandSides=_numberOfRightHandSides - In the implementation block
+(const MPSLibraryInfo*)libraryInfo;
-(void)encodeToCommandBuffer:(id)arg1 sourceMatrix:(id)arg2 rightHandSideMatrix:(id)arg3 solutionMatrix:(id)arg4 ;
-(BOOL)upper;
-(unsigned long long)numberOfRightHandSides;
-(void)setNumberOfRightHandSides:(unsigned long long)arg1 ;
-(id)initWithDevice:(id)arg1 upper:(BOOL)arg2 order:(unsigned long long)arg3 numberOfRightHandSides:(unsigned long long)arg4 ;
-(void)dealloc;
-(void)setOrder:(unsigned long long)arg1 ;
-(unsigned long long)order;
@end

