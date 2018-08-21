/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TextInput/TextInput_hi.bundle/TextInput_hi
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_hi/TextInput_hi-Structs.h>
#import <TextInput_hi/TIKeyboardInputManager_hi.h>

@class NSArray, NSMutableDictionary, NSMutableArray;

@interface TIKeyboardInputManager_hi_Transliteration : TIKeyboardInputManager_hi {

	BOOL _prioritizeLatinCandidates;
	BOOL _hasCandidates;
	void* _transliterator;
	NSArray* _currentCandidates;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;

}

@property (assign,nonatomic) void* transliterator;                                       //@synthesize transliterator=_transliterator - In the implementation block
@property (assign,nonatomic) BOOL prioritizeLatinCandidates;                             //@synthesize prioritizeLatinCandidates=_prioritizeLatinCandidates - In the implementation block
@property (assign,nonatomic) BOOL hasCandidates;                                         //@synthesize hasCandidates=_hasCandidates - In the implementation block
@property (nonatomic,retain) NSArray * currentCandidates;                                //@synthesize currentCandidates=_currentCandidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;              //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                       //@synthesize committedCandidates=_committedCandidates - In the implementation block
-(void)dealloc;
-(void)suspend;
-(id)candidates;
-(BOOL)hasCandidates;
-(id)keyboardBehaviors;
-(BOOL)supportsNumberKeySelection;
-(BOOL)usesCandidateSelection;
-(id)defaultCandidate;
-(void)setHasCandidates:(BOOL)arg1 ;
-(id)keyEventMap;
-(id)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 ;
-(void)syncToKeyboardState:(id)arg1 from:(id)arg2 afterContextChange:(BOOL)arg3 ;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(id)dictionaryInputMode;
-(id)wordCharacters;
-(TIInputManager*)initImplementation;
-(id)titleForSortingMethod:(id)arg1 ;
-(id)sortingMethods;
-(id)groupedCandidatesFromCandidates:(id)arg1 usingSortingMethod:(id)arg2 ;
-(NSMutableDictionary *)candidateRefsDictionary;
-(id)initWithConfig:(id)arg1 ;
-(NSArray *)currentCandidates;
-(void)setPrioritizeLatinCandidates:(BOOL)arg1 ;
-(id)autocorrectionCandidates;
-(void*)transliterator;
-(id)candidateContextByVerifyingAgainstDocumentState;
-(BOOL)prioritizeLatinCandidates;
-(void)setCurrentCandidates:(NSArray *)arg1 ;
-(void)setTransliterator:(void*)arg1 ;
-(NSMutableArray *)committedCandidates;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
@end

