/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUICore.framework/SiriUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUICore/_SUICEditScript.h>

@class _SUICAtomRanged, NSString;

@interface _SUICEditScriptRanged : _SUICEditScript {

	long long _options;
	_SUICAtomRanged* _currentScriptAtom;

}

@property (nonatomic,__weak,readonly) NSString * stringA; 
@property (nonatomic,__weak,readonly) NSString * stringB; 
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 orderAtomsAscending:(BOOL)arg4 operationPrecedence:(long long)arg5 options:(long long)arg6 ;
+(id)editScriptFromString:(id)arg1 toString:(id)arg2 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 ;
+(id)editScriptForSmallestSingleEditFromString:(id)arg1 toString:(id)arg2 chunkSize:(long long)arg3 ;
-(void)finalizeCurrentScriptAtom;
-(void)initializeCurrentScriptAtom;
-(void)addToCurrentScriptAtomEditOperation:(long long)arg1 editIndex:(unsigned long long)arg2 newText:(id)arg3 indexInArrayB:(unsigned long long)arg4 ;
-(id)initWithOperationPrecedence:(long long)arg1 dataClass:(Class)arg2 chunkSize:(long long)arg3 stringA:(id)arg4 stringB:(id)arg5 orderAtomsAscending:(BOOL)arg6 options:(long long)arg7 ;
-(void)removeAnyOverlapBetweenIndexOfFirstDifference:(long long*)arg1 andReverseIndexOfLastDifference:(long long*)arg2 shouldShortenFirstDifference:(BOOL)arg3 ;
-(void)computeSmallestSingleEdit;
-(NSString *)stringA;
-(NSString *)stringB;
-(id)applyToString:(id)arg1 ;
@end

