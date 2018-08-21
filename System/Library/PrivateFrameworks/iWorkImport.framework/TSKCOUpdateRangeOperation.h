/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSKCOUpdateOperation.h>
#import <iWorkImport/TSKCORangeOperation.h>
#import <iWorkImport/TSKCOUpdateRangeOperationSubset.h>
#import <iWorkImport/TSKCOTransforming.h>

@class TSKCORangeAddress;

@interface TSKCOUpdateRangeOperation : TSKCOUpdateOperation <TSKCORangeOperation, TSKCOUpdateRangeOperationSubset, TSKCOTransforming> {

	int _transformBehavior;
	TSKCORangeAddress* _address;

}

@property (nonatomic,readonly) int transformBehavior;                    //@synthesize transformBehavior=_transformBehavior - In the implementation block
@property (nonatomic,readonly) TSKCORangeAddress * address;              //@synthesize address=_address - In the implementation block
+(id)stringForTransformBehavior:(int)arg1 ;
-(void)saveToArchiver:(id)arg1 message:(Operation*)arg2 ;
-(id)operationWithNewNoop:(BOOL)arg1 ;
-(id)initWithUnarchiver:(id)arg1 message:(const Operation*)arg2 ;
-(id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 noop:(BOOL)arg3 ;
-(id)p_initWithRangeAddress:(id)arg1 propertyName:(id)arg2 transformBehavior:(int)arg3 noop:(BOOL)arg4 ;
-(id)operationWithNewAddress:(id)arg1 ;
-(int)transformBehavior;
-(id)toUpdateRangeOperation;
-(id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)initWithRangeAddress:(id)arg1 propertyName:(id)arg2 ;
-(id)initWithRangeAddress:(id)arg1 selectionPropertyName:(id)arg2 ;
-(id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3 ;
-(id)ut_transformByTransformer:(id)arg1 ;
-(TSKCORangeAddress *)address;
-(id)toString;
@end

