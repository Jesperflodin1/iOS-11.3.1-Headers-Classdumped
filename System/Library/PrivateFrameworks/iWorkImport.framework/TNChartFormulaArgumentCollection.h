/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@class NSArray;

@interface TNChartFormulaArgumentCollection : NSObject <NSFastEnumeration, NSCopying, NSMutableCopying> {

	NSArray* mArray;
	BOOL mStoreBadRef;

}

@property (assign,nonatomic) BOOL storeBadRef; 
+(id)argumentCollectionFromFormula:(TSCEFormula*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 usingCalcEngine:(id)arg3 ;
+(id)argumentCollectionFromFormula:(TSCEFormula*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 usingCalcEngine:(id)arg3 storeBadRef:(BOOL)arg4 ;
-(id)elementEnumerator;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 usingCalcEngine:(id)arg3 storeBadRef:(BOOL)arg4 ;
-(id)wrappedChartFormulaWithID:(SCD_Struct_TS128)arg1 andLocale:(id)arg2 ;
-(id)initWithFormula:(TSCEFormula*)arg1 inOwner:(const UUIDData<TSP::UUIDData>*)arg2 usingCalcEngine:(id)arg3 ;
-(id)reverseElementEnumerator;
-(BOOL)storeBadRef;
-(void)setStoreBadRef:(BOOL)arg1 ;
-(id)firstElement;
-(id)lastElement;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_TS89*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithArray:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)elementAtIndex:(unsigned long long)arg1 ;
@end

