/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CVML/CVML-Structs.h>
@interface CVMLSimilarityMatrix : NSObject {

	shared_ptr<vision::mod::SimilarityMatrixAbstract>* m_MatrixImpl;

}

@property (getter=getMatrixSize,nonatomic,readonly) unsigned long long matrixSize; 
@property (getter=getMaximumValidMatrixDistance,nonatomic,readonly) float maximumValidMatrixDistance; 
@property (getter=getImpl,nonatomic,readonly) void* impl; 
-(id)initWithOptions:(id)arg1 error:(id*)arg2 ;
-(BOOL)addDescriptors:(id)arg1 error:(id*)arg2 ;
-(void)deleteDescriptors:(id)arg1 ;
-(unsigned long long)getMatrixSize;
-(float)getMaximumValidMatrixDistance;
-(id)createCopyForDescriptorIds:(id)arg1 ;
-(id)getDescriptorIdsForRange:(NSRange)arg1 ;
-(float)getDistanceBetweenDescriptor:(unsigned long long)arg1 andDescriptor:(unsigned long long)arg2 ;
-(id)getAllDistancesForId:(unsigned long long)arg1 ;
-(BOOL)containsId:(unsigned long long)arg1 ;
-(void*)getImpl;
@end

