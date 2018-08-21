/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSPArchiverBase.h>

@class TSPArchiverBase;

@interface TSPAlternateArchiver : TSPArchiverBase {

	RepeatedPtrField<TSP::FieldPath>* _fieldPathsToRemove;
	BOOL _isDiff;
	const FieldPath* _fieldPath;
	TSPArchiverBase* _parentArchiver;

}

@property (nonatomic,readonly) const FieldPath* fieldPath;                                              //@synthesize fieldPath=_fieldPath - In the implementation block
@property (nonatomic,__weak,readonly) TSPArchiverBase * parentArchiver;                                 //@synthesize parentArchiver=_parentArchiver - In the implementation block
@property (nonatomic,readonly) const RepeatedPtrField<TSP::FieldPath>* fieldPathsToRemove; 
@property (nonatomic,readonly) BOOL isDiff;                                                             //@synthesize isDiff=_isDiff - In the implementation block
-(BOOL)isDiff;
-(id)initWithObject:(id)arg1 version:(unsigned long long)arg2 isDiff:(BOOL)arg3 fieldPath:(const FieldPath*)arg4 parentArchiver:(id)arg5 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 ;
-(id)alternateDiffForVersion:(unsigned long long)arg1 field:(int)arg2 ;
-(const FieldPath*)fieldPath;
-(TSPArchiverBase *)parentArchiver;
-(const RepeatedPtrField<TSP::FieldPath>*)fieldPathsToRemove;
-(id)parentAlternateDiffForVersion:(unsigned long long)arg1 fieldPath:(int*)arg2 ;
-(void)removeFieldAtEndOfPath:(int*)arg1 ;
-(void)dealloc;
-(id)initWithObject:(id)arg1 ;
-(void)removeField:(int)arg1 ;
@end

