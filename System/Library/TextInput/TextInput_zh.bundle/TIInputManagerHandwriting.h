/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:30:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/TextInput/TextInput_zh.bundle/TextInput_zh
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInput_zh/TextInput_zh-Structs.h>
#import <TextInputCore/TIKeyboardInputManager.h>
#import <libobjc.A.dylib/TIKeyboardActivityObserving.h>

@class TIHandwritingStrokes, NSArray, CIMCandidateData, RecognizerProvider, NSMutableDictionary, NSMutableArray, CHRecognizer, NSString;

@interface TIInputManagerHandwriting : TIKeyboardInputManager <TIKeyboardActivityObserving> {

	BOOL _showingCompletionCandidates;
	BOOL _isInCompletionMode;
	/*^block*/id _contactObserver;
	id _userDictionaryObserver;
	BOOL _shouldLearnAcceptedCandidate;
	BOOL _showingFacemarks;
	TIHandwritingStrokes* _userDrawing;
	NSArray* _facemarkCandidates;
	CIMCandidateData* _candidateData;
	NSArray* _candidates;
	RecognizerProvider* _recognizerProvider;
	NSMutableDictionary* _candidateRefsDictionary;
	NSMutableArray* _committedCandidates;
	NSArray* _proactiveTriggers;

}

@property (assign,nonatomic) BOOL isInCompletionMode;                                       //@synthesize isInCompletionMode=_isInCompletionMode - In the implementation block
@property (assign,nonatomic) BOOL shouldLearnAcceptedCandidate;                             //@synthesize shouldLearnAcceptedCandidate=_shouldLearnAcceptedCandidate - In the implementation block
@property (nonatomic,retain) TIHandwritingStrokes * userDrawing;                            //@synthesize userDrawing=_userDrawing - In the implementation block
@property (assign,nonatomic) BOOL showingFacemarks;                                         //@synthesize showingFacemarks=_showingFacemarks - In the implementation block
@property (nonatomic,readonly) NSArray * facemarkCandidates;                                //@synthesize facemarkCandidates=_facemarkCandidates - In the implementation block
@property (nonatomic,readonly) CIMCandidateData * candidateData;                            //@synthesize candidateData=_candidateData - In the implementation block
@property (nonatomic,retain) NSArray * candidates;                                          //@synthesize candidates=_candidates - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateRefsDictionary;                 //@synthesize candidateRefsDictionary=_candidateRefsDictionary - In the implementation block
@property (nonatomic,retain) NSMutableArray * committedCandidates;                          //@synthesize committedCandidates=_committedCandidates - In the implementation block
@property (nonatomic,readonly) int recognitionType; 
@property (retain,readonly) CHRecognizer * recognizer; 
@property (nonatomic,retain,readonly) RecognizerProvider * recognizerProvider;              //@synthesize recognizerProvider=_recognizerProvider - In the implementation block
@property (nonatomic,retain) NSArray * proactiveTriggers;                                   //@synthesize proactiveTriggers=_proactiveTriggers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)suspend;
-(NSArray *)candidates;
-(id)candidateResultSet;
-(unsigned long long)initialSelectedIndex;
-(BOOL)usesCandidateSelection;
-(void)clearInput;
-(id)searchStringForMarkedText;
-(void)setCandidates:(NSArray *)arg1 ;
-(BOOL)usesAutoDeleteWord;
-(unsigned long long)autoquoteType;
-(BOOL)suppliesCompletions;
-(id)defaultCandidate;
-(BOOL)suppressPlaceholderCandidate;
-(id)addInputObject:(id)arg1 ;
-(CHRecognizer *)recognizer;
-(int)recognitionType;
-(void)deleteFromInputWithContext:(id)arg1 ;
-(void)loadDictionaries;
-(void)keyboardActivityDidTransition:(id)arg1 ;
-(int)mecabraLanguage;
-(void)clearObservers;
-(void)updateUserWordEntries;
-(BOOL)shouldLearnAcceptedCandidate;
-(void)setShouldLearnAcceptedCandidate:(BOOL)arg1 ;
-(void)syncMarkedTextForKeyboardState:(id)arg1 afterContextChange:(BOOL)arg2 ;
-(id)keyboardConfigurationLayoutTag;
-(BOOL)shouldCommitInputString;
-(void)addInput:(id)arg1 withContext:(id)arg2 ;
-(void)inputLocationChanged;
-(id)didAcceptCandidate:(id)arg1 ;
-(TIInputManager*)initImplementation;
-(void)setLearnsCorrection:(BOOL)arg1 ;
-(NSArray *)proactiveTriggers;
-(NSMutableDictionary *)candidateRefsDictionary;
-(id)initWithConfig:(id)arg1 ;
-(void)setIsInCompletionMode:(BOOL)arg1 ;
-(BOOL)isInCompletionMode;
-(BOOL)shouldLookForCompletionCandidates;
-(CIMCandidateData *)candidateData;
-(BOOL)shouldEnableHalfWidthPunctuationForCurrentInputContext;
-(BOOL)updateCompletionCandidatesIfAppropriate;
-(BOOL)updateCandidates;
-(void)mainThreadUpdateCandidates:(id)arg1 ;
-(NSMutableArray *)committedCandidates;
-(RecognizerProvider *)recognizerProvider;
-(void)updateAddressBook;
-(TIHandwritingStrokes *)userDrawing;
-(BOOL)showingFacemarks;
-(id)keyboardCandidateResultSetFromResults;
-(BOOL)isDummyCandidate:(id)arg1 ;
-(void)setShowingFacemarks:(BOOL)arg1 ;
-(NSArray *)facemarkCandidates;
-(id)markedTextForDefaultCandidate;
-(void)cancelRecognition;
-(void)setUserDrawing:(TIHandwritingStrokes *)arg1 ;
-(void)resetCompletionStates;
-(id)historyForRecognition;
-(id)processCandidates:(id)arg1 ;
-(void)clearCandidateRefsDictionary;
-(unsigned long long)predictionOptions:(BOOL)arg1 ;
-(void)setProactiveTriggers:(NSArray *)arg1 ;
-(void)setCandidateRefsDictionary:(NSMutableDictionary *)arg1 ;
-(void)setCommittedCandidates:(NSMutableArray *)arg1 ;
@end

