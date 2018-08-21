/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol EDFormulaBuilding <NSObject>
@required
-(int)tokenTypeAtIndex:(unsigned long long)arg1;
-(BOOL)isSupportedFormula;
-(void)setWarning:(int)arg1;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2;
-(int)warningType;
-(void)removeTokenAtIndex:(unsigned long long)arg1;
-(char*)setExtendedDataForLastTokenAtIndex:(unsigned)arg1 length:(unsigned)arg2;
-(BOOL)convertToList:(unsigned)arg1 withFinalParen:(BOOL)arg2;
-(char*)addToken:(int)arg1 extendedDataLength:(unsigned)arg2 numArgs:(int)arg3;
-(BOOL)insertName:(unsigned long long)arg1 atIndex:(unsigned)arg2;
-(BOOL)insertExternalName:(unsigned long long)arg1 withLink:(unsigned long long)arg2 atIndex:(unsigned)arg3;
-(BOOL)addArrayWithCol:(int)arg1 andRow:(int)arg2;
-(BOOL)convertToList:(unsigned)arg1;
-(BOOL)convertToIntersect:(unsigned)arg1;
-(BOOL)convertLastRefsToArea;
-(id)lastTokenRefOrArea3dLinkRefIsValid:(BOOL*)arg1 withEDLinks:(id)arg2;
-(void)markLastTokenAsDuration;
-(void)markLastTokenAsSpanningRefVertically:(BOOL)arg1 withMin:(unsigned short)arg2 andMax:(unsigned short)arg3;
-(BOOL)shrinkSpanningRefAtArgIndex:(unsigned)arg1;
-(BOOL)addInfixOperator:(int)arg1 atIndex:(unsigned)arg2 factor:(double)arg3;
-(BOOL)wrapArgumentsWithOperator:(int)arg1 argumentCount:(unsigned)arg2 atIndex:(unsigned)arg3;
-(BOOL)fixTableOfConstantsRefs;
-(BOOL)uppercaseArgAtIndex:(unsigned)arg1;

@end

