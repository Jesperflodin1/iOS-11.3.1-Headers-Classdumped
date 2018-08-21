/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@interface TSCEReferenceEnumerator : NSObject {

	TSCEASTNodeArray* mAST;
	TSCEASTNodeArrayReferenceIteratorState* mReferenceIteratorState;

}
-(id)initWithCalculationEngine:(id)arg1 defaultFormulaOwnerUID:(const UUIDData<TSP::UUIDData>*)arg2 nodeArray:(const TSCEASTNodeArray*)arg3 myHostCellID:(TSUCellCoord)arg4 doImplicitIntersection:(BOOL)arg5 doUidReferences:(BOOL)arg6 ;
-(void)dealloc;
-(const TSCECReference*)nextReference;
@end
