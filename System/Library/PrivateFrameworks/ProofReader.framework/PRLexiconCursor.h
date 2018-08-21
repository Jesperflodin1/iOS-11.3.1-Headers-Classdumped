/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProofReader.framework/ProofReader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ProofReader/ProofReader-Structs.h>
@class PRLexicon, PRLexiconStemSuffixCursor;

@interface PRLexiconCursor : NSObject {

	PRLexicon* _lexicon;
	PRLexiconStemSuffixCursor* _subcursor;
	LXCursorRef _cursor;
	unsigned long long _stemSuffixState;

}
-(void)advanceWithCombinedCharacterSequence:(id)arg1 ;
-(void)addSubcursor:(id)arg1 ;
-(BOOL)hasEntries;
-(void)enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_enumerateCompletions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)initWithLexicon:(id)arg1 ;
-(void)advanceWithString:(id)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(BOOL)hasChildren;
-(void)_advance:(id)arg1 ;
-(void)enumerateEntriesUsingBlock:(/*^block*/id)arg1 ;
@end

