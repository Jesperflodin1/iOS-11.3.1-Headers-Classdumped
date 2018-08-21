/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:06 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSTExpressionNode.h>

@class NSString;

@interface TSTIdentifierNode : TSTExpressionNode {

	NSString* mSheetName;
	NSString* mTableName;
	NSString* mIdentifier;
	unsigned mSymbol;

}

@property (assign,nonatomic) unsigned symbol; 
-(void)saveToArchiver:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)setSheetName:(id)arg1 ;
-(void)saveToArchive:(IdentifierNodeArchive*)arg1 archiver:(id)arg2 ;
-(void)loadFromArchive:(const IdentifierNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(BOOL)isEqualToExpressionNode:(id)arg1 ;
-(id)detokenizedText;
-(id)formulaPlainText;
-(id)initWithContext:(id)arg1 children:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)initAsCopyOf:(id)arg1 intoContext:(id)arg2 children:(id)arg3 ;
-(TSTCSENodeData)recordHashesForSubexpressions:(id)arg1 ;
-(id)copyByResolvingIdentifiers:(id)arg1 hostTable:(id)arg2 forceReferenceInterpretation:(BOOL)arg3 symbolTable:(TSCESymbolTable*)arg4 oldToNewNodeMap:(id)arg5 ;
-(void)buildASTNodeArray:(TSCEASTNodeArray*)arg1 hostCell:(TSUCellCoord)arg2 symbolTable:(TSCESymbolTable*)arg3 ;
-(id)initWithContext:(id)arg1 identifier:(id)arg2 firstIndex:(unsigned long long)arg3 lastIndex:(unsigned long long)arg4 ;
-(id)identifierWithWhitespaceAppended;
-(void)dealloc;
-(id)description;
-(id)identifier;
-(id)string;
-(unsigned)symbol;
-(void)setSymbol:(unsigned)arg1 ;
-(int)tokenType;
-(id)tableName;
-(void)setTableName:(id)arg1 ;
-(id)sheetName;
@end
